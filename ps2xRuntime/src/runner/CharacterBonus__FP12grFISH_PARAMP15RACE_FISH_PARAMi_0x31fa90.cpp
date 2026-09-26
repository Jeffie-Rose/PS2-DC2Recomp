#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharacterBonus__FP12grFISH_PARAMP15RACE_FISH_PARAMi
// Address: 0x31fa90 - 0x31fd68
void CharacterBonus__FP12grFISH_PARAMP15RACE_FISH_PARAMi_0x31fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharacterBonus__FP12grFISH_PARAMP15RACE_FISH_PARAMi_0x31fa90");
#endif

    switch (ctx->pc) {
        case 0x31fb1cu: goto label_31fb1c;
        case 0x31fb64u: goto label_31fb64;
        case 0x31fbb4u: goto label_31fbb4;
        case 0x31fbd0u: goto label_31fbd0;
        case 0x31fc00u: goto label_31fc00;
        case 0x31fd18u: goto label_31fd18;
        default: break;
    }

    ctx->pc = 0x31fa90u;

    // 0x31fa90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31fa94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31fa98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31fa9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31faa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31faa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31faa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31faa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31faa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31faac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31faacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fab0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31fab4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x31fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x31fab8: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x31fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x31fabc: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x31fabcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31fac0: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x31fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x31fac4: 0xaca40088  sw          $a0, 0x88($a1)
    ctx->pc = 0x31fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 4));
    // 0x31fac8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x31fac8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x31facc: 0xaca4008c  sw          $a0, 0x8C($a1)
    ctx->pc = 0x31faccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 4));
    // 0x31fad0: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x31fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x31fad4: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x31FAD4u;
    {
        const bool branch_taken_0x31fad4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x31FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAD4u;
            // 0x31fad8: 0xaca40094  sw          $a0, 0x94($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fad4) {
            ctx->pc = 0x31FBA0u;
            goto label_31fba0;
        }
    }
    ctx->pc = 0x31FADCu;
    // 0x31fadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31fae0: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x31FAE0u;
    {
        const bool branch_taken_0x31fae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x31FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAE0u;
            // 0x31fae4: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fae0) {
            ctx->pc = 0x31FBD4u;
            goto label_31fbd4;
        }
    }
    ctx->pc = 0x31FAE8u;
    // 0x31fae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31faec: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x31FAECu;
    {
        const bool branch_taken_0x31faec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x31faec) {
            ctx->pc = 0x31FB4Cu;
            goto label_31fb4c;
        }
    }
    ctx->pc = 0x31FAF4u;
    // 0x31faf4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FAF4u;
    {
        const bool branch_taken_0x31faf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31faf4) {
            ctx->pc = 0x31FB04u;
            goto label_31fb04;
        }
    }
    ctx->pc = 0x31FAFCu;
    // 0x31fafc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31FAFCu;
    {
        const bool branch_taken_0x31fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fafc) {
            ctx->pc = 0x31FBD0u;
            goto label_31fbd0;
        }
    }
    ctx->pc = 0x31FB04u;
label_31fb04:
    // 0x31fb04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31fb08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31fb0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31fb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fb10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31fb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fb14: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FB14u;
    SET_GPR_U32(ctx, 31, 0x31FB1Cu);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB1Cu; }
        if (ctx->pc != 0x31FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB1Cu; }
        if (ctx->pc != 0x31FB1Cu) { return; }
    }
    ctx->pc = 0x31FB1Cu;
label_31fb1c:
    // 0x31fb1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31fb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fb20: 0x0  nop
    ctx->pc = 0x31fb20u;
    // NOP
    // 0x31fb24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31fb24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fb28: 0x0  nop
    ctx->pc = 0x31fb28u;
    // NOP
    // 0x31fb2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31FB2Cu;
    {
        const bool branch_taken_0x31fb2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB2Cu;
            // 0x31fb30: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb2c) {
            ctx->pc = 0x31FB38u;
            goto label_31fb38;
        }
    }
    ctx->pc = 0x31FB34u;
    // 0x31fb34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31fb34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_31fb38:
    // 0x31fb38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31fb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fb3c: 0x0  nop
    ctx->pc = 0x31fb3cu;
    // NOP
    // 0x31fb40: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x31fb40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31fb44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31FB44u;
    {
        const bool branch_taken_0x31fb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB44u;
            // 0x31fb48: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb44) {
            ctx->pc = 0x31FBD0u;
            goto label_31fbd0;
        }
    }
    ctx->pc = 0x31FB4Cu;
