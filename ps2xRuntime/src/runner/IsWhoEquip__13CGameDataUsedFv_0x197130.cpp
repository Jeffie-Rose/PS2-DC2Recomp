#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsWhoEquip__13CGameDataUsedFv
// Address: 0x197130 - 0x1971c8
void IsWhoEquip__13CGameDataUsedFv_0x197130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsWhoEquip__13CGameDataUsedFv_0x197130");
#endif

    ctx->pc = 0x197130u;

    // 0x197130: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197134: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197138: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x197138u;
    {
        const bool branch_taken_0x197138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197138u;
            // 0x19713c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197138) {
            ctx->pc = 0x1971B0u;
            goto label_1971b0;
        }
    }
    ctx->pc = 0x197140u;
    // 0x197140: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x197144: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x197148: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x197148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19714c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x19714Cu;
    {
        const bool branch_taken_0x19714c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19714Cu;
            // 0x197150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19714c) {
            ctx->pc = 0x197170u;
            goto label_197170;
        }
    }
    ctx->pc = 0x197154u;
    // 0x197154: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x197154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x197158: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x197158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19715c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19715Cu;
    {
        const bool branch_taken_0x19715c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19715Cu;
            // 0x197160: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19715c) {
            ctx->pc = 0x19716Cu;
            goto label_19716c;
        }
    }
    ctx->pc = 0x197164u;
    // 0x197164: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197164u;
    {
        const bool branch_taken_0x197164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197164u;
            // 0x197168: 0x2462fffd  addiu       $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197164) {
            ctx->pc = 0x197178u;
            goto label_197178;
        }
    }
    ctx->pc = 0x19716Cu;
label_19716c:
    // 0x19716c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197170:
    // 0x197170: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x197170u;
    {
        const bool branch_taken_0x197170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197170) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x197178u;
label_197178:
    // 0x197178: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x197178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19717c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x19717Cu;
    {
        const bool branch_taken_0x19717c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19717Cu;
            // 0x197180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19717c) {
            ctx->pc = 0x1971A0u;
            goto label_1971a0;
        }
    }
    ctx->pc = 0x197184u;
    // 0x197184: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x197188: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x197188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19718c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19718Cu;
    {
        const bool branch_taken_0x19718c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19718Cu;
            // 0x197190: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19718c) {
            ctx->pc = 0x19719Cu;
            goto label_19719c;
        }
    }
    ctx->pc = 0x197194u;
    // 0x197194: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197194u;
    {
        const bool branch_taken_0x197194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197194u;
            // 0x197198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197194) {
            ctx->pc = 0x1971A8u;
            goto label_1971a8;
        }
    }
    ctx->pc = 0x19719Cu;
label_19719c:
    // 0x19719c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1971a0:
    // 0x1971a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1971A0u;
    {
        const bool branch_taken_0x1971a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971a0) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x1971A8u;
label_1971a8:
    // 0x1971a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1971A8u;
    {
        const bool branch_taken_0x1971a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971a8) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x1971B0u;
label_1971b0:
    // 0x1971b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1971B0u;
    {
        const bool branch_taken_0x1971b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1971B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971B0u;
            // 0x1971b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b0) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x1971B8u;
    // 0x1971b8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1971B8u;
    {
        const bool branch_taken_0x1971b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971B8u;
            // 0x1971bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b8) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x1971C0u;
label_1971c0:
    // 0x1971c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1971C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1971C8u;
}
