#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDebugHandler
// Address: 0x1183a8 - 0x11842c
void SetDebugHandler_0x1183a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDebugHandler_0x1183a8");
#endif

    switch (ctx->pc) {
        case 0x118400u: goto label_118400;
        case 0x118418u: goto label_118418;
        default: break;
    }

    ctx->pc = 0x1183a8u;

    // 0x1183a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1183a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1183b0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1183b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1183b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1183b8: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x1183b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1183bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1183BCu;
    {
        const bool branch_taken_0x1183bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1183C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183BCu;
            // 0x1183c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183bc) {
            ctx->pc = 0x1183D0u;
            goto label_1183d0;
        }
    }
    ctx->pc = 0x1183C4u;
    // 0x1183c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1183c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1183C8u;
    {
        const bool branch_taken_0x1183c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183C8u;
            // 0x1183cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183c8) {
            ctx->pc = 0x11841Cu;
            goto label_11841c;
        }
    }
    ctx->pc = 0x1183D0u;
label_1183d0:
    // 0x1183d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1183d4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1183d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1183d8: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x1183dc: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1183e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1183e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1183e4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1183e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1183E8u;
    {
        const bool branch_taken_0x1183e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183E8u;
            // 0x1183ec: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183e8) {
            ctx->pc = 0x118408u;
            goto label_118408;
        }
    }
    ctx->pc = 0x1183F0u;
    // 0x1183f0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1183f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1183f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183f8: 0xc043f64  jal         func_10FD90
    ctx->pc = 0x1183F8u;
    SET_GPR_U32(ctx, 31, 0x118400u);
    ctx->pc = 0x1183FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1183F8u;
            // 0x1183fc: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD90u;
    if (runtime->hasFunction(0x10FD90u)) {
        auto targetFn = runtime->lookupFunction(0x10FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118400u; }
        if (ctx->pc != 0x118400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x10fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118400u; }
        if (ctx->pc != 0x118400u) { return; }
    }
    ctx->pc = 0x118400u;
label_118400:
    // 0x118400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118400u;
    {
        const bool branch_taken_0x118400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118400u;
            // 0x118404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118400) {
            ctx->pc = 0x11841Cu;
            goto label_11841c;
        }
    }
    ctx->pc = 0x118408u;
label_118408:
    // 0x118408: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x118408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11840c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118410: 0xc043f68  jal         func_10FDA0
    ctx->pc = 0x118410u;
    SET_GPR_U32(ctx, 31, 0x118418u);
    ctx->pc = 0x118414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118410u;
            // 0x118414: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FDA0u;
    if (runtime->hasFunction(0x10FDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10FDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVCommonHandler_0x10fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    }
    ctx->pc = 0x118418u;
label_118418:
    // 0x118418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11841c:
    // 0x11841c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11841cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118424: 0x3e00008  jr          $ra
    ctx->pc = 0x118424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118424u;
            // 0x118428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11842Cu;
}