label_31fb4c:
    // 0x31fb4c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31fb50: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31fb54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31fb54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fb58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31fb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fb5c: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FB5Cu;
    SET_GPR_U32(ctx, 31, 0x31FB64u);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB64u; }
        if (ctx->pc != 0x31FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB64u; }
        if (ctx->pc != 0x31FB64u) { return; }
    }
    ctx->pc = 0x31FB64u;
label_31fb64:
    // 0x31fb64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31fb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fb68: 0x0  nop
    ctx->pc = 0x31fb68u;
    // NOP
    // 0x31fb6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31fb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fb70: 0x0  nop
    ctx->pc = 0x31fb70u;
    // NOP
    // 0x31fb74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31FB74u;
    {
        const bool branch_taken_0x31fb74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB74u;
            // 0x31fb78: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb74) {
            ctx->pc = 0x31FB80u;
            goto label_31fb80;
        }
    }
    ctx->pc = 0x31FB7Cu;
    // 0x31fb7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31fb7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_31fb80:
    // 0x31fb80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x31fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x31fb84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31fb88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31fb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fb8c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x31fb8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31fb90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31fb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31fb94: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x31fb94u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31fb98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31FB98u;
    {
        const bool branch_taken_0x31fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB98u;
            // 0x31fb9c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb98) {
            ctx->pc = 0x31FBD0u;
            goto label_31fbd0;
        }
    }
    ctx->pc = 0x31FBA0u;
label_31fba0:
    // 0x31fba0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31fba4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31fba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31fba8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31fba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fbac: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FBACu;
    SET_GPR_U32(ctx, 31, 0x31FBB4u);
    ctx->pc = 0x31FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBACu;
            // 0x31fbb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBB4u; }
        if (ctx->pc != 0x31FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBB4u; }
        if (ctx->pc != 0x31FBB4u) { return; }
    }
    ctx->pc = 0x31FBB4u;
label_31fbb4:
    // 0x31fbb4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31fbb8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x31fbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31fbbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31fbc0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x31fbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fbc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fbc8: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FBC8u;
    SET_GPR_U32(ctx, 31, 0x31FBD0u);
    ctx->pc = 0x31FBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBC8u;
            // 0x31fbcc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBD0u; }
        if (ctx->pc != 0x31FBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBD0u; }
        if (ctx->pc != 0x31FBD0u) { return; }
    }
    ctx->pc = 0x31FBD0u;
