#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_CULB_DEF__FP12RS_STACKDATAi
// Address: 0x2761f0 - 0x27625c
void ps2__SPHIDA_GET_CULB_DEF__FP12RS_STACKDATAi_0x2761f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_CULB_DEF__FP12RS_STACKDATAi_0x2761f0");
#endif

    switch (ctx->pc) {
        case 0x276204u: goto label_276204;
        case 0x27620cu: goto label_27620c;
        case 0x27622cu: goto label_27622c;
        case 0x27623cu: goto label_27623c;
        case 0x276248u: goto label_276248;
        default: break;
    }

    ctx->pc = 0x2761f0u;

    // 0x2761f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2761f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2761f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2761f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2761f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2761fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2761FCu;
    SET_GPR_U32(ctx, 31, 0x276204u);
    ctx->pc = 0x276200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2761FCu;
            // 0x276200: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276204u; }
        if (ctx->pc != 0x276204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276204u; }
        if (ctx->pc != 0x276204u) { return; }
    }
    ctx->pc = 0x276204u;
label_276204:
    // 0x276204: 0xc0ba374  jal         func_2E8DD0
    ctx->pc = 0x276204u;
    SET_GPR_U32(ctx, 31, 0x27620Cu);
    ctx->pc = 0x276208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276204u;
            // 0x276208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8DD0u;
    if (runtime->hasFunction(0x2E8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27620Cu; }
        if (ctx->pc != 0x27620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaClubDef__Fi_0x2e8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27620Cu; }
        if (ctx->pc != 0x27620Cu) { return; }
    }
    ctx->pc = 0x27620Cu;
label_27620c:
    // 0x27620c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27620Cu;
    {
        const bool branch_taken_0x27620c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27620c) {
            ctx->pc = 0x27621Cu;
            goto label_27621c;
        }
    }
    ctx->pc = 0x276214u;
    // 0x276214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x276214u;
    {
        const bool branch_taken_0x276214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276214u;
            // 0x276218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276214) {
            ctx->pc = 0x27624Cu;
            goto label_27624c;
        }
    }
    ctx->pc = 0x27621Cu;
label_27621c:
    // 0x27621c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x27621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276224: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276224u;
    SET_GPR_U32(ctx, 31, 0x27622Cu);
    ctx->pc = 0x276228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276224u;
            // 0x276228: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27622Cu; }
        if (ctx->pc != 0x27622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27622Cu; }
        if (ctx->pc != 0x27622Cu) { return; }
    }
    ctx->pc = 0x27622Cu;
label_27622c:
    // 0x27622c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x27622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276234: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276234u;
    SET_GPR_U32(ctx, 31, 0x27623Cu);
    ctx->pc = 0x276238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276234u;
            // 0x276238: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27623Cu; }
        if (ctx->pc != 0x27623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27623Cu; }
        if (ctx->pc != 0x27623Cu) { return; }
    }
    ctx->pc = 0x27623Cu;
label_27623c:
    // 0x27623c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27623cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x276240: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x276240u;
    SET_GPR_U32(ctx, 31, 0x276248u);
    ctx->pc = 0x276244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276240u;
            // 0x276244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276248u; }
        if (ctx->pc != 0x276248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276248u; }
        if (ctx->pc != 0x276248u) { return; }
    }
    ctx->pc = 0x276248u;
label_276248:
    // 0x276248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27624c:
    // 0x27624c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27624cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276254: 0x3e00008  jr          $ra
    ctx->pc = 0x276254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276254u;
            // 0x276258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27625Cu;
}
