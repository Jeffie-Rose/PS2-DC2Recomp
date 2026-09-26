#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SAVEDATA_ETC__FP12RS_STACKDATAi
// Address: 0x26a030 - 0x26a1a8
void ps2__SET_SAVEDATA_ETC__FP12RS_STACKDATAi_0x26a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SAVEDATA_ETC__FP12RS_STACKDATAi_0x26a030");
#endif

    switch (ctx->pc) {
        case 0x26a048u: goto label_26a048;
        case 0x26a084u: goto label_26a084;
        case 0x26a0a0u: goto label_26a0a0;
        case 0x26a0b0u: goto label_26a0b0;
        case 0x26a0e0u: goto label_26a0e0;
        case 0x26a0ecu: goto label_26a0ec;
        case 0x26a10cu: goto label_26a10c;
        case 0x26a13cu: goto label_26a13c;
        case 0x26a14cu: goto label_26a14c;
        case 0x26a168u: goto label_26a168;
        case 0x26a180u: goto label_26a180;
        default: break;
    }

    ctx->pc = 0x26a030u;

    // 0x26a030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a040: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A040u;
    SET_GPR_U32(ctx, 31, 0x26A048u);
    ctx->pc = 0x26A044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A040u;
            // 0x26a044: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A048u; }
        if (ctx->pc != 0x26A048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A048u; }
        if (ctx->pc != 0x26A048u) { return; }
    }
    ctx->pc = 0x26A048u;
label_26a048:
    // 0x26a048: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a04c: 0x1043004a  beq         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x26A04Cu;
    {
        const bool branch_taken_0x26a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A04Cu;
            // 0x26a050: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a04c) {
            ctx->pc = 0x26A178u;
            goto label_26a178;
        }
    }
    ctx->pc = 0x26A054u;
    // 0x26a054: 0x1043003b  beq         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x26A054u;
    {
        const bool branch_taken_0x26a054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A054u;
            // 0x26a058: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a054) {
            ctx->pc = 0x26A144u;
            goto label_26a144;
        }
    }
    ctx->pc = 0x26A05Cu;
    // 0x26a05c: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x26A05Cu;
    {
        const bool branch_taken_0x26a05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A05Cu;
            // 0x26a060: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a05c) {
            ctx->pc = 0x26A104u;
            goto label_26a104;
        }
    }
    ctx->pc = 0x26A064u;
    // 0x26a064: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26A064u;
    {
        const bool branch_taken_0x26a064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26a064) {
            ctx->pc = 0x26A0A8u;
            goto label_26a0a8;
        }
    }
    ctx->pc = 0x26A06Cu;
    // 0x26a06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A06Cu;
    {
        const bool branch_taken_0x26a06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a06c) {
            ctx->pc = 0x26A07Cu;
            goto label_26a07c;
        }
    }
    ctx->pc = 0x26A074u;
    // 0x26a074: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x26A074u;
    {
        const bool branch_taken_0x26a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A074u;
            // 0x26a078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a074) {
            ctx->pc = 0x26A188u;
            goto label_26a188;
        }
    }
    ctx->pc = 0x26A07Cu;
label_26a07c:
    // 0x26a07c: 0xc064220  jal         func_190880
    ctx->pc = 0x26A07Cu;
    SET_GPR_U32(ctx, 31, 0x26A084u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A084u; }
        if (ctx->pc != 0x26A084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A084u; }
        if (ctx->pc != 0x26A084u) { return; }
    }
    ctx->pc = 0x26A084u;
label_26a084:
    // 0x26a084: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a088: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A088u;
    {
        const bool branch_taken_0x26a088 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A088u;
            // 0x26a08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a088) {
            ctx->pc = 0x26A098u;
            goto label_26a098;
        }
    }
    ctx->pc = 0x26A090u;
    // 0x26a090: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x26A090u;
    {
        const bool branch_taken_0x26a090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A090u;
            // 0x26a094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a090) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A098u;
label_26a098:
    // 0x26a098: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A098u;
    SET_GPR_U32(ctx, 31, 0x26A0A0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0A0u; }
        if (ctx->pc != 0x26A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0A0u; }
        if (ctx->pc != 0x26A0A0u) { return; }
    }
    ctx->pc = 0x26A0A0u;
