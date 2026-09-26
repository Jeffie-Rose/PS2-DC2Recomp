#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ROT_LOOK_POS__FP12RS_STACKDATAi
// Address: 0x266950 - 0x26699c
void ps2__GET_ROT_LOOK_POS__FP12RS_STACKDATAi_0x266950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ROT_LOOK_POS__FP12RS_STACKDATAi_0x266950");
#endif

    switch (ctx->pc) {
        case 0x266964u: goto label_266964;
        case 0x266974u: goto label_266974;
        case 0x26697cu: goto label_26697c;
        case 0x266988u: goto label_266988;
        default: break;
    }

    ctx->pc = 0x266950u;

    // 0x266950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26695c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26695Cu;
    SET_GPR_U32(ctx, 31, 0x266964u);
    ctx->pc = 0x266960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26695Cu;
            // 0x266960: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266964u; }
        if (ctx->pc != 0x266964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266964u; }
        if (ctx->pc != 0x266964u) { return; }
    }
    ctx->pc = 0x266964u;
label_266964:
    // 0x266964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266968: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x266968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26696c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26696Cu;
    SET_GPR_U32(ctx, 31, 0x266974u);
    ctx->pc = 0x266970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26696Cu;
            // 0x266970: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266974u; }
        if (ctx->pc != 0x266974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266974u; }
        if (ctx->pc != 0x266974u) { return; }
    }
    ctx->pc = 0x266974u;
label_266974:
    // 0x266974: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x266974u;
    SET_GPR_U32(ctx, 31, 0x26697Cu);
    ctx->pc = 0x266978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266974u;
            // 0x266978: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26697Cu; }
        if (ctx->pc != 0x26697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26697Cu; }
        if (ctx->pc != 0x26697Cu) { return; }
    }
    ctx->pc = 0x26697Cu;
label_26697c:
    // 0x26697c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266980: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266980u;
    SET_GPR_U32(ctx, 31, 0x266988u);
    ctx->pc = 0x266984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266980u;
            // 0x266984: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266988u; }
        if (ctx->pc != 0x266988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266988u; }
        if (ctx->pc != 0x266988u) { return; }
    }
    ctx->pc = 0x266988u;
label_266988:
    // 0x266988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26698c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266994: 0x3e00008  jr          $ra
    ctx->pc = 0x266994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266994u;
            // 0x266998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26699Cu;
}
