#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExtendLine__Ff
// Address: 0x30fa50 - 0x30fc0c
void ExtendLine__Ff_0x30fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtendLine__Ff_0x30fa50");
#endif

    switch (ctx->pc) {
        case 0x30fad8u: goto label_30fad8;
        case 0x30fb34u: goto label_30fb34;
        case 0x30fba8u: goto label_30fba8;
        default: break;
    }

    ctx->pc = 0x30fa50u;

    // 0x30fa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30fa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30fa58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30fa58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30fa5c: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x30fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x30fa60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FA60u;
    {
        const bool branch_taken_0x30fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA60u;
            // 0x30fa64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa60) {
            ctx->pc = 0x30FAB0u;
            goto label_30fab0;
        }
    }
    ctx->pc = 0x30FA68u;
    // 0x30fa68: 0xc781a260  lwc1        $f1, -0x5DA0($gp)
    ctx->pc = 0x30fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fa6c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x30fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x30fa70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fa74: 0x0  nop
    ctx->pc = 0x30fa74u;
    // NOP
    // 0x30fa78: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x30fa78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x30fa7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fa80: 0x0  nop
    ctx->pc = 0x30fa80u;
    // NOP
    // 0x30fa84: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30FA84u;
    {
        const bool branch_taken_0x30fa84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA84u;
            // 0x30fa88: 0xe781a260  swc1        $f1, -0x5DA0($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa84) {
            ctx->pc = 0x30FAA8u;
            goto label_30faa8;
        }
    }
    ctx->pc = 0x30FA8Cu;
    // 0x30fa8c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x30fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x30fa90: 0xaf80a25c  sw          $zero, -0x5DA4($gp)
    ctx->pc = 0x30fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943324), GPR_U32(ctx, 0));
    // 0x30fa94: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x30fa98: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30fa9c: 0xaf82a24c  sw          $v0, -0x5DB4($gp)
    ctx->pc = 0x30fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), GPR_U32(ctx, 2));
    // 0x30faa0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x30FAA0u;
    {
        const bool branch_taken_0x30faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAA0u;
            // 0x30faa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faa0) {
            ctx->pc = 0x30FBFCu;
            goto label_30fbfc;
        }
    }
    ctx->pc = 0x30FAA8u;
label_30faa8:
    // 0x30faa8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x30FAA8u;
    {
        const bool branch_taken_0x30faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAA8u;
            // 0x30faac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faa8) {
            ctx->pc = 0x30FBFCu;
            goto label_30fbfc;
        }
    }
    ctx->pc = 0x30FAB0u;
label_30fab0:
    // 0x30fab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30fab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fab4: 0x0  nop
    ctx->pc = 0x30fab4u;
    // NOP
    // 0x30fab8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30fab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fabc: 0x0  nop
    ctx->pc = 0x30fabcu;
    // NOP
    // 0x30fac0: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x30FAC0u;
    {
        const bool branch_taken_0x30fac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fac0) {
            ctx->pc = 0x30FB74u;
            goto label_30fb74;
        }
    }
    ctx->pc = 0x30FAC8u;
    // 0x30fac8: 0xc780a24c  lwc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30facc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30faccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30fad0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30FAD0u;
    {
        const bool branch_taken_0x30fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAD0u;
            // 0x30fad4: 0xe780a24c  swc1        $f0, -0x5DB4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fad0) {
            ctx->pc = 0x30FB34u;
            goto label_30fb34;
        }
    }
    ctx->pc = 0x30FAD8u;
label_30fad8:
    // 0x30fad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fadc: 0xc781a24c  lwc1        $f1, -0x5DB4($gp)
    ctx->pc = 0x30fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fae0: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30fae4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30fae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30fae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30faec: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30faecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x30faf0: 0x8f83a248  lw          $v1, -0x5DB8($gp)
    ctx->pc = 0x30faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30faf4: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30FAF4u;
    {
        const bool branch_taken_0x30faf4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAF4u;
            // 0x30faf8: 0xe780a24c  swc1        $f0, -0x5DB4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faf4) {
            ctx->pc = 0x30FB34u;
            goto label_30fb34;
        }
    }
    ctx->pc = 0x30FAFCu;
    // 0x30fafc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30fb00: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30fb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fb08: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x30fb0c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x30fb10: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x30fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30fb14: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x30fb18: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30fb1c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x30fb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fb20: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x30fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x30fb24: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x30fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x30fb28: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x30fb28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fb2c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FB2Cu;
    SET_GPR_U32(ctx, 31, 0x30FB34u);
    ctx->pc = 0x30FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB2Cu;
            // 0x30fb30: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB34u; }
        if (ctx->pc != 0x30FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB34u; }
        if (ctx->pc != 0x30FB34u) { return; }
    }
    ctx->pc = 0x30FB34u;
