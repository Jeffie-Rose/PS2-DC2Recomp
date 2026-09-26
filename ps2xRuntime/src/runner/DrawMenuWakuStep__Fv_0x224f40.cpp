#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuWakuStep__Fv
// Address: 0x224f40 - 0x225048
void DrawMenuWakuStep__Fv_0x224f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuWakuStep__Fv_0x224f40");
#endif

    switch (ctx->pc) {
        case 0x224f84u: goto label_224f84;
        case 0x224fb4u: goto label_224fb4;
        default: break;
    }

    ctx->pc = 0x224f40u;

    // 0x224f40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x224f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x224f44: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x224f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x224f48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x224f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x224f4c: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x224f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x224f50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x224f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x224f54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x224f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x224f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224f64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x224f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224f6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x224f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x224f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224f74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x224f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f78: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x224f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x224f7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x224f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x224f80: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x224f80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_224f84:
    // 0x224f84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x224f88: 0x278282d0  addiu       $v0, $gp, -0x7D30
    ctx->pc = 0x224f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935248));
    // 0x224f8c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x224f90: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x224f94: 0x24740060  addiu       $s4, $v1, 0x60
    ctx->pc = 0x224f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x224f98: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x224f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f9c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x224f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224fa0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x224fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x224fa4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x224fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x224fa8: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x224fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x224fac: 0xc094570  jal         func_2515C0
    ctx->pc = 0x224FACu;
    SET_GPR_U32(ctx, 31, 0x224FB4u);
    ctx->pc = 0x224FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224FACu;
            // 0x224fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FB4u; }
        if (ctx->pc != 0x224FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FB4u; }
        if (ctx->pc != 0x224FB4u) { return; }
    }
    ctx->pc = 0x224FB4u;
label_224fb4:
    // 0x224fb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224FB4u;
    {
        const bool branch_taken_0x224fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224fb4) {
            ctx->pc = 0x224FC4u;
            goto label_224fc4;
        }
    }
    ctx->pc = 0x224FBCu;
    // 0x224fbc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x224fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224fc0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x224fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_224fc4:
    // 0x224fc4: 0x0  nop
    ctx->pc = 0x224fc4u;
    // NOP
    // 0x224fc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x224fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x224fcc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x224fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224fd0: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x224fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x224fd4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x224FD4u;
    {
        const bool branch_taken_0x224fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FD4u;
            // 0x224fd8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fd4) {
            ctx->pc = 0x224F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224f84;
        }
    }
    ctx->pc = 0x224FDCu;
    // 0x224fdc: 0xc78293e8  lwc1        $f2, -0x6C18($gp)
    ctx->pc = 0x224fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224fe0: 0x3c033c69  lui         $v1, 0x3C69
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15465 << 16));
    // 0x224fe4: 0x3464f686  ori         $a0, $v1, 0xF686
    ctx->pc = 0x224fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63110);
    // 0x224fe8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x224fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224fec: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x224fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x224ff0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x224ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x224ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224ff8: 0x0  nop
    ctx->pc = 0x224ff8u;
    // NOP
    // 0x224ffc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x224ffcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x225000: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225004: 0x0  nop
    ctx->pc = 0x225004u;
    // NOP
    // 0x225008: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225008u;
    {
        const bool branch_taken_0x225008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225008u;
            // 0x22500c: 0xe78193e8  swc1        $f1, -0x6C18($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225008) {
            ctx->pc = 0x225028u;
            goto label_225028;
        }
    }
    ctx->pc = 0x225010u;
    // 0x225010: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x225014: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x225014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22501c: 0x0  nop
    ctx->pc = 0x22501cu;
    // NOP
    // 0x225020: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x225020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225024: 0xe78093e8  swc1        $f0, -0x6C18($gp)
    ctx->pc = 0x225024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939624), bits); }
label_225028:
    // 0x225028: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x225028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22502c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22502cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x225030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22503c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22503cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225040: 0x3e00008  jr          $ra
    ctx->pc = 0x225040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225040u;
            // 0x225044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225048u;
}