label_31fbd0:
    // 0x31fbd0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x31fbd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_31fbd4:
    // 0x31fbd4: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x31FBD4u;
    {
        const bool branch_taken_0x31fbd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBD4u;
            // 0x31fbd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbd4) {
            ctx->pc = 0x31FD44u;
            goto label_31fd44;
        }
    }
    ctx->pc = 0x31FBDCu;
    // 0x31fbdc: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x31fbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31fbe0: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x31FBE0u;
    {
        const bool branch_taken_0x31fbe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBE0u;
            // 0x31fbe4: 0x260cfff8  addiu       $t4, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbe0) {
            ctx->pc = 0x31FCF4u;
            goto label_31fcf4;
        }
    }
    ctx->pc = 0x31FBE8u;
    // 0x31fbe8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x31fbe8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbec: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fbf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31fbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fbf4: 0x0  nop
    ctx->pc = 0x31fbf4u;
    // NOP
    // 0x31fbf8: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x31fbf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x31fbfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31fbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_31fc00:
    // 0x31fc00: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x31fc00u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31fc04: 0x22d7021  addu        $t6, $s1, $t5
    ctx->pc = 0x31fc04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x31fc08: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x31fc08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31fc0c: 0x25690002  addiu       $t1, $t3, 0x2
    ctx->pc = 0x31fc0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x31fc10: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31fc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31fc14: 0x25680003  addiu       $t0, $t3, 0x3
    ctx->pc = 0x31fc14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x31fc18: 0x25670004  addiu       $a3, $t3, 0x4
    ctx->pc = 0x31fc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x31fc1c: 0x25660005  addiu       $a2, $t3, 0x5
    ctx->pc = 0x31fc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x31fc20: 0x25650006  addiu       $a1, $t3, 0x6
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x31fc24: 0x25640007  addiu       $a0, $t3, 0x7
    ctx->pc = 0x31fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x31fc28: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x31fc2c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x31fc2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x31fc30: 0x16c182a  slt         $v1, $t3, $t4
    ctx->pc = 0x31fc30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x31fc34: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x31fc34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x31fc38: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31fc38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31fc3c: 0x4603a0c1  sub.s       $f3, $f20, $f3
    ctx->pc = 0x31fc3cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x31fc40: 0xe5c30080  swc1        $f3, 0x80($t6)
    ctx->pc = 0x31fc40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 128), bits); }
    // 0x31fc44: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x31fc44u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31fc48: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x31fc48u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31fc4c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x31fc4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x31fc50: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31fc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31fc54: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x31fc54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x31fc58: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x31fc58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x31fc5c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x31fc5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x31fc60: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31fc60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31fc64: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x31fc64u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x31fc68: 0xe5c40084  swc1        $f4, 0x84($t6)
    ctx->pc = 0x31fc68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 132), bits); }
    // 0x31fc6c: 0x4603a0c1  sub.s       $f3, $f20, $f3
    ctx->pc = 0x31fc6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x31fc70: 0xe5c30088  swc1        $f3, 0x88($t6)
    ctx->pc = 0x31fc70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 136), bits); }
    // 0x31fc74: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x31fc74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31fc78: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x31fc78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31fc7c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x31fc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x31fc80: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31fc80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31fc84: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x31fc84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x31fc88: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x31fc88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x31fc8c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x31fc8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x31fc90: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31fc90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31fc94: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x31fc94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x31fc98: 0xe5c4008c  swc1        $f4, 0x8C($t6)
    ctx->pc = 0x31fc98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 140), bits); }
    // 0x31fc9c: 0x4603a0c1  sub.s       $f3, $f20, $f3
    ctx->pc = 0x31fc9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x31fca0: 0xe5c30090  swc1        $f3, 0x90($t6)
    ctx->pc = 0x31fca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 144), bits); }
    // 0x31fca4: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x31fca4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31fca8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x31fca8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31fcac: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x31fcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x31fcb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31fcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31fcb4: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x31fcb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x31fcb8: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x31fcb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x31fcbc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x31fcbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x31fcc0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31fcc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31fcc4: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x31fcc4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x31fcc8: 0x4603a0c1  sub.s       $f3, $f20, $f3
    ctx->pc = 0x31fcc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x31fccc: 0xe5c40094  swc1        $f4, 0x94($t6)
    ctx->pc = 0x31fcccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 148), bits); }
    // 0x31fcd0: 0xe5c30098  swc1        $f3, 0x98($t6)
    ctx->pc = 0x31fcd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 152), bits); }
    // 0x31fcd4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x31fcd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31fcd8: 0x0  nop
    ctx->pc = 0x31fcd8u;
    // NOP
    // 0x31fcdc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31fcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31fce0: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x31fce0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x31fce4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31fce4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31fce8: 0x4603a0c1  sub.s       $f3, $f20, $f3
    ctx->pc = 0x31fce8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x31fcec: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x31FCECu;
    {
        const bool branch_taken_0x31fcec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCECu;
            // 0x31fcf0: 0xe5c3009c  swc1        $f3, 0x9C($t6) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcec) {
            ctx->pc = 0x31FC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fc00;
        }
    }
    ctx->pc = 0x31FCF4u;
label_31fcf4:
    // 0x31fcf4: 0x0  nop
    ctx->pc = 0x31fcf4u;
    // NOP
    // 0x31fcf8: 0x170082a  slt         $at, $t3, $s0
    ctx->pc = 0x31fcf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31fcfc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x31FCFCu;
    {
        const bool branch_taken_0x31fcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCFCu;
            // 0x31fd00: 0xb2880  sll         $a1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcfc) {
            ctx->pc = 0x31FD44u;
            goto label_31fd44;
        }
    }
    ctx->pc = 0x31FD04u;
    // 0x31fd04: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x31fd04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x31fd08: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fd10: 0x0  nop
    ctx->pc = 0x31fd10u;
    // NOP
    // 0x31fd14: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31fd14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_31fd18:
    // 0x31fd18: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x31fd18u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fd1c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x31fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x31fd20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31fd24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31fd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31fd28: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31fd2c: 0x170182a  slt         $v1, $t3, $s0
    ctx->pc = 0x31fd2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31fd30: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x31fd30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x31fd34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31fd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31fd38: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x31fd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x31fd3c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x31FD3Cu;
    {
        const bool branch_taken_0x31fd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD3Cu;
            // 0x31fd40: 0xe4800080  swc1        $f0, 0x80($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd3c) {
            ctx->pc = 0x31FD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fd18;
        }
    }
    ctx->pc = 0x31FD44u;
label_31fd44:
    // 0x31fd44: 0x0  nop
    ctx->pc = 0x31fd44u;
    // NOP
    // 0x31fd48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fd4c: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x31fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x31fd50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fd54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31fd58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31fd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fd5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31fd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD60u;
            // 0x31fd64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FD68u;
}
