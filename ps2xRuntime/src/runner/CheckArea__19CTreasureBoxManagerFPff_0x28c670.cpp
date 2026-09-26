#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckArea__19CTreasureBoxManagerFPff
// Address: 0x28c670 - 0x28c71c
void CheckArea__19CTreasureBoxManagerFPff_0x28c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckArea__19CTreasureBoxManagerFPff_0x28c670");
#endif

    switch (ctx->pc) {
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        default: break;
    }

    ctx->pc = 0x28c670u;

label_28c670:
    // 0x28c670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28c674:
    // 0x28c674: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28c678:
    // 0x28c678: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28c67c:
    // 0x28c67c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28c680:
    // 0x28c680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c684:
    // 0x28c684: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28c684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28c688:
    // 0x28c688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c68c:
    // 0x28c68c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28c68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28c690:
    // 0x28c690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c694:
    // 0x28c694: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28c694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28c698:
    // 0x28c698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c69c:
    // 0x28c69c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x28c69cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_28c6a0:
    // 0x28c6a0: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x28c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_28c6a4:
    // 0x28c6a4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x28c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28c6a8:
    // 0x28c6a8: 0x80420064  lb          $v0, 0x64($v0)
    ctx->pc = 0x28c6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_28c6ac:
    // 0x28c6ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28c6b0:
    if (ctx->pc == 0x28C6B0u) {
        ctx->pc = 0x28C6B4u;
        goto label_28c6b4;
    }
    ctx->pc = 0x28C6ACu;
    {
        const bool branch_taken_0x28c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c6ac) {
            ctx->pc = 0x28C6E8u;
            goto label_28c6e8;
        }
    }
    ctx->pc = 0x28C6B4u;
label_28c6b4:
    // 0x28c6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c6b8:
    // 0x28c6b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c6bc:
    // 0x28c6bc: 0x320f809  jalr        $t9
label_28c6c0:
    if (ctx->pc == 0x28C6C0u) {
        ctx->pc = 0x28C6C0u;
            // 0x28c6c0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28C6C4u;
        goto label_28c6c4;
    }
    ctx->pc = 0x28C6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C6C4u);
        ctx->pc = 0x28C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6BCu;
            // 0x28c6c0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C6C4u; }
            if (ctx->pc != 0x28C6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x28C6C4u;
label_28c6c4:
    // 0x28c6c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28c6c8:
    // 0x28c6c8: 0xc04c018  jal         func_130060
label_28c6cc:
    if (ctx->pc == 0x28C6CCu) {
        ctx->pc = 0x28C6CCu;
            // 0x28c6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C6D0u;
        goto label_28c6d0;
    }
    ctx->pc = 0x28C6C8u;
    SET_GPR_U32(ctx, 31, 0x28C6D0u);
    ctx->pc = 0x28C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6C8u;
            // 0x28c6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6D0u; }
        if (ctx->pc != 0x28C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6D0u; }
        if (ctx->pc != 0x28C6D0u) { return; }
    }
    ctx->pc = 0x28C6D0u;
label_28c6d0:
    // 0x28c6d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28c6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c6d4:
    // 0x28c6d4: 0x0  nop
    ctx->pc = 0x28c6d4u;
    // NOP
label_28c6d8:
    // 0x28c6d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28c6dc:
    if (ctx->pc == 0x28C6DCu) {
        ctx->pc = 0x28C6DCu;
            // 0x28c6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E0u;
        goto label_28c6e0;
    }
    ctx->pc = 0x28C6D8u;
    {
        const bool branch_taken_0x28c6d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6D8u;
            // 0x28c6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6d8) {
            ctx->pc = 0x28C6E8u;
            goto label_28c6e8;
        }
    }
    ctx->pc = 0x28C6E0u;
label_28c6e0:
    // 0x28c6e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c6e4:
    if (ctx->pc == 0x28C6E4u) {
        ctx->pc = 0x28C6E4u;
            // 0x28c6e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x28C6E8u;
        goto label_28c6e8;
    }
    ctx->pc = 0x28C6E0u;
    {
        const bool branch_taken_0x28c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6E0u;
            // 0x28c6e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6e0) {
            ctx->pc = 0x28C700u;
            goto label_28c700;
        }
    }
    ctx->pc = 0x28C6E8u;
label_28c6e8:
    // 0x28c6e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c6ec:
    // 0x28c6ec: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_28c6f0:
    // 0x28c6f0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_28c6f4:
    if (ctx->pc == 0x28C6F4u) {
        ctx->pc = 0x28C6F4u;
            // 0x28c6f4: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x28C6F8u;
        goto label_28c6f8;
    }
    ctx->pc = 0x28C6F0u;
    {
        const bool branch_taken_0x28c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6F0u;
            // 0x28c6f4: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6f0) {
            ctx->pc = 0x28C6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C6F8u;
label_28c6f8:
    // 0x28c6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c6fc:
    // 0x28c6fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28c700:
    // 0x28c700: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28c704:
    // 0x28c704: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28c704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c708:
    // 0x28c708: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28c708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c70c:
    // 0x28c70c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28c70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c710:
    // 0x28c710: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28c710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c714:
    // 0x28c714: 0x3e00008  jr          $ra
label_28c718:
    if (ctx->pc == 0x28C718u) {
        ctx->pc = 0x28C718u;
            // 0x28c718: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28C71Cu;
        goto label_fallthrough_0x28c714;
    }
    ctx->pc = 0x28C714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C714u;
            // 0x28c718: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c714:
    ctx->pc = 0x28C71Cu;
}
