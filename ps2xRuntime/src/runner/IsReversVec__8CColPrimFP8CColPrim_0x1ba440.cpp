#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsReversVec__8CColPrimFP8CColPrim
// Address: 0x1ba440 - 0x1ba4e8
void IsReversVec__8CColPrimFP8CColPrim_0x1ba440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsReversVec__8CColPrimFP8CColPrim_0x1ba440");
#endif

    switch (ctx->pc) {
        case 0x1ba4a4u: goto label_1ba4a4;
        default: break;
    }

    ctx->pc = 0x1ba440u;

    // 0x1ba440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ba444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ba448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba454: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA458u;
    {
        const bool branch_taken_0x1ba458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA458u;
            // 0x1ba45c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba458) {
            ctx->pc = 0x1BA468u;
            goto label_1ba468;
        }
    }
    ctx->pc = 0x1BA460u;
    // 0x1ba460: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BA460u;
    {
        const bool branch_taken_0x1ba460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA460u;
            // 0x1ba464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba460) {
            ctx->pc = 0x1BA4D4u;
            goto label_1ba4d4;
        }
    }
    ctx->pc = 0x1BA468u;
label_1ba468:
    // 0x1ba468: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ba46c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA46Cu;
    {
        const bool branch_taken_0x1ba46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA46Cu;
            // 0x1ba470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba46c) {
            ctx->pc = 0x1BA47Cu;
            goto label_1ba47c;
        }
    }
    ctx->pc = 0x1BA474u;
    // 0x1ba474: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA474u;
    {
        const bool branch_taken_0x1ba474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA474u;
            // 0x1ba478: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba474) {
            ctx->pc = 0x1BA4D8u;
            goto label_1ba4d8;
        }
    }
    ctx->pc = 0x1BA47Cu;
label_1ba47c:
    // 0x1ba47c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ba47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ba480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA480u;
    {
        const bool branch_taken_0x1ba480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA480u;
            // 0x1ba484: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba480) {
            ctx->pc = 0x1BA490u;
            goto label_1ba490;
        }
    }
    ctx->pc = 0x1BA488u;
    // 0x1ba488: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BA488u;
    {
        const bool branch_taken_0x1ba488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA488u;
            // 0x1ba48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba488) {
            ctx->pc = 0x1BA4D4u;
            goto label_1ba4d4;
        }
    }
    ctx->pc = 0x1BA490u;
label_1ba490:
    // 0x1ba490: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1ba494: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1ba494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1ba498: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1ba498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ba49c: 0xc04c018  jal         func_130060
    ctx->pc = 0x1BA49Cu;
    SET_GPR_U32(ctx, 31, 0x1BA4A4u);
    ctx->pc = 0x1BA4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA49Cu;
            // 0x1ba4a0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4A4u; }
        if (ctx->pc != 0x1BA4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4A4u; }
        if (ctx->pc != 0x1BA4A4u) { return; }
    }
    ctx->pc = 0x1BA4A4u;
label_1ba4a4:
    // 0x1ba4a4: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x1ba4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba4a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba4ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ba4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ba4b0: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x1ba4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba4b4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1ba4b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1ba4b8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ba4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ba4bc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1ba4bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1ba4c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba4c4: 0x0  nop
    ctx->pc = 0x1ba4c4u;
    // NOP
    // 0x1ba4c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA4C8u;
    {
        const bool branch_taken_0x1ba4c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4C8u;
            // 0x1ba4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c8) {
            ctx->pc = 0x1BA4D4u;
            goto label_1ba4d4;
        }
    }
    ctx->pc = 0x1BA4D0u;
    // 0x1ba4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba4d4:
    // 0x1ba4d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ba4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba4d8:
    // 0x1ba4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4E0u;
            // 0x1ba4e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA4E8u;
}
