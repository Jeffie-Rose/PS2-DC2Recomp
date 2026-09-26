#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboJointName__13CGameDataUsedFPc
// Address: 0x198400 - 0x1984b0
void GetRoboJointName__13CGameDataUsedFPc_0x198400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboJointName__13CGameDataUsedFPc_0x198400");
#endif

    switch (ctx->pc) {
        case 0x198424u: goto label_198424;
        case 0x198458u: goto label_198458;
        case 0x19846cu: goto label_19846c;
        case 0x198484u: goto label_198484;
        case 0x198498u: goto label_198498;
        default: break;
    }

    ctx->pc = 0x198400u;

    // 0x198400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x198404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19840c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198418: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x198418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19841c: 0xc065714  jal         func_195C50
    ctx->pc = 0x19841Cu;
    SET_GPR_U32(ctx, 31, 0x198424u);
    ctx->pc = 0x198420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19841Cu;
            // 0x198420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C50u;
    if (runtime->hasFunction(0x195C50u)) {
        auto targetFn = runtime->lookupFunction(0x195C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198424u; }
        if (ctx->pc != 0x198424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartInfoData__Fi_0x195c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198424u; }
        if (ctx->pc != 0x198424u) { return; }
    }
    ctx->pc = 0x198424u;
label_198424:
    // 0x198424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198428: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x198428u;
    {
        const bool branch_taken_0x198428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198428) {
            ctx->pc = 0x198498u;
            goto label_198498;
        }
    }
    ctx->pc = 0x198430u;
    // 0x198430: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198430u;
    {
        const bool branch_taken_0x198430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198430) {
            ctx->pc = 0x198440u;
            goto label_198440;
        }
    }
    ctx->pc = 0x198438u;
    // 0x198438: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x198438u;
    {
        const bool branch_taken_0x198438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198438u;
            // 0x19843c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198438) {
            ctx->pc = 0x19849Cu;
            goto label_19849c;
        }
    }
    ctx->pc = 0x198440u;
label_198440:
    // 0x198440: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x198440u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x198444: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x198448: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x198448u;
    {
        const bool branch_taken_0x198448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198448) {
            ctx->pc = 0x19846Cu;
            goto label_19846c;
        }
    }
    ctx->pc = 0x198450u;
    // 0x198450: 0xc0651a4  jal         func_194690
    ctx->pc = 0x198450u;
    SET_GPR_U32(ctx, 31, 0x198458u);
    ctx->pc = 0x198454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198450u;
            // 0x198454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194690u;
    if (runtime->hasFunction(0x194690u)) {
        auto targetFn = runtime->lookupFunction(0x194690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198458u; }
        if (ctx->pc != 0x198458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOffsetNo__13CDataRoboPartFv_0x194690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198458u; }
        if (ctx->pc != 0x198458u) { return; }
    }
    ctx->pc = 0x198458u;
label_198458:
    // 0x198458: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19845c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198460: 0x24a55938  addiu       $a1, $a1, 0x5938
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22840));
    // 0x198464: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x198464u;
    SET_GPR_U32(ctx, 31, 0x19846Cu);
    ctx->pc = 0x198468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198464u;
            // 0x198468: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19846Cu; }
        if (ctx->pc != 0x19846Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19846Cu; }
        if (ctx->pc != 0x19846Cu) { return; }
    }
    ctx->pc = 0x19846Cu;
label_19846c:
    // 0x19846c: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x19846cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x198470: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x198470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198474: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x198474u;
    {
        const bool branch_taken_0x198474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198474) {
            ctx->pc = 0x198498u;
            goto label_198498;
        }
    }
    ctx->pc = 0x19847Cu;
    // 0x19847c: 0xc0651a4  jal         func_194690
    ctx->pc = 0x19847Cu;
    SET_GPR_U32(ctx, 31, 0x198484u);
    ctx->pc = 0x198480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19847Cu;
            // 0x198480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194690u;
    if (runtime->hasFunction(0x194690u)) {
        auto targetFn = runtime->lookupFunction(0x194690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198484u; }
        if (ctx->pc != 0x198484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOffsetNo__13CDataRoboPartFv_0x194690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198484u; }
        if (ctx->pc != 0x198484u) { return; }
    }
    ctx->pc = 0x198484u;
label_198484:
    // 0x198484: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x198488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19848c: 0x24a55940  addiu       $a1, $a1, 0x5940
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
    // 0x198490: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x198490u;
    SET_GPR_U32(ctx, 31, 0x198498u);
    ctx->pc = 0x198494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198490u;
            // 0x198494: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198498u; }
        if (ctx->pc != 0x198498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198498u; }
        if (ctx->pc != 0x198498u) { return; }
    }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x198498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19849c:
    // 0x19849c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19849cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1984a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1984a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1984a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1984a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1984a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1984A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984A8u;
            // 0x1984ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1984B0u;
}
