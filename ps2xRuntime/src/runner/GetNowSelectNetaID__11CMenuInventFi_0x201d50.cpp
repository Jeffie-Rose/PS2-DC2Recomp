#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowSelectNetaID__11CMenuInventFi
// Address: 0x201d50 - 0x201dfc
void GetNowSelectNetaID__11CMenuInventFi_0x201d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowSelectNetaID__11CMenuInventFi_0x201d50");
#endif

    switch (ctx->pc) {
        case 0x201d98u: goto label_201d98;
        default: break;
    }

    ctx->pc = 0x201d50u;

    // 0x201d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201d60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d64: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D64u;
            // 0x201d68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201D78u;
            goto label_201d78;
        }
    }
    ctx->pc = 0x201D6Cu;
    // 0x201d6c: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x201d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201d70: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x201D70u;
    {
        const bool branch_taken_0x201d70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D70u;
            // 0x201d74: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d70) {
            ctx->pc = 0x201D80u;
            goto label_201d80;
        }
    }
    ctx->pc = 0x201D78u;
label_201d78:
    // 0x201d78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x201D78u;
    {
        const bool branch_taken_0x201d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D78u;
            // 0x201d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d78) {
            ctx->pc = 0x201DE8u;
            goto label_201de8;
        }
    }
    ctx->pc = 0x201D80u;
label_201d80:
    // 0x201d80: 0x8043061c  lb          $v1, 0x61C($v0)
    ctx->pc = 0x201d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1564)));
    // 0x201d84: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x201D84u;
    {
        const bool branch_taken_0x201d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D84u;
            // 0x201d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d84) {
            ctx->pc = 0x201DBCu;
            goto label_201dbc;
        }
    }
    ctx->pc = 0x201D8Cu;
    // 0x201d8c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201d90: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x201D90u;
    SET_GPR_U32(ctx, 31, 0x201D98u);
    ctx->pc = 0x201D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D90u;
            // 0x201d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D98u; }
        if (ctx->pc != 0x201D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D98u; }
        if (ctx->pc != 0x201D98u) { return; }
    }
    ctx->pc = 0x201D98u;
label_201d98:
    // 0x201d98: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x201d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x201d9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x201da0: 0x8c640610  lw          $a0, 0x610($v1)
    ctx->pc = 0x201da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1552)));
    // 0x201da4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x201da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201dac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x201db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201db4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201DB4u;
            // 0x201db8: 0x8442000a  lh          $v0, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201DE8u;
            goto label_201de8;
        }
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201DBCu;
    {
        const bool branch_taken_0x201dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201DBCu;
            // 0x201dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dbc) {
            ctx->pc = 0x201DE8u;
            goto label_201de8;
        }
    }
    ctx->pc = 0x201DC4u;
    // 0x201dc4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x201dc8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x201dcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x201dd0: 0x2442bfd0  addiu       $v0, $v0, -0x4030
    ctx->pc = 0x201dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950864));
    // 0x201dd4: 0x8c630610  lw          $v1, 0x610($v1)
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1552)));
    // 0x201dd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201de0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x201DE0u;
    {
        const bool branch_taken_0x201de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201DE0u;
            // 0x201de4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201de0) {
            ctx->pc = 0x201DE8u;
            goto label_201de8;
        }
    }
    ctx->pc = 0x201DE8u;
label_201de8:
    // 0x201de8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201dec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201df4: 0x3e00008  jr          $ra
    ctx->pc = 0x201DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201DF4u;
            // 0x201df8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201DFCu;
}
