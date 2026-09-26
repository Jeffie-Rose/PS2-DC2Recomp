#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufStopDMA__FP5ViBuf
// Address: 0x29a230 - 0x29a30c
void viBufStopDMA__FP5ViBuf_0x29a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufStopDMA__FP5ViBuf_0x29a230");
#endif

    switch (ctx->pc) {
        case 0x29a248u: goto label_29a248;
        case 0x29a254u: goto label_29a254;
        case 0x29a28cu: goto label_29a28c;
        case 0x29a2b4u: goto label_29a2b4;
        case 0x29a2f8u: goto label_29a2f8;
        default: break;
    }

    ctx->pc = 0x29a230u;

    // 0x29a230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a240: 0xc044048  jal         func_110120
    ctx->pc = 0x29A240u;
    SET_GPR_U32(ctx, 31, 0x29A248u);
    ctx->pc = 0x29A244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A240u;
            // 0x29a244: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A248u; }
        if (ctx->pc != 0x29A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A248u; }
        if (ctx->pc != 0x29A248u) { return; }
    }
    ctx->pc = 0x29A248u;
label_29a248:
    // 0x29a248: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x29a248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a24c: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x29A24Cu;
    SET_GPR_U32(ctx, 31, 0x29A254u);
    ctx->pc = 0x29A250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A24Cu;
            // 0x29a250: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A254u; }
        if (ctx->pc != 0x29A254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A254u; }
        if (ctx->pc != 0x29A254u) { return; }
    }
    ctx->pc = 0x29A254u;
label_29a254:
    // 0x29a254: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a258: 0x8c22b410  lw          $v0, -0x4BF0($at)
    ctx->pc = 0x29a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947856)));
    // 0x29a25c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x29a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x29a260: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a264: 0x8c22b430  lw          $v0, -0x4BD0($at)
    ctx->pc = 0x29a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947888)));
    // 0x29a268: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x29a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x29a26c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a270: 0x8c22b420  lw          $v0, -0x4BE0($at)
    ctx->pc = 0x29a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947872)));
    // 0x29a274: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x29a274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x29a278: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a27c: 0x8c22b400  lw          $v0, -0x4C00($at)
    ctx->pc = 0x29a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947840)));
    // 0x29a280: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x29a280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x29a284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29a288: 0x34432010  ori         $v1, $v0, 0x2010
    ctx->pc = 0x29a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_29a28c:
    // 0x29a28c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a290: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x29a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x29a294: 0x0  nop
    ctx->pc = 0x29a294u;
    // NOP
    // 0x29a298: 0x0  nop
    ctx->pc = 0x29a298u;
    // NOP
    // 0x29a29c: 0x0  nop
    ctx->pc = 0x29a29cu;
    // NOP
    // 0x29a2a0: 0x0  nop
    ctx->pc = 0x29a2a0u;
    // NOP
    // 0x29a2a4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29A2A4u;
    {
        const bool branch_taken_0x29a2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a2a4) {
            ctx->pc = 0x29A28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a28c;
        }
    }
    ctx->pc = 0x29A2ACu;
    // 0x29a2ac: 0xc0a66fc  jal         func_299BF0
    ctx->pc = 0x29A2ACu;
    SET_GPR_U32(ctx, 31, 0x29A2B4u);
    ctx->pc = 0x29A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2ACu;
            // 0x29a2b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BF0u;
    if (runtime->hasFunction(0x299BF0u)) {
        auto targetFn = runtime->lookupFunction(0x299BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2B4u; }
        if (ctx->pc != 0x29A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR__FUi_0x299bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2B4u; }
        if (ctx->pc != 0x29A2B4u) { return; }
    }
    ctx->pc = 0x29A2B4u;
label_29a2b4:
    // 0x29a2b4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a2b8: 0x8c22b010  lw          $v0, -0x4FF0($at)
    ctx->pc = 0x29a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946832)));
    // 0x29a2bc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x29a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x29a2c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a2c4: 0x8c22b020  lw          $v0, -0x4FE0($at)
    ctx->pc = 0x29a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946848)));
    // 0x29a2c8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x29a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x29a2cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a2d0: 0x8c22b000  lw          $v0, -0x5000($at)
    ctx->pc = 0x29a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946816)));
    // 0x29a2d4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x29a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x29a2d8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a2dc: 0x8c222020  lw          $v0, 0x2020($at)
    ctx->pc = 0x29a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8224)));
    // 0x29a2e0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29a2e4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a2e8: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x29a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8208)));
    // 0x29a2ec: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x29a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x29a2f0: 0xc044040  jal         func_110100
    ctx->pc = 0x29A2F0u;
    SET_GPR_U32(ctx, 31, 0x29A2F8u);
    ctx->pc = 0x29A2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2F0u;
            // 0x29a2f4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2F8u; }
        if (ctx->pc != 0x29A2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2F8u; }
        if (ctx->pc != 0x29A2F8u) { return; }
    }
    ctx->pc = 0x29A2F8u;
label_29a2f8:
    // 0x29a2f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a304: 0x3e00008  jr          $ra
    ctx->pc = 0x29A304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A304u;
            // 0x29a308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A30Cu;
}
