#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sseek
// Address: 0x128a28 - 0x128a90
void ps2___sseek_0x128a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sseek_0x128a28");
#endif

    switch (ctx->pc) {
        case 0x128a50u: goto label_128a50;
        default: break;
    }

    ctx->pc = 0x128a28u;

    // 0x128a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128a2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x128a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128a34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x128a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x128a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a44: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x128a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x128a48: 0xc0498bc  jal         func_1262F0
    ctx->pc = 0x128A48u;
    SET_GPR_U32(ctx, 31, 0x128A50u);
    ctx->pc = 0x128A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128A48u;
            // 0x128a4c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1262F0u;
    if (runtime->hasFunction(0x1262F0u)) {
        auto targetFn = runtime->lookupFunction(0x1262F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A50u; }
        if (ctx->pc != 0x128A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lseek_r_0x1262f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A50u; }
        if (ctx->pc != 0x128A50u) { return; }
    }
    ctx->pc = 0x128A50u;
label_128a50:
    // 0x128a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128a58: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128A58u;
    {
        const bool branch_taken_0x128a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x128A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A58u;
            // 0x128a5c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a58) {
            ctx->pc = 0x128A68u;
            goto label_128a68;
        }
    }
    ctx->pc = 0x128A60u;
    // 0x128a60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128A60u;
    {
        const bool branch_taken_0x128a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A60u;
            // 0x128a64: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a60) {
            ctx->pc = 0x128A78u;
            goto label_128a78;
        }
    }
    ctx->pc = 0x128A68u;
label_128a68:
    // 0x128a68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x128a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x128a6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x128a6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x128a70: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x128a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x128a74: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x128a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_128a78:
    // 0x128a78: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x128a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x128a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128a80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x128a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a88: 0x3e00008  jr          $ra
    ctx->pc = 0x128A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A88u;
            // 0x128a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128A90u;
}
