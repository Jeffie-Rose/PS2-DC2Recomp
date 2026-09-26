#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteUserUsedItem__17CInventDataManageFii
// Address: 0x1ffe80 - 0x1fff2c
void DeleteUserUsedItem__17CInventDataManageFii_0x1ffe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteUserUsedItem__17CInventDataManageFii_0x1ffe80");
#endif

    switch (ctx->pc) {
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffec0u: goto label_1ffec0;
        case 0x1ffed8u: goto label_1ffed8;
        case 0x1ffeecu: goto label_1ffeec;
        default: break;
    }

    ctx->pc = 0x1ffe80u;

    // 0x1ffe80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffe84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ffe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ffe88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ffe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ffe8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ffe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ffe90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffe94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ffe94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffe9c: 0xc07fef0  jal         func_1FFBC0
    ctx->pc = 0x1FFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFEA4u);
    ctx->pc = 0x1FFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE9Cu;
            // 0x1ffea0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEA4u; }
        if (ctx->pc != 0x1FFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEA4u; }
        if (ctx->pc != 0x1FFEA4u) { return; }
    }
    ctx->pc = 0x1FFEA4u;
label_1ffea4:
    // 0x1ffea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFEA4u;
    {
        const bool branch_taken_0x1ffea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEA4u;
            // 0x1ffea8: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffea4) {
            ctx->pc = 0x1FFEB4u;
            goto label_1ffeb4;
        }
    }
    ctx->pc = 0x1FFEACu;
    // 0x1ffeac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FFEACu;
    {
        const bool branch_taken_0x1ffeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEACu;
            // 0x1ffeb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffeac) {
            ctx->pc = 0x1FFF0Cu;
            goto label_1fff0c;
        }
    }
    ctx->pc = 0x1FFEB4u;
label_1ffeb4:
    // 0x1ffeb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ffeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FFEB8u;
    {
        const bool branch_taken_0x1ffeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEB8u;
            // 0x1ffebc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffeb8) {
            ctx->pc = 0x1FFEF4u;
            goto label_1ffef4;
        }
    }
    ctx->pc = 0x1FFEC0u;
label_1ffec0:
    // 0x1ffec0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ffec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffec4: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ffec8: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1FFEC8u;
    {
        const bool branch_taken_0x1ffec8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffec8) {
            ctx->pc = 0x1FFF08u;
            goto label_1fff08;
        }
    }
    ctx->pc = 0x1FFED0u;
    // 0x1ffed0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FFED0u;
    SET_GPR_U32(ctx, 31, 0x1FFED8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFED8u; }
        if (ctx->pc != 0x1FFED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFED8u; }
        if (ctx->pc != 0x1FFED8u) { return; }
    }
    ctx->pc = 0x1FFED8u;
label_1ffed8:
    // 0x1ffed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffedc: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x1ffedcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ffee0: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x1ffee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1ffee4: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x1FFEE4u;
    SET_GPR_U32(ctx, 31, 0x1FFEECu);
    ctx->pc = 0x1FFEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEE4u;
            // 0x1ffee8: 0x533018  mult        $a2, $v0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEECu; }
        if (ctx->pc != 0x1FFEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEECu; }
        if (ctx->pc != 0x1FFEECu) { return; }
    }
    ctx->pc = 0x1FFEECu;
label_1ffeec:
    // 0x1ffeec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ffeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ffef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ffef4:
    // 0x1ffef4: 0x0  nop
    ctx->pc = 0x1ffef4u;
    // NOP
    // 0x1ffef8: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1ffef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ffefc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ffefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fff00: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FFF00u;
    {
        const bool branch_taken_0x1fff00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff00) {
            ctx->pc = 0x1FFEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffec0;
        }
    }
    ctx->pc = 0x1FFF08u;
label_1fff08:
    // 0x1fff08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff0c:
    // 0x1fff0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fff0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fff10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fff10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fff14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fff14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fff18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fff18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fff1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fff1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fff20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fff20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff24: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF24u;
            // 0x1fff28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFF2Cu;
}
