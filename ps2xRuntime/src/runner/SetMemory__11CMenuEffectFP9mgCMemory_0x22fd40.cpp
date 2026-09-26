#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMemory__11CMenuEffectFP9mgCMemory
// Address: 0x22fd40 - 0x22fd90
void SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40");
#endif

    switch (ctx->pc) {
        case 0x22fd7cu: goto label_22fd7c;
        default: break;
    }

    ctx->pc = 0x22fd40u;

    // 0x22fd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fd44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22fd48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fd4c: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22fd50: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x22fd54: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x22fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22fd58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FD58u;
    {
        const bool branch_taken_0x22fd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD58u;
            // 0x22fd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd58) {
            ctx->pc = 0x22FD6Cu;
            goto label_22fd6c;
        }
    }
    ctx->pc = 0x22FD60u;
    // 0x22fd60: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x22fd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FD64u;
    {
        const bool branch_taken_0x22fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD64u;
            // 0x22fd68: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd64) {
            ctx->pc = 0x22FD70u;
            goto label_22fd70;
        }
    }
    ctx->pc = 0x22FD6Cu;
label_22fd6c:
    // 0x22fd6c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_22fd70:
    // 0x22fd70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd74: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22FD74u;
    SET_GPR_U32(ctx, 31, 0x22FD7Cu);
    ctx->pc = 0x22FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD74u;
            // 0x22fd78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD7Cu; }
        if (ctx->pc != 0x22FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD7Cu; }
        if (ctx->pc != 0x22FD7Cu) { return; }
    }
    ctx->pc = 0x22FD7Cu;
label_22fd7c:
    // 0x22fd7c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x22fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x22fd80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fd88: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD88u;
            // 0x22fd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FD90u;
}
