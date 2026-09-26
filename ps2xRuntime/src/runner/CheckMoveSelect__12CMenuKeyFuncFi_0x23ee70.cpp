#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMoveSelect__12CMenuKeyFuncFi
// Address: 0x23ee70 - 0x23eecc
void CheckMoveSelect__12CMenuKeyFuncFi_0x23ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMoveSelect__12CMenuKeyFuncFi_0x23ee70");
#endif

    switch (ctx->pc) {
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eec0u: goto label_23eec0;
        default: break;
    }

    ctx->pc = 0x23ee70u;

    // 0x23ee70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ee74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ee78: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x23ee78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23ee7c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23EE7Cu;
    {
        const bool branch_taken_0x23ee7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE7Cu;
            // 0x23ee80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee7c) {
            ctx->pc = 0x23EEC0u;
            goto label_23eec0;
        }
    }
    ctx->pc = 0x23EE84u;
    // 0x23ee84: 0x8c860134  lw          $a2, 0x134($a0)
    ctx->pc = 0x23ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x23ee88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ee8c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x23ee90: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EE90u;
    {
        const bool branch_taken_0x23ee90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ee90) {
            ctx->pc = 0x23EEB8u;
            goto label_23eeb8;
        }
    }
    ctx->pc = 0x23EE98u;
    // 0x23ee98: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EE98u;
    {
        const bool branch_taken_0x23ee98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee98) {
            ctx->pc = 0x23EEA8u;
            goto label_23eea8;
        }
    }
    ctx->pc = 0x23EEA0u;
    // 0x23eea0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23EEA0u;
    {
        const bool branch_taken_0x23eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EEA0u;
            // 0x23eea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eea0) {
            ctx->pc = 0x23EEC4u;
            goto label_23eec4;
        }
    }
    ctx->pc = 0x23EEA8u;
label_23eea8:
    // 0x23eea8: 0xc08fb00  jal         func_23EC00
    ctx->pc = 0x23EEA8u;
    SET_GPR_U32(ctx, 31, 0x23EEB0u);
    ctx->pc = 0x23EC00u;
    if (runtime->hasFunction(0x23EC00u)) {
        auto targetFn = runtime->lookupFunction(0x23EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EEB0u; }
        if (ctx->pc != 0x23EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_inputkey_limmit_check_line__12CMenuKeyFuncFi_0x23ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EEB0u; }
        if (ctx->pc != 0x23EEB0u) { return; }
    }
    ctx->pc = 0x23EEB0u;
label_23eeb0:
    // 0x23eeb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23EEB0u;
    {
        const bool branch_taken_0x23eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eeb0) {
            ctx->pc = 0x23EEC0u;
            goto label_23eec0;
        }
    }
    ctx->pc = 0x23EEB8u;
label_23eeb8:
    // 0x23eeb8: 0xc08fb3c  jal         func_23ECF0
    ctx->pc = 0x23EEB8u;
    SET_GPR_U32(ctx, 31, 0x23EEC0u);
    ctx->pc = 0x23ECF0u;
    if (runtime->hasFunction(0x23ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EEC0u; }
        if (ctx->pc != 0x23EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_inputkey_limmit_check_glid__12CMenuKeyFuncFi_0x23ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EEC0u; }
        if (ctx->pc != 0x23EEC0u) { return; }
    }
    ctx->pc = 0x23EEC0u;
label_23eec0:
    // 0x23eec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23eec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23eec4:
    // 0x23eec4: 0x3e00008  jr          $ra
    ctx->pc = 0x23EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EEC4u;
            // 0x23eec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EECCu;
}
