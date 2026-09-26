#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_DUNGEON_MAP_FILE__FP12RS_STACKDATAi
// Address: 0x266280 - 0x266310
void ps2__LOAD_DUNGEON_MAP_FILE__FP12RS_STACKDATAi_0x266280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_DUNGEON_MAP_FILE__FP12RS_STACKDATAi_0x266280");
#endif

    switch (ctx->pc) {
        case 0x2662b0u: goto label_2662b0;
        case 0x2662d0u: goto label_2662d0;
        case 0x2662e8u: goto label_2662e8;
        case 0x2662f8u: goto label_2662f8;
        default: break;
    }

    ctx->pc = 0x266280u;

    // 0x266280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26628c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26628Cu;
    {
        const bool branch_taken_0x26628c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x266290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26628Cu;
            // 0x266290: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26628c) {
            ctx->pc = 0x2662A0u;
            goto label_2662a0;
        }
    }
    ctx->pc = 0x266294u;
    // 0x266294: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x266294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x266298: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x266298u;
    {
        const bool branch_taken_0x266298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266298u;
            // 0x26629c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266298) {
            ctx->pc = 0x2662A8u;
            goto label_2662a8;
        }
    }
    ctx->pc = 0x2662A0u;
label_2662a0:
    // 0x2662a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2662A0u;
    {
        const bool branch_taken_0x2662a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2662A0u;
            // 0x2662a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662a0) {
            ctx->pc = 0x2662FCu;
            goto label_2662fc;
        }
    }
    ctx->pc = 0x2662A8u;
label_2662a8:
    // 0x2662a8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2662A8u;
    SET_GPR_U32(ctx, 31, 0x2662B0u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662B0u; }
        if (ctx->pc != 0x2662B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662B0u; }
        if (ctx->pc != 0x2662B0u) { return; }
    }
    ctx->pc = 0x2662B0u;
label_2662b0:
    // 0x2662b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2662b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2662b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662b8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2662b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2662bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2662BCu;
    {
        const bool branch_taken_0x2662bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2662C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2662BCu;
            // 0x2662c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662bc) {
            ctx->pc = 0x2662D4u;
            goto label_2662d4;
        }
    }
    ctx->pc = 0x2662C4u;
    // 0x2662c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2662c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662c8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2662C8u;
    SET_GPR_U32(ctx, 31, 0x2662D0u);
    ctx->pc = 0x2662CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2662C8u;
            // 0x2662cc: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662D0u; }
        if (ctx->pc != 0x2662D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662D0u; }
        if (ctx->pc != 0x2662D0u) { return; }
    }
    ctx->pc = 0x2662D0u;
label_2662d0:
    // 0x2662d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2662d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2662d4:
    // 0x2662d4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2662d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2662d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2662D8u;
    {
        const bool branch_taken_0x2662d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2662DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2662D8u;
            // 0x2662dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662d8) {
            ctx->pc = 0x2662F0u;
            goto label_2662f0;
        }
    }
    ctx->pc = 0x2662E0u;
    // 0x2662e0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2662E0u;
    SET_GPR_U32(ctx, 31, 0x2662E8u);
    ctx->pc = 0x2662E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2662E0u;
            // 0x2662e4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662E8u; }
        if (ctx->pc != 0x2662E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662E8u; }
        if (ctx->pc != 0x2662E8u) { return; }
    }
    ctx->pc = 0x2662E8u;
label_2662e8:
    // 0x2662e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2662e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2662ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2662f0:
    // 0x2662f0: 0xc0a3cd0  jal         func_28F340
    ctx->pc = 0x2662F0u;
    SET_GPR_U32(ctx, 31, 0x2662F8u);
    ctx->pc = 0x2662F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2662F0u;
            // 0x2662f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F340u;
    if (runtime->hasFunction(0x28F340u)) {
        auto targetFn = runtime->lookupFunction(0x28F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662F8u; }
        if (ctx->pc != 0x2662F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadDungeonMapFile__FPcPci_0x28f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2662F8u; }
        if (ctx->pc != 0x2662F8u) { return; }
    }
    ctx->pc = 0x2662F8u;
label_2662f8:
    // 0x2662f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2662f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2662fc:
    // 0x2662fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2662fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266308: 0x3e00008  jr          $ra
    ctx->pc = 0x266308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266308u;
            // 0x26630c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266310u;
}
