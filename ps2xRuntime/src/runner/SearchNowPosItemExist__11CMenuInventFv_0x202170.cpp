#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNowPosItemExist__11CMenuInventFv
// Address: 0x202170 - 0x202204
void SearchNowPosItemExist__11CMenuInventFv_0x202170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNowPosItemExist__11CMenuInventFv_0x202170");
#endif

    switch (ctx->pc) {
        case 0x2021b0u: goto label_2021b0;
        case 0x2021c0u: goto label_2021c0;
        default: break;
    }

    ctx->pc = 0x202170u;

    // 0x202170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202174: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20217c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202188: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20218c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20218Cu;
    {
        const bool branch_taken_0x20218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20218Cu;
            // 0x202190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20218c) {
            ctx->pc = 0x2021C8u;
            goto label_2021c8;
        }
    }
    ctx->pc = 0x202194u;
    // 0x202194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202198: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202198u;
    {
        const bool branch_taken_0x202198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202198u;
            // 0x20219c: 0x26240168  addiu       $a0, $s1, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202198) {
            ctx->pc = 0x2021A8u;
            goto label_2021a8;
        }
    }
    ctx->pc = 0x2021A0u;
    // 0x2021a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2021A0u;
    {
        const bool branch_taken_0x2021a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021A0u;
            // 0x2021a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021a0) {
            ctx->pc = 0x2021F0u;
            goto label_2021f0;
        }
    }
    ctx->pc = 0x2021A8u;
label_2021a8:
    // 0x2021a8: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x2021A8u;
    SET_GPR_U32(ctx, 31, 0x2021B0u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2021B0u; }
        if (ctx->pc != 0x2021B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2021B0u; }
        if (ctx->pc != 0x2021B0u) { return; }
    }
    ctx->pc = 0x2021B0u;
label_2021b0:
    // 0x2021b0: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2021b4: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x2021b8: 0xc07fc38  jal         func_1FF0E0
    ctx->pc = 0x2021B8u;
    SET_GPR_U32(ctx, 31, 0x2021C0u);
    ctx->pc = 0x2021BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2021B8u;
            // 0x2021bc: 0x26300168  addiu       $s0, $s1, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E0u;
    if (runtime->hasFunction(0x1FF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2021C0u; }
        if (ctx->pc != 0x2021C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCreateItemID__15CInventUserDataFi_0x1ff0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2021C0u; }
        if (ctx->pc != 0x2021C0u) { return; }
    }
    ctx->pc = 0x2021C0u;
label_2021c0:
    // 0x2021c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2021C0u;
    {
        const bool branch_taken_0x2021c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021C0u;
            // 0x2021c4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021c0) {
            ctx->pc = 0x2021ECu;
            goto label_2021ec;
        }
    }
    ctx->pc = 0x2021C8u;
label_2021c8:
    // 0x2021c8: 0x8e24011c  lw          $a0, 0x11C($s1)
    ctx->pc = 0x2021c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2021cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2021ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2021d0: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x2021d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2021d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2021d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2021d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2021d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2021dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2021e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2021e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2021e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2021e8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2021e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2021ec:
    // 0x2021ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2021ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2021f0:
    // 0x2021f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2021f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2021f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2021f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2021f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2021f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2021fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2021FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021FCu;
            // 0x202200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202204u;
}
