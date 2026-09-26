#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__18CEventSpriteMotherFii
// Address: 0x290960 - 0x2909fc
void Set__18CEventSpriteMotherFii_0x290960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__18CEventSpriteMotherFii_0x290960");
#endif

    switch (ctx->pc) {
        case 0x2909b4u: goto label_2909b4;
        case 0x2909c0u: goto label_2909c0;
        default: break;
    }

    ctx->pc = 0x290960u;

    // 0x290960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x290964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x290968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x290968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29096c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x290970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29097c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29097Cu;
    {
        const bool branch_taken_0x29097c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x290980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29097Cu;
            // 0x290980: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29097c) {
            ctx->pc = 0x29098Cu;
            goto label_29098c;
        }
    }
    ctx->pc = 0x290984u;
    // 0x290984: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x290984u;
    {
        const bool branch_taken_0x290984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290984u;
            // 0x290988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290984) {
            ctx->pc = 0x2909E0u;
            goto label_2909e0;
        }
    }
    ctx->pc = 0x29098Cu;
label_29098c:
    // 0x29098c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29098cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290990: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290990u;
    {
        const bool branch_taken_0x290990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290990u;
            // 0x290994: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290990) {
            ctx->pc = 0x2909A0u;
            goto label_2909a0;
        }
    }
    ctx->pc = 0x290998u;
    // 0x290998: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x290998u;
    {
        const bool branch_taken_0x290998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29099Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290998u;
            // 0x29099c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290998) {
            ctx->pc = 0x2909E0u;
            goto label_2909e0;
        }
    }
    ctx->pc = 0x2909A0u;
label_2909a0:
    // 0x2909a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2909a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2909a4: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x2909a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2909a8: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x2909a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2909ac: 0xc0a417c  jal         func_2905F0
    ctx->pc = 0x2909ACu;
    SET_GPR_U32(ctx, 31, 0x2909B4u);
    ctx->pc = 0x2909B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2909ACu;
            // 0x2909b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905F0u;
    if (runtime->hasFunction(0x2905F0u)) {
        auto targetFn = runtime->lookupFunction(0x2905F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909B4u; }
        if (ctx->pc != 0x2909B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__12CEventSpriteFv_0x2905f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909B4u; }
        if (ctx->pc != 0x2909B4u) { return; }
    }
    ctx->pc = 0x2909B4u;
label_2909b4:
    // 0x2909b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2909b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909b8: 0xc0a4090  jal         func_290240
    ctx->pc = 0x2909B8u;
    SET_GPR_U32(ctx, 31, 0x2909C0u);
    ctx->pc = 0x2909BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2909B8u;
            // 0x2909bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290240u;
    if (runtime->hasFunction(0x290240u)) {
        auto targetFn = runtime->lookupFunction(0x290240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909C0u; }
        if (ctx->pc != 0x2909C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDraw__12CEventSpriteFi_0x290240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909C0u; }
        if (ctx->pc != 0x2909C0u) { return; }
    }
    ctx->pc = 0x2909C0u;
label_2909c0:
    // 0x2909c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2909c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2909c8: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x2909c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x2909cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2909ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2909d0: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x2909d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x2909d4: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x2909d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x2909d8: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x2909d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x2909dc: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x2909dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_2909e0:
    // 0x2909e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2909e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2909e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2909e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2909e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2909e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2909ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2909ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2909f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2909f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2909f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2909F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909F4u;
            // 0x2909f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2909FCu;
}
