#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DBG_SET_ANALYZE_FLAG__FP12RS_STACKDATAi
// Address: 0x27cfd0 - 0x27d064
void ps2__DBG_SET_ANALYZE_FLAG__FP12RS_STACKDATAi_0x27cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DBG_SET_ANALYZE_FLAG__FP12RS_STACKDATAi_0x27cfd0");
#endif

    switch (ctx->pc) {
        case 0x27cfecu: goto label_27cfec;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d008u: goto label_27d008;
        case 0x27d010u: goto label_27d010;
        case 0x27d028u: goto label_27d028;
        case 0x27d048u: goto label_27d048;
        default: break;
    }

    ctx->pc = 0x27cfd0u;

    // 0x27cfd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27cfd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27cfd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27cfdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27cfe0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27cfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27cfe4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CFE4u;
    SET_GPR_U32(ctx, 31, 0x27CFECu);
    ctx->pc = 0x27CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CFE4u;
            // 0x27cfe8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CFECu; }
        if (ctx->pc != 0x27CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CFECu; }
        if (ctx->pc != 0x27CFECu) { return; }
    }
    ctx->pc = 0x27CFECu;
label_27cfec:
    // 0x27cfec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cff4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CFF4u;
    SET_GPR_U32(ctx, 31, 0x27CFFCu);
    ctx->pc = 0x27CFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CFF4u;
            // 0x27cff8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CFFCu; }
        if (ctx->pc != 0x27CFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CFFCu; }
        if (ctx->pc != 0x27CFFCu) { return; }
    }
    ctx->pc = 0x27CFFCu;
label_27cffc:
    // 0x27cffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d000: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D000u;
    SET_GPR_U32(ctx, 31, 0x27D008u);
    ctx->pc = 0x27D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D000u;
            // 0x27d004: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D008u; }
        if (ctx->pc != 0x27D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D008u; }
        if (ctx->pc != 0x27D008u) { return; }
    }
    ctx->pc = 0x27D008u;
label_27d008:
    // 0x27d008: 0xc064220  jal         func_190880
    ctx->pc = 0x27D008u;
    SET_GPR_U32(ctx, 31, 0x27D010u);
    ctx->pc = 0x27D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D008u;
            // 0x27d00c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D010u; }
        if (ctx->pc != 0x27D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D010u; }
        if (ctx->pc != 0x27D010u) { return; }
    }
    ctx->pc = 0x27D010u;
label_27d010:
    // 0x27d010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D010u;
    {
        const bool branch_taken_0x27d010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D010u;
            // 0x27d014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d010) {
            ctx->pc = 0x27D020u;
            goto label_27d020;
        }
    }
    ctx->pc = 0x27D018u;
    // 0x27d018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D018u;
    {
        const bool branch_taken_0x27d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D018u;
            // 0x27d01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d018) {
            ctx->pc = 0x27D04Cu;
            goto label_27d04c;
        }
    }
    ctx->pc = 0x27D020u;
label_27d020:
    // 0x27d020: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x27D020u;
    SET_GPR_U32(ctx, 31, 0x27D028u);
    ctx->pc = 0x27D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D020u;
            // 0x27d024: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D028u; }
        if (ctx->pc != 0x27D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D028u; }
        if (ctx->pc != 0x27D028u) { return; }
    }
    ctx->pc = 0x27D028u;
label_27d028:
    // 0x27d028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D028u;
    {
        const bool branch_taken_0x27d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D028u;
            // 0x27d02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d028) {
            ctx->pc = 0x27D038u;
            goto label_27d038;
        }
    }
    ctx->pc = 0x27D030u;
    // 0x27d030: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D030u;
    {
        const bool branch_taken_0x27d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D030u;
            // 0x27d034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d030) {
            ctx->pc = 0x27D04Cu;
            goto label_27d04c;
        }
    }
    ctx->pc = 0x27D038u;
label_27d038:
    // 0x27d038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d03c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27d03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d040: 0xc0aa8a8  jal         func_2AA2A0
    ctx->pc = 0x27D040u;
    SET_GPR_U32(ctx, 31, 0x27D048u);
    ctx->pc = 0x27D044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D040u;
            // 0x27d044: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA2A0u;
    if (runtime->hasFunction(0x2AA2A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D048u; }
        if (ctx->pc != 0x27D048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetAnalyzeFlag__9CEditDataFiii_0x2aa2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D048u; }
        if (ctx->pc != 0x27D048u) { return; }
    }
    ctx->pc = 0x27D048u;
label_27d048:
    // 0x27d048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d04c:
    // 0x27d04c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d05c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D05Cu;
            // 0x27d060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D064u;
}
