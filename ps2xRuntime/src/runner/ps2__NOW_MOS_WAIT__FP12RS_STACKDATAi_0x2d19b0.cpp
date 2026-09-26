#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NOW_MOS_WAIT__FP12RS_STACKDATAi
// Address: 0x2d19b0 - 0x2d1a44
void ps2__NOW_MOS_WAIT__FP12RS_STACKDATAi_0x2d19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NOW_MOS_WAIT__FP12RS_STACKDATAi_0x2d19b0");
#endif

    switch (ctx->pc) {
        case 0x2d19b0u: goto label_2d19b0;
        case 0x2d19b4u: goto label_2d19b4;
        case 0x2d19b8u: goto label_2d19b8;
        case 0x2d19bcu: goto label_2d19bc;
        case 0x2d19c0u: goto label_2d19c0;
        case 0x2d19c4u: goto label_2d19c4;
        case 0x2d19c8u: goto label_2d19c8;
        case 0x2d19ccu: goto label_2d19cc;
        case 0x2d19d0u: goto label_2d19d0;
        case 0x2d19d4u: goto label_2d19d4;
        case 0x2d19d8u: goto label_2d19d8;
        case 0x2d19dcu: goto label_2d19dc;
        case 0x2d19e0u: goto label_2d19e0;
        case 0x2d19e4u: goto label_2d19e4;
        case 0x2d19e8u: goto label_2d19e8;
        case 0x2d19ecu: goto label_2d19ec;
        case 0x2d19f0u: goto label_2d19f0;
        case 0x2d19f4u: goto label_2d19f4;
        case 0x2d19f8u: goto label_2d19f8;
        case 0x2d19fcu: goto label_2d19fc;
        case 0x2d1a00u: goto label_2d1a00;
        case 0x2d1a04u: goto label_2d1a04;
        case 0x2d1a08u: goto label_2d1a08;
        case 0x2d1a0cu: goto label_2d1a0c;
        case 0x2d1a10u: goto label_2d1a10;
        case 0x2d1a14u: goto label_2d1a14;
        case 0x2d1a18u: goto label_2d1a18;
        case 0x2d1a1cu: goto label_2d1a1c;
        case 0x2d1a20u: goto label_2d1a20;
        case 0x2d1a24u: goto label_2d1a24;
        case 0x2d1a28u: goto label_2d1a28;
        case 0x2d1a2cu: goto label_2d1a2c;
        case 0x2d1a30u: goto label_2d1a30;
        case 0x2d1a34u: goto label_2d1a34;
        case 0x2d1a38u: goto label_2d1a38;
        case 0x2d1a3cu: goto label_2d1a3c;
        case 0x2d1a40u: goto label_2d1a40;
        default: break;
    }

    ctx->pc = 0x2d19b0u;

label_2d19b0:
    // 0x2d19b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d19b4:
    // 0x2d19b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d19b8:
    // 0x2d19b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d19bc:
    // 0x2d19bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d19c0:
    // 0x2d19c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d19c4:
    // 0x2d19c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d19c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d19c8:
    // 0x2d19c8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2d19cc:
    if (ctx->pc == 0x2D19CCu) {
        ctx->pc = 0x2D19CCu;
            // 0x2d19cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D19D0u;
        goto label_2d19d0;
    }
    ctx->pc = 0x2D19C8u;
    {
        const bool branch_taken_0x2d19c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D19CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19C8u;
            // 0x2d19cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19c8) {
            ctx->pc = 0x2D19E8u;
            goto label_2d19e8;
        }
    }
    ctx->pc = 0x2D19D0u;
label_2d19d0:
    // 0x2d19d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d19d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d19d4:
    // 0x2d19d4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d19d8:
    // 0x2d19d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d19dc:
    // 0x2d19dc: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x2d19dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_2d19e0:
    // 0x2d19e0: 0x320f809  jalr        $t9
label_2d19e4:
    if (ctx->pc == 0x2D19E4u) {
        ctx->pc = 0x2D19E4u;
            // 0x2d19e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D19E8u;
        goto label_2d19e8;
    }
    ctx->pc = 0x2D19E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D19E8u);
        ctx->pc = 0x2D19E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19E0u;
            // 0x2d19e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D19E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D19E8u; }
            if (ctx->pc != 0x2D19E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D19E8u;
label_2d19e8:
    // 0x2d19e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d19ec:
    // 0x2d19ec: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_2d19f0:
    if (ctx->pc == 0x2D19F0u) {
        ctx->pc = 0x2D19F0u;
            // 0x2d19f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D19F4u;
        goto label_2d19f4;
    }
    ctx->pc = 0x2D19ECu;
    {
        const bool branch_taken_0x2d19ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D19F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19ECu;
            // 0x2d19f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19ec) {
            ctx->pc = 0x2D1A24u;
            goto label_2d1a24;
        }
    }
    ctx->pc = 0x2D19F4u;