label_26a0a0:
    // 0x26a0a0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26A0A0u;
    {
        const bool branch_taken_0x26a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0A0u;
            // 0x26a0a4: 0xae221a08  sw          $v0, 0x1A08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0a0) {
            ctx->pc = 0x26A190u;
            goto label_26a190;
        }
    }
    ctx->pc = 0x26A0A8u;
label_26a0a8:
    // 0x26a0a8: 0xc064220  jal         func_190880
    ctx->pc = 0x26A0A8u;
    SET_GPR_U32(ctx, 31, 0x26A0B0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0B0u; }
        if (ctx->pc != 0x26A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0B0u; }
        if (ctx->pc != 0x26A0B0u) { return; }
    }
    ctx->pc = 0x26A0B0u;
label_26a0b0:
    // 0x26a0b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A0B0u;
    {
        const bool branch_taken_0x26a0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0B0u;
            // 0x26a0b4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b0) {
            ctx->pc = 0x26A0C0u;
            goto label_26a0c0;
        }
    }
    ctx->pc = 0x26A0B8u;
    // 0x26a0b8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26A0B8u;
    {
        const bool branch_taken_0x26a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0B8u;
            // 0x26a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b8) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A0C0u;
label_26a0c0:
    // 0x26a0c0: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a0c4: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x26a0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26a0c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A0C8u;
    {
        const bool branch_taken_0x26a0c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0C8u;
            // 0x26a0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0c8) {
            ctx->pc = 0x26A0D8u;
            goto label_26a0d8;
        }
    }
    ctx->pc = 0x26A0D0u;
    // 0x26a0d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26A0D0u;
    {
        const bool branch_taken_0x26a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0D0u;
            // 0x26a0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d0) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A0D8u;
label_26a0d8:
    // 0x26a0d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A0D8u;
    SET_GPR_U32(ctx, 31, 0x26A0E0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0E0u; }
        if (ctx->pc != 0x26A0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0E0u; }
        if (ctx->pc != 0x26A0E0u) { return; }
    }
    ctx->pc = 0x26A0E0u;
label_26a0e0:
    // 0x26a0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0e4: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x26A0E4u;
    SET_GPR_U32(ctx, 31, 0x26A0ECu);
    ctx->pc = 0x26A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0E4u;
            // 0x26a0e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0ECu; }
        if (ctx->pc != 0x26A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0ECu; }
        if (ctx->pc != 0x26A0ECu) { return; }
    }
    ctx->pc = 0x26A0ECu;
label_26a0ec:
    // 0x26a0ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A0ECu;
    {
        const bool branch_taken_0x26a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0ECu;
            // 0x26a0f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0ec) {
            ctx->pc = 0x26A0FCu;
            goto label_26a0fc;
        }
    }
    ctx->pc = 0x26A0F4u;
    // 0x26a0f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x26A0F4u;
    {
        const bool branch_taken_0x26a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0F4u;
            // 0x26a0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0f4) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A0FCu;
label_26a0fc:
    // 0x26a0fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26A0FCu;
    {
        const bool branch_taken_0x26a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0FCu;
            // 0x26a100: 0xa043000a  sb          $v1, 0xA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0fc) {
            ctx->pc = 0x26A190u;
            goto label_26a190;
        }
    }
    ctx->pc = 0x26A104u;
label_26a104:
    // 0x26a104: 0xc064220  jal         func_190880
    ctx->pc = 0x26A104u;
    SET_GPR_U32(ctx, 31, 0x26A10Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A10Cu; }
        if (ctx->pc != 0x26A10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A10Cu; }
        if (ctx->pc != 0x26A10Cu) { return; }
    }
    ctx->pc = 0x26A10Cu;
