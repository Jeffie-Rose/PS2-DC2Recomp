#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CDeadEffectFv
// Address: 0x1c3930 - 0x1c3ad4
void Step__11CDeadEffectFv_0x1c3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CDeadEffectFv_0x1c3930");
#endif

    switch (ctx->pc) {
        case 0x1c3980u: goto label_1c3980;
        case 0x1c3a84u: goto label_1c3a84;
        case 0x1c3a90u: goto label_1c3a90;
        case 0x1c3ab4u: goto label_1c3ab4;
        case 0x1c3ac0u: goto label_1c3ac0;
        default: break;
    }

    ctx->pc = 0x1c3930u;

    // 0x1c3930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3940: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1c3944: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3944u;
    {
        const bool branch_taken_0x1c3944 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C3948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3944u;
            // 0x1c3948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3944) {
            ctx->pc = 0x1C3958u;
            goto label_1c3958;
        }
    }
    ctx->pc = 0x1C394Cu;
    // 0x1c394c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1c394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c3950: 0x1860005b  blez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1C3950u;
    {
        const bool branch_taken_0x1c3950 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c3950) {
            ctx->pc = 0x1C3AC0u;
            goto label_1c3ac0;
        }
    }
    ctx->pc = 0x1C3958u;
label_1c3958:
    // 0x1c3958: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1c3958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c395c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c395cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1c3960: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x1c3964: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1c3964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c3968: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1c3968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1c396c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c396cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c3970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3974: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1c3974u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3978: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C3978u;
    {
        const bool branch_taken_0x1c3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3978u;
            // 0x1c397c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3978) {
            ctx->pc = 0x1C3A28u;
            goto label_1c3a28;
        }
    }
    ctx->pc = 0x1C3980u;
label_1c3980:
    // 0x1c3980: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1c3984: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3984u;
    {
        const bool branch_taken_0x1c3984 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c3984) {
            ctx->pc = 0x1C3A1Cu;
            goto label_1c3a1c;
        }
    }
    ctx->pc = 0x1C398Cu;
    // 0x1c398c: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x1c398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3990: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1c3990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3994: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c3994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c3998: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x1c3998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1c399c: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x1c399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c39a0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1c39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c39a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c39a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c39a8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1c39a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1c39ac: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x1c39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c39b0: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x1c39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c39b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c39b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c39b8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x1c39b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x1c39bc: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x1c39bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c39c0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x1c39c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c39c4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c39c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c39c8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1c39c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1c39cc: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x1c39ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c39d0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x1c39d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c39d4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c39d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c39d8: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1c39d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x1c39dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c39e0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C39E0u;
    {
        const bool branch_taken_0x1c39e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c39e0) {
            ctx->pc = 0x1C39F4u;
            goto label_1c39f4;
        }
    }
    ctx->pc = 0x1C39E8u;
    // 0x1c39e8: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x1c39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c39ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c39ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c39f0: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x1c39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_1c39f4:
    // 0x1c39f4: 0x0  nop
    ctx->pc = 0x1c39f4u;
    // NOP
    // 0x1c39f8: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1c39fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c3a00: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1c3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1c3a04: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1c3a08: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A08u;
    {
        const bool branch_taken_0x1c3a08 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c3a08) {
            ctx->pc = 0x1C3A1Cu;
            goto label_1c3a1c;
        }
    }
    ctx->pc = 0x1C3A10u;
    // 0x1c3a10: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1c3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c3a14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c3a18: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1c3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c3a1c:
    // 0x1c3a1c: 0x0  nop
    ctx->pc = 0x1c3a1cu;
    // NOP
    // 0x1c3a20: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x1c3a24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1c3a28:
    // 0x1c3a28: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c3a2c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1c3a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3a30: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C3A30u;
    {
        const bool branch_taken_0x1c3a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a30) {
            ctx->pc = 0x1C3980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3980;
        }
    }
    ctx->pc = 0x1C3A38u;
    // 0x1c3a38: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c3a3c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C3A3Cu;
    {
        const bool branch_taken_0x1c3a3c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1c3a3c) {
            ctx->pc = 0x1C3AC0u;
            goto label_1c3ac0;
        }
    }
    ctx->pc = 0x1C3A44u;
    // 0x1c3a44: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3a48: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1c3a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c3a4c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C3A4Cu;
    {
        const bool branch_taken_0x1c3a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a4c) {
            ctx->pc = 0x1C3AC0u;
            goto label_1c3ac0;
        }
    }
    ctx->pc = 0x1C3A54u;
    // 0x1c3a54: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3a58: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c3a5c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3a60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c3a64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c3a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3a68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A68u;
    {
        const bool branch_taken_0x1c3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a68) {
            ctx->pc = 0x1C3A74u;
            goto label_1c3a74;
        }
    }
    ctx->pc = 0x1C3A70u;
    // 0x1c3a70: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1c3a74:
    // 0x1c3a74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a7c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3A7Cu;
    {
        const bool branch_taken_0x1c3a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A7Cu;
            // 0x1c3a80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a7c) {
            ctx->pc = 0x1C3AA4u;
            goto label_1c3aa4;
        }
    }
    ctx->pc = 0x1C3A84u;
label_1c3a84:
    // 0x1c3a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a88: 0xc070dac  jal         func_1C36B0
    ctx->pc = 0x1C3A88u;
    SET_GPR_U32(ctx, 31, 0x1C3A90u);
    ctx->pc = 0x1C3A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A88u;
            // 0x1c3a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C36B0u;
    if (runtime->hasFunction(0x1C36B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C36B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A90u; }
        if (ctx->pc != 0x1C3A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__11CDeadEffectFi_0x1c36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A90u; }
        if (ctx->pc != 0x1C3A90u) { return; }
    }
    ctx->pc = 0x1C3A90u;
label_1c3a90:
    // 0x1c3a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c3a94: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1c3a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3a98: 0x0  nop
    ctx->pc = 0x1c3a98u;
    // NOP
    // 0x1c3a9c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C3A9Cu;
    {
        const bool branch_taken_0x1c3a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a9c) {
            ctx->pc = 0x1C3A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3a84;
        }
    }
    ctx->pc = 0x1C3AA4u;
label_1c3aa4:
    // 0x1c3aa4: 0x0  nop
    ctx->pc = 0x1c3aa4u;
    // NOP
    // 0x1c3aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3aac: 0xc070dac  jal         func_1C36B0
    ctx->pc = 0x1C3AACu;
    SET_GPR_U32(ctx, 31, 0x1C3AB4u);
    ctx->pc = 0x1C3AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AACu;
            // 0x1c3ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C36B0u;
    if (runtime->hasFunction(0x1C36B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C36B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AB4u; }
        if (ctx->pc != 0x1C3AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__11CDeadEffectFi_0x1c36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AB4u; }
        if (ctx->pc != 0x1C3AB4u) { return; }
    }
    ctx->pc = 0x1C3AB4u;
label_1c3ab4:
    // 0x1c3ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ab8: 0xc070dac  jal         func_1C36B0
    ctx->pc = 0x1C3AB8u;
    SET_GPR_U32(ctx, 31, 0x1C3AC0u);
    ctx->pc = 0x1C3ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AB8u;
            // 0x1c3abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C36B0u;
    if (runtime->hasFunction(0x1C36B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C36B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AC0u; }
        if (ctx->pc != 0x1C3AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__11CDeadEffectFi_0x1c36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AC0u; }
        if (ctx->pc != 0x1C3AC0u) { return; }
    }
    ctx->pc = 0x1C3AC0u;
label_1c3ac0:
    // 0x1c3ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ACCu;
            // 0x1c3ad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3AD4u;
}
