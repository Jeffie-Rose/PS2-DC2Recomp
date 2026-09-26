#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HddConectCheck__FPi
// Address: 0x31ba40 - 0x31bab8
void HddConectCheck__FPi_0x31ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HddConectCheck__FPi_0x31ba40");
#endif

    switch (ctx->pc) {
        case 0x31ba5cu: goto label_31ba5c;
        case 0x31ba88u: goto label_31ba88;
        default: break;
    }

    ctx->pc = 0x31ba40u;

    // 0x31ba40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ba44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ba48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ba4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ba4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba50: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31ba54: 0xc045e68  jal         func_1179A0
    ctx->pc = 0x31BA54u;
    SET_GPR_U32(ctx, 31, 0x31BA5Cu);
    ctx->pc = 0x31BA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA54u;
            // 0x31ba58: 0x24842d60  addiu       $a0, $a0, 0x2D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179A0u;
    if (runtime->hasFunction(0x1179A0u)) {
        auto targetFn = runtime->lookupFunction(0x1179A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA5Cu; }
        if (ctx->pc != 0x31BA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSearchModuleByName_0x1179a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA5Cu; }
        if (ctx->pc != 0x31BA5Cu) { return; }
    }
    ctx->pc = 0x31BA5Cu;
label_31ba5c:
    // 0x31ba5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BA5Cu;
    {
        const bool branch_taken_0x31ba5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA5Cu;
            // 0x31ba60: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba5c) {
            ctx->pc = 0x31BA6Cu;
            goto label_31ba6c;
        }
    }
    ctx->pc = 0x31BA64u;
    // 0x31ba64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31BA64u;
    {
        const bool branch_taken_0x31ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA64u;
            // 0x31ba68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba64) {
            ctx->pc = 0x31BAA8u;
            goto label_31baa8;
        }
    }
    ctx->pc = 0x31BA6Cu;
label_31ba6c:
    // 0x31ba6c: 0x24054807  addiu       $a1, $zero, 0x4807
    ctx->pc = 0x31ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18439));
    // 0x31ba70: 0x24842d68  addiu       $a0, $a0, 0x2D68
    ctx->pc = 0x31ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11624));
    // 0x31ba74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ba74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ba78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ba7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba80: 0xc045a96  jal         func_116A58
    ctx->pc = 0x31BA80u;
    SET_GPR_U32(ctx, 31, 0x31BA88u);
    ctx->pc = 0x31BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA80u;
            // 0x31ba84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A58u;
    if (runtime->hasFunction(0x116A58u)) {
        auto targetFn = runtime->lookupFunction(0x116A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA88u; }
        if (ctx->pc != 0x31BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevctl_0x116a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BA88u; }
        if (ctx->pc != 0x31BA88u) { return; }
    }
    ctx->pc = 0x31BA88u;
label_31ba88:
    // 0x31ba88: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BA88u;
    {
        const bool branch_taken_0x31ba88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba88) {
            ctx->pc = 0x31BA94u;
            goto label_31ba94;
        }
    }
    ctx->pc = 0x31BA90u;
    // 0x31ba90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31ba94:
    // 0x31ba94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BA94u;
    {
        const bool branch_taken_0x31ba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA94u;
            // 0x31ba98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba94) {
            ctx->pc = 0x31BAA4u;
            goto label_31baa4;
        }
    }
    ctx->pc = 0x31BA9Cu;
    // 0x31ba9c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BA9Cu;
    {
        const bool branch_taken_0x31ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BA9Cu;
            // 0x31baa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba9c) {
            ctx->pc = 0x31BAA8u;
            goto label_31baa8;
        }
    }
    ctx->pc = 0x31BAA4u;
label_31baa4:
    // 0x31baa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31baa8:
    // 0x31baa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31baa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31baac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31baacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BAB0u;
            // 0x31bab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BAB8u;
}