label_26a10c:
    // 0x26a10c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A10Cu;
    {
        const bool branch_taken_0x26a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A10Cu;
            // 0x26a110: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a10c) {
            ctx->pc = 0x26A11Cu;
            goto label_26a11c;
        }
    }
    ctx->pc = 0x26A114u;
    // 0x26a114: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26A114u;
    {
        const bool branch_taken_0x26a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A114u;
            // 0x26a118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a114) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A11Cu;
label_26a11c:
    // 0x26a11c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a120: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x26a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26a124: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A124u;
    {
        const bool branch_taken_0x26a124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A124u;
            // 0x26a128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a124) {
            ctx->pc = 0x26A134u;
            goto label_26a134;
        }
    }
    ctx->pc = 0x26A12Cu;
    // 0x26a12c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26A12Cu;
    {
        const bool branch_taken_0x26a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A12Cu;
            // 0x26a130: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a12c) {
            ctx->pc = 0x26A198u;
            goto label_26a198;
        }
    }
    ctx->pc = 0x26A134u;
label_26a134:
    // 0x26a134: 0xc0672b4  jal         func_19CAD0
    ctx->pc = 0x26A134u;
    SET_GPR_U32(ctx, 31, 0x26A13Cu);
    ctx->pc = 0x19CAD0u;
    if (runtime->hasFunction(0x19CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A13Cu; }
        if (ctx->pc != 0x26A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllWeaponRepair__16CUserDataManagerFv_0x19cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A13Cu; }
        if (ctx->pc != 0x26A13Cu) { return; }
    }
    ctx->pc = 0x26A13Cu;
label_26a13c:
    // 0x26a13c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26A13Cu;
    {
        const bool branch_taken_0x26a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A13Cu;
            // 0x26a140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a13c) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A144u;
label_26a144:
    // 0x26a144: 0xc064220  jal         func_190880
    ctx->pc = 0x26A144u;
    SET_GPR_U32(ctx, 31, 0x26A14Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A14Cu; }
        if (ctx->pc != 0x26A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A14Cu; }
        if (ctx->pc != 0x26A14Cu) { return; }
    }
    ctx->pc = 0x26A14Cu;
label_26a14c:
    // 0x26a14c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a150: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A150u;
    {
        const bool branch_taken_0x26a150 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A150u;
            // 0x26a154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a150) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x26A158u;
    // 0x26a158: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26A158u;
    {
        const bool branch_taken_0x26a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A158u;
            // 0x26a15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a158) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A160u;
label_26a160:
    // 0x26a160: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A160u;
    SET_GPR_U32(ctx, 31, 0x26A168u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A168u; }
        if (ctx->pc != 0x26A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A168u; }
        if (ctx->pc != 0x26A168u) { return; }
    }
    ctx->pc = 0x26A168u;
label_26a168:
    // 0x26a168: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x26a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x26a16c: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x26a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x26a170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26A170u;
    {
        const bool branch_taken_0x26a170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A170u;
            // 0x26a174: 0xa02243c9  sb          $v0, 0x43C9($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17353), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a170) {
            ctx->pc = 0x26A190u;
            goto label_26a190;
        }
    }
    ctx->pc = 0x26A178u;
label_26a178:
    // 0x26a178: 0xc068620  jal         func_1A1880
    ctx->pc = 0x26A178u;
    SET_GPR_U32(ctx, 31, 0x26A180u);
    ctx->pc = 0x1A1880u;
    if (runtime->hasFunction(0x1A1880u)) {
        auto targetFn = runtime->lookupFunction(0x1A1880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A180u; }
        if (ctx->pc != 0x26A180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteErekiFish__Fv_0x1a1880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A180u; }
        if (ctx->pc != 0x26A180u) { return; }
    }
    ctx->pc = 0x26A180u;
label_26a180:
    // 0x26a180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A180u;
    {
        const bool branch_taken_0x26a180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a180) {
            ctx->pc = 0x26A190u;
            goto label_26a190;
        }
    }
    ctx->pc = 0x26A188u;
label_26a188:
    // 0x26a188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A188u;
    {
        const bool branch_taken_0x26a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a188) {
            ctx->pc = 0x26A194u;
            goto label_26a194;
        }
    }
    ctx->pc = 0x26A190u;
label_26a190:
    // 0x26a190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a194:
    // 0x26a194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26a198:
    // 0x26a198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x26A1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1A0u;
            // 0x26a1a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A1A8u;
}
