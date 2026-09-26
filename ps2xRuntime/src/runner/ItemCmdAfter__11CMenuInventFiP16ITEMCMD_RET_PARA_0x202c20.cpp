#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ItemCmdAfter__11CMenuInventFiP16ITEMCMD_RET_PARA
// Address: 0x202c20 - 0x202cac
void ItemCmdAfter__11CMenuInventFiP16ITEMCMD_RET_PARA_0x202c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ItemCmdAfter__11CMenuInventFiP16ITEMCMD_RET_PARA_0x202c20");
#endif

    switch (ctx->pc) {
        case 0x202c4cu: goto label_202c4c;
        case 0x202c80u: goto label_202c80;
        default: break;
    }

    ctx->pc = 0x202c20u;

    // 0x202c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c34: 0x80c20002  lb          $v0, 0x2($a2)
    ctx->pc = 0x202c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x202c38: 0x2842ffff  slti        $v0, $v0, -0x1
    ctx->pc = 0x202c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x202c3c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x202C3Cu;
    {
        const bool branch_taken_0x202c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C3Cu;
            // 0x202c40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c3c) {
            ctx->pc = 0x202C94u;
            goto label_202c94;
        }
    }
    ctx->pc = 0x202C44u;
    // 0x202c44: 0xc094274  jal         func_2509D0
    ctx->pc = 0x202C44u;
    SET_GPR_U32(ctx, 31, 0x202C4Cu);
    ctx->pc = 0x202C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202C44u;
            // 0x202c48: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C4Cu; }
        if (ctx->pc != 0x202C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C4Cu; }
        if (ctx->pc != 0x202C4Cu) { return; }
    }
    ctx->pc = 0x202C4Cu;
label_202c4c:
    // 0x202c4c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x202c4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x202c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202c54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C54u;
    {
        const bool branch_taken_0x202c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C54u;
            // 0x202c58: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c54) {
            ctx->pc = 0x202C6Cu;
            goto label_202c6c;
        }
    }
    ctx->pc = 0x202C5Cu;
    // 0x202c5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202C5Cu;
    {
        const bool branch_taken_0x202c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c5c) {
            ctx->pc = 0x202C6Cu;
            goto label_202c6c;
        }
    }
    ctx->pc = 0x202C64u;
    // 0x202c64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202C64u;
    {
        const bool branch_taken_0x202c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C64u;
            // 0x202c68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c64) {
            ctx->pc = 0x202C98u;
            goto label_202c98;
        }
    }
    ctx->pc = 0x202C6Cu;
label_202c6c:
    // 0x202c6c: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x202c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x202c70: 0x8c27cb44  lw          $a3, -0x34BC($at)
    ctx->pc = 0x202c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
    // 0x202c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c78: 0xc08e8ac  jal         func_23A2B0
    ctx->pc = 0x202C78u;
    SET_GPR_U32(ctx, 31, 0x202C80u);
    ctx->pc = 0x202C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202C78u;
            // 0x202c7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2B0u;
    if (runtime->hasFunction(0x23A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C80u; }
        if (ctx->pc != 0x202C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPreCmdTrush__FP14CBaseMenuClassiP13CGameDataUsedP16CMenuPosDataForm_0x23a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C80u; }
        if (ctx->pc != 0x202C80u) { return; }
    }
    ctx->pc = 0x202C80u;
label_202c80:
    // 0x202c80: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x202c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x202c84: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x202c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x202c88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202C94u;
            goto label_202c94;
        }
    }
    ctx->pc = 0x202C90u;
    // 0x202c90: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x202c90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_202c94:
    // 0x202c94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_202c98:
    // 0x202c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x202CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CA4u;
            // 0x202ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202CACu;
}
