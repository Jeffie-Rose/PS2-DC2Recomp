#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDatePosition__10CEditPartsFv
// Address: 0x1b59a0 - 0x1b5a4c
void UpDatePosition__10CEditPartsFv_0x1b59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDatePosition__10CEditPartsFv_0x1b59a0");
#endif

    switch (ctx->pc) {
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        default: break;
    }

    ctx->pc = 0x1b59a0u;

label_1b59a0:
    // 0x1b59a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b59a4:
    // 0x1b59a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b59a8:
    // 0x1b59a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b59ac:
    // 0x1b59ac: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1b59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1b59b0:
    // 0x1b59b0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b59b4:
    if (ctx->pc == 0x1B59B4u) {
        ctx->pc = 0x1B59B4u;
            // 0x1b59b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B59B8u;
        goto label_1b59b8;
    }
    ctx->pc = 0x1B59B0u;
    {
        const bool branch_taken_0x1b59b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B59B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59B0u;
            // 0x1b59b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59b0) {
            ctx->pc = 0x1B59C4u;
            goto label_1b59c4;
        }
    }
    ctx->pc = 0x1B59B8u;
label_1b59b8:
    // 0x1b59b8: 0x8e030314  lw          $v1, 0x314($s0)
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_1b59bc:
    // 0x1b59bc: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_1b59c0:
    if (ctx->pc == 0x1B59C0u) {
        ctx->pc = 0x1B59C4u;
        goto label_1b59c4;
    }
    ctx->pc = 0x1B59BCu;
    {
        const bool branch_taken_0x1b59bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59bc) {
            ctx->pc = 0x1B5A3Cu;
            goto label_1b5a3c;
        }
    }
    ctx->pc = 0x1B59C4u;
label_1b59c4:
    // 0x1b59c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b59c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b59c8:
    // 0x1b59c8: 0xc06d664  jal         func_1B5990
label_1b59cc:
    if (ctx->pc == 0x1B59CCu) {
        ctx->pc = 0x1B59CCu;
            // 0x1b59cc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B59D0u;
        goto label_1b59d0;
    }
    ctx->pc = 0x1B59C8u;
    SET_GPR_U32(ctx, 31, 0x1B59D0u);
    ctx->pc = 0x1B59CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59C8u;
            // 0x1b59cc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5990u;
    if (runtime->hasFunction(0x1B5990u)) {
        auto targetFn = runtime->lookupFunction(0x1B5990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D0u; }
        if (ctx->pc != 0x1B59D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalPos__10CEditPartsFPf_0x1b5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D0u; }
        if (ctx->pc != 0x1B59D0u) { return; }
    }
    ctx->pc = 0x1B59D0u;
label_1b59d0:
    // 0x1b59d0: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x1b59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_1b59d4:
    // 0x1b59d4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1b59d8:
    if (ctx->pc == 0x1B59D8u) {
        ctx->pc = 0x1B59DCu;
        goto label_1b59dc;
    }
    ctx->pc = 0x1B59D4u;
    {
        const bool branch_taken_0x1b59d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59d4) {
            ctx->pc = 0x1B59FCu;
            goto label_1b59fc;
        }
    }
    ctx->pc = 0x1B59DCu;
label_1b59dc:
    // 0x1b59dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b59dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b59e0:
    // 0x1b59e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b59e4:
    // 0x1b59e4: 0x320f809  jalr        $t9
label_1b59e8:
    if (ctx->pc == 0x1B59E8u) {
        ctx->pc = 0x1B59E8u;
            // 0x1b59e8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B59ECu;
        goto label_1b59ec;
    }
    ctx->pc = 0x1B59E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B59ECu);
        ctx->pc = 0x1B59E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59E4u;
            // 0x1b59e8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B59ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B59ECu; }
            if (ctx->pc != 0x1B59ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1B59ECu;
label_1b59ec:
    // 0x1b59ec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1b59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b59f0:
    // 0x1b59f0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1b59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b59f4:
    // 0x1b59f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b59f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b59f8:
    // 0x1b59f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b59f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b59fc:
    // 0x1b59fc: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1b5a00:
    // 0x1b5a00: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1b5a04:
    // 0x1b5a04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b5a08:
    // 0x1b5a08: 0x320f809  jalr        $t9
label_1b5a0c:
    if (ctx->pc == 0x1B5A0Cu) {
        ctx->pc = 0x1B5A0Cu;
            // 0x1b5a0c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B5A10u;
        goto label_1b5a10;
    }
    ctx->pc = 0x1B5A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5A10u);
        ctx->pc = 0x1B5A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A08u;
            // 0x1b5a0c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5A10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A10u; }
            if (ctx->pc != 0x1B5A10u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5A10u;
label_1b5a10:
    // 0x1b5a10: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1b5a14:
    // 0x1b5a14: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1b5a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1b5a18:
    // 0x1b5a18: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b5a1c:
    // 0x1b5a1c: 0x320f809  jalr        $t9
label_1b5a20:
    if (ctx->pc == 0x1B5A20u) {
        ctx->pc = 0x1B5A20u;
            // 0x1b5a20: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x1B5A24u;
        goto label_1b5a24;
    }
    ctx->pc = 0x1B5A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5A24u);
        ctx->pc = 0x1B5A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A1Cu;
            // 0x1b5a20: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5A24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A24u; }
            if (ctx->pc != 0x1B5A24u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5A24u;
label_1b5a24:
    // 0x1b5a24: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1b5a28:
    // 0x1b5a28: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1b5a2c:
    // 0x1b5a2c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1b5a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1b5a30:
    // 0x1b5a30: 0x320f809  jalr        $t9
label_1b5a34:
    if (ctx->pc == 0x1B5A34u) {
        ctx->pc = 0x1B5A34u;
            // 0x1b5a34: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1B5A38u;
        goto label_1b5a38;
    }
    ctx->pc = 0x1B5A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5A38u);
        ctx->pc = 0x1B5A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A30u;
            // 0x1b5a34: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A38u; }
            if (ctx->pc != 0x1B5A38u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5A38u;
label_1b5a38:
    // 0x1b5a38: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1b5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1b5a3c:
    // 0x1b5a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5a40:
    // 0x1b5a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5a44:
    // 0x1b5a44: 0x3e00008  jr          $ra
label_1b5a48:
    if (ctx->pc == 0x1B5A48u) {
        ctx->pc = 0x1B5A48u;
            // 0x1b5a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B5A4Cu;
        goto label_fallthrough_0x1b5a44;
    }
    ctx->pc = 0x1B5A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A44u;
            // 0x1b5a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b5a44:
    ctx->pc = 0x1B5A4Cu;
}