label_2d19f4:
    // 0x2d19f4: 0xc0b37a8  jal         func_2CDEA0
label_2d19f8:
    if (ctx->pc == 0x2D19F8u) {
        ctx->pc = 0x2D19F8u;
            // 0x2d19f8: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2D19FCu;
        goto label_2d19fc;
    }
    ctx->pc = 0x2D19F4u;
    SET_GPR_U32(ctx, 31, 0x2D19FCu);
    ctx->pc = 0x2D19F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19F4u;
            // 0x2d19f8: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D19FCu; }
        if (ctx->pc != 0x2D19FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D19FCu; }
        if (ctx->pc != 0x2D19FCu) { return; }
    }
    ctx->pc = 0x2D19FCu;
label_2d19fc:
    // 0x2d19fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d1a00:
    if (ctx->pc == 0x2D1A00u) {
        ctx->pc = 0x2D1A00u;
            // 0x2d1a00: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2D1A04u;
        goto label_2d1a04;
    }
    ctx->pc = 0x2D19FCu;
    {
        const bool branch_taken_0x2d19fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19FCu;
            // 0x2d1a00: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19fc) {
            ctx->pc = 0x2D1A0Cu;
            goto label_2d1a0c;
        }
    }
    ctx->pc = 0x2D1A04u;
label_2d1a04:
    // 0x2d1a04: 0x1000000a  b           . + 4 + (0xA << 2)
label_2d1a08:
    if (ctx->pc == 0x2D1A08u) {
        ctx->pc = 0x2D1A08u;
            // 0x2d1a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A0Cu;
        goto label_2d1a0c;
    }
    ctx->pc = 0x2D1A04u;
    {
        const bool branch_taken_0x2d1a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A04u;
            // 0x2d1a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a04) {
            ctx->pc = 0x2D1A30u;
            goto label_2d1a30;
        }
    }
    ctx->pc = 0x2D1A0Cu;
label_2d1a0c:
    // 0x2d1a0c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1a10:
    // 0x2d1a10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1a14:
    // 0x2d1a14: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x2d1a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_2d1a18:
    // 0x2d1a18: 0x320f809  jalr        $t9
label_2d1a1c:
    if (ctx->pc == 0x2D1A1Cu) {
        ctx->pc = 0x2D1A1Cu;
            // 0x2d1a1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A20u;
        goto label_2d1a20;
    }
    ctx->pc = 0x2D1A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1A20u);
        ctx->pc = 0x2D1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A18u;
            // 0x2d1a1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1A20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A20u; }
            if (ctx->pc != 0x2D1A20u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1A20u;
label_2d1a20:
    // 0x2d1a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1a24:
    // 0x2d1a24: 0xc0b37b4  jal         func_2CDED0
label_2d1a28:
    if (ctx->pc == 0x2D1A28u) {
        ctx->pc = 0x2D1A28u;
            // 0x2d1a28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2D1A2Cu;
        goto label_2d1a2c;
    }
    ctx->pc = 0x2D1A24u;
    SET_GPR_U32(ctx, 31, 0x2D1A2Cu);
    ctx->pc = 0x2D1A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A24u;
            // 0x2d1a28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A2Cu; }
        if (ctx->pc != 0x2D1A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A2Cu; }
        if (ctx->pc != 0x2D1A2Cu) { return; }
    }
    ctx->pc = 0x2D1A2Cu;
label_2d1a2c:
    // 0x2d1a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1a30:
    // 0x2d1a30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1a34:
    // 0x2d1a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1a38:
    // 0x2d1a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1a3c:
    // 0x2d1a3c: 0x3e00008  jr          $ra
label_2d1a40:
    if (ctx->pc == 0x2D1A40u) {
        ctx->pc = 0x2D1A40u;
            // 0x2d1a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1A44u;
        goto label_fallthrough_0x2d1a3c;
    }
    ctx->pc = 0x2D1A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A3Cu;
            // 0x2d1a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1a3c:
    ctx->pc = 0x2D1A44u;
}