label_30fb34:
    // 0x30fb34: 0x0  nop
    ctx->pc = 0x30fb34u;
    // NOP
    // 0x30fb38: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30fb3c: 0xc780a24c  lwc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fb40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30fb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fb44: 0x0  nop
    ctx->pc = 0x30fb44u;
    // NOP
    // 0x30fb48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30fb48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb4c: 0x0  nop
    ctx->pc = 0x30fb4cu;
    // NOP
    // 0x30fb50: 0x4500ffe1  bc1f        . + 4 + (-0x1F << 2)
    ctx->pc = 0x30FB50u;
    {
        const bool branch_taken_0x30fb50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB50u;
            // 0x30fb54: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb50) {
            ctx->pc = 0x30FAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fad8;
        }
    }
    ctx->pc = 0x30FB58u;
    // 0x30fb58: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30fb5c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FB5Cu;
    {
        const bool branch_taken_0x30fb5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30fb5c) {
            ctx->pc = 0x30FB74u;
            goto label_30fb74;
        }
    }
    ctx->pc = 0x30FB64u;
    // 0x30fb64: 0xe781a24c  swc1        $f1, -0x5DB4($gp)
    ctx->pc = 0x30fb64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), bits); }
    // 0x30fb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fb6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x30FB6Cu;
    {
        const bool branch_taken_0x30fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB6Cu;
            // 0x30fb70: 0xaf80a248  sw          $zero, -0x5DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb6c) {
            ctx->pc = 0x30FBFCu;
            goto label_30fbfc;
        }
    }
    ctx->pc = 0x30FB74u;
label_30fb74:
    // 0x30fb74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30fb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fb78: 0x0  nop
    ctx->pc = 0x30fb78u;
    // NOP
    // 0x30fb7c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x30fb7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb80: 0x0  nop
    ctx->pc = 0x30fb80u;
    // NOP
    // 0x30fb84: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x30FB84u;
    {
        const bool branch_taken_0x30fb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB84u;
            // 0x30fb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb84) {
            ctx->pc = 0x30FBFCu;
            goto label_30fbfc;
        }
    }
    ctx->pc = 0x30FB8Cu;
    // 0x30fb8c: 0xc780a24c  lwc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fb90: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30fb94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30fb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fb98: 0x0  nop
    ctx->pc = 0x30fb98u;
    // NOP
    // 0x30fb9c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30fb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30fba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FBA0u;
    {
        const bool branch_taken_0x30fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBA0u;
            // 0x30fba4: 0xe780a24c  swc1        $f0, -0x5DB4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fba0) {
            ctx->pc = 0x30FBC0u;
            goto label_30fbc0;
        }
    }
    ctx->pc = 0x30FBA8u;
label_30fba8:
    // 0x30fba8: 0xc780a24c  lwc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fbac: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30fbb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30fbb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fbb8: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x30fbbc: 0xe780a24c  swc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), bits); }
label_30fbc0:
    // 0x30fbc0: 0xc780a24c  lwc1        $f0, -0x5DB4($gp)
    ctx->pc = 0x30fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fbc4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30fbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fbc8: 0x0  nop
    ctx->pc = 0x30fbc8u;
    // NOP
    // 0x30fbcc: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x30FBCCu;
    {
        const bool branch_taken_0x30fbcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fbcc) {
            ctx->pc = 0x30FBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fba8;
        }
    }
    ctx->pc = 0x30FBD4u;
    // 0x30fbd4: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30fbd8: 0x2842003b  slti        $v0, $v0, 0x3B
    ctx->pc = 0x30fbd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)59) ? 1 : 0);
    // 0x30fbdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FBDCu;
    {
        const bool branch_taken_0x30fbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBDCu;
            // 0x30fbe0: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbdc) {
            ctx->pc = 0x30FBF8u;
            goto label_30fbf8;
        }
    }
    ctx->pc = 0x30FBE4u;
    // 0x30fbe4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x30fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x30fbe8: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x30fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x30fbec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30fbf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FBF0u;
    {
        const bool branch_taken_0x30fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBF0u;
            // 0x30fbf4: 0xaf83a24c  sw          $v1, -0x5DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbf0) {
            ctx->pc = 0x30FBFCu;
            goto label_30fbfc;
        }
    }
    ctx->pc = 0x30FBF8u;
label_30fbf8:
    // 0x30fbf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fbfc:
    // 0x30fbfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fc00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30fc04: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC04u;
            // 0x30fc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FC0Cu;
}
