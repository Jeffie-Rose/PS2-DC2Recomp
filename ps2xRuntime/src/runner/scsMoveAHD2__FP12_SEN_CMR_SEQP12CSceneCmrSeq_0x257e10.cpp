#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMoveAHD2__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257e10 - 0x258560
void scsMoveAHD2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMoveAHD2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257e10");
#endif

    switch (ctx->pc) {
        case 0x257f60u: goto label_257f60;
        case 0x257f98u: goto label_257f98;
        case 0x257fb0u: goto label_257fb0;
        case 0x258018u: goto label_258018;
        case 0x258120u: goto label_258120;
        case 0x2582a0u: goto label_2582a0;
        case 0x2583a8u: goto label_2583a8;
        case 0x2584fcu: goto label_2584fc;
        case 0x258528u: goto label_258528;
        default: break;
    }

    ctx->pc = 0x257e10u;

    // 0x257e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e24: 0x8c880034  lw          $t0, 0x34($a0)
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x257e28: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257E28u;
    {
        const bool branch_taken_0x257e28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x257E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E28u;
            // 0x257e2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e28) {
            ctx->pc = 0x257E38u;
            goto label_257e38;
        }
    }
    ctx->pc = 0x257E30u;
    // 0x257e30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257E30u;
    {
        const bool branch_taken_0x257e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E30u;
            // 0x257e34: 0x8e030140  lw          $v1, 0x140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e30) {
            ctx->pc = 0x257E4Cu;
            goto label_257e4c;
        }
    }
    ctx->pc = 0x257E38u;
label_257e38:
    // 0x257e38: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x257e3c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257E3Cu;
    {
        const bool branch_taken_0x257e3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E3Cu;
            // 0x257e40: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e3c) {
            ctx->pc = 0x257E4Cu;
            goto label_257e4c;
        }
    }
    ctx->pc = 0x257E44u;
    // 0x257e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257e48: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x257e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_257e4c:
    // 0x257e4c: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x257e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x257e50: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x257e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x257e54: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x257e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x257e58: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x257e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257e5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257E5Cu;
    {
        const bool branch_taken_0x257e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257e5c) {
            ctx->pc = 0x257E70u;
            goto label_257e70;
        }
    }
    ctx->pc = 0x257E64u;
    // 0x257e64: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x257e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x257e68: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x257E68u;
    {
        const bool branch_taken_0x257e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E68u;
            // 0x257e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e68) {
            ctx->pc = 0x25854Cu;
            goto label_25854c;
        }
    }
    ctx->pc = 0x257E70u;
label_257e70:
    // 0x257e70: 0x1cc0005a  bgtz        $a2, . + 4 + (0x5A << 2)
    ctx->pc = 0x257E70u;
    {
        const bool branch_taken_0x257e70 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x257e70) {
            ctx->pc = 0x257FDCu;
            goto label_257fdc;
        }
    }
    ctx->pc = 0x257E78u;
    // 0x257e78: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x257e7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257E7Cu;
    {
        const bool branch_taken_0x257e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257e7c) {
            ctx->pc = 0x257E94u;
            goto label_257e94;
        }
    }
    ctx->pc = 0x257E84u;
    // 0x257e84: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x257e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257e88: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x257e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257e8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257E8Cu;
    {
        const bool branch_taken_0x257e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E8Cu;
            // 0x257e90: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e8c) {
            ctx->pc = 0x257EA0u;
            goto label_257ea0;
        }
    }
    ctx->pc = 0x257E94u;
label_257e94:
    // 0x257e94: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x257e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257e98: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x257e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257e9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x257e9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_257ea0:
    // 0x257ea0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x257ea4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257eac: 0x0  nop
    ctx->pc = 0x257eacu;
    // NOP
    // 0x257eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257eb4: 0x0  nop
    ctx->pc = 0x257eb4u;
    // NOP
    // 0x257eb8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x257EB8u;
    {
        const bool branch_taken_0x257eb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257EB8u;
            // 0x257ebc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257eb8) {
            ctx->pc = 0x257ED4u;
            goto label_257ed4;
        }
    }
    ctx->pc = 0x257EC0u;
    // 0x257ec0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x257ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x257ec4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257ecc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x257ECCu;
    {
        const bool branch_taken_0x257ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257ECCu;
            // 0x257ed0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ecc) {
            ctx->pc = 0x257F00u;
            goto label_257f00;
        }
    }
    ctx->pc = 0x257ED4u;
label_257ed4:
    // 0x257ed4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257edc: 0x0  nop
    ctx->pc = 0x257edcu;
    // NOP
    // 0x257ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257ee4: 0x0  nop
    ctx->pc = 0x257ee4u;
    // NOP
    // 0x257ee8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x257EE8u;
    {
        const bool branch_taken_0x257ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257EE8u;
            // 0x257eec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ee8) {
            ctx->pc = 0x257F00u;
            goto label_257f00;
        }
    }
    ctx->pc = 0x257EF0u;
    // 0x257ef0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257ef8: 0x0  nop
    ctx->pc = 0x257ef8u;
    // NOP
    // 0x257efc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x257efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257f00:
    // 0x257f00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x257f00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257f04: 0x0  nop
    ctx->pc = 0x257f04u;
    // NOP
    // 0x257f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257f0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257f0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257f10: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x257f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x257f14: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x257f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f18: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x257f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257f1c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x257f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257f24: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x257f24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x257f28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257f28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257f2c: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x257f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x257f30: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x257f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f34: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x257f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257f38: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x257f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257f40: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x257f40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x257f44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257f44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257f48: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x257f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x257f4c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x257f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257f50: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x257f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257f58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x257F58u;
    SET_GPR_U32(ctx, 31, 0x257F60u);
    ctx->pc = 0x257F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257F58u;
            // 0x257f5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F60u; }
        if (ctx->pc != 0x257F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F60u; }
        if (ctx->pc != 0x257F60u) { return; }
    }
    ctx->pc = 0x257F60u;
label_257f60:
    // 0x257f60: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x257f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x257f64: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x257f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x257f68: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x257f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257f70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f74: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x257f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x257f78: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x257f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f7c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x257f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x257f80: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x257f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f84: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x257f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x257f88: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x257f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x257f8c: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x257f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257f90: 0xc041c1e  jal         func_107078
    ctx->pc = 0x257F90u;
    SET_GPR_U32(ctx, 31, 0x257F98u);
    ctx->pc = 0x257F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257F90u;
            // 0x257f94: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F98u; }
        if (ctx->pc != 0x257F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F98u; }
        if (ctx->pc != 0x257F98u) { return; }
    }
    ctx->pc = 0x257F98u;
label_257f98:
    // 0x257f98: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x257f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x257f9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257fa0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257FA0u;
    {
        const bool branch_taken_0x257fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FA0u;
            // 0x257fa4: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fa0) {
            ctx->pc = 0x257FB8u;
            goto label_257fb8;
        }
    }
    ctx->pc = 0x257FA8u;
    // 0x257fa8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257FA8u;
    SET_GPR_U32(ctx, 31, 0x257FB0u);
    ctx->pc = 0x257FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257FA8u;
            // 0x257fac: 0x26050120  addiu       $a1, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FB0u; }
        if (ctx->pc != 0x257FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FB0u; }
        if (ctx->pc != 0x257FB0u) { return; }
    }
    ctx->pc = 0x257FB0u;
label_257fb0:
    // 0x257fb0: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x257FB0u;
    {
        const bool branch_taken_0x257fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FB0u;
            // 0x257fb4: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fb0) {
            ctx->pc = 0x258540u;
            goto label_258540;
        }
    }
    ctx->pc = 0x257FB8u;
label_257fb8:
    // 0x257fb8: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x257fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257fbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257fc0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x257fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x257fc4: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x257fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257fc8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x257fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x257fcc: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x257fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257fd0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x257fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x257fd4: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x257FD4u;
    {
        const bool branch_taken_0x257fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FD4u;
            // 0x257fd8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fd4) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x257FDCu;
label_257fdc:
    // 0x257fdc: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x257fe0: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x257FE0u;
    {
        const bool branch_taken_0x257fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257fe0) {
            ctx->pc = 0x258270u;
            goto label_258270;
        }
    }
    ctx->pc = 0x257FE8u;
    // 0x257fe8: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x257fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x257fec: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x257fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257ff0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x257FF0u;
    {
        const bool branch_taken_0x257ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FF0u;
            // 0x257ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ff0) {
            ctx->pc = 0x2580B8u;
            goto label_2580b8;
        }
    }
    ctx->pc = 0x257FF8u;
    // 0x257ff8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257FF8u;
    {
        const bool branch_taken_0x257ff8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FF8u;
            // 0x257ffc: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ff8) {
            ctx->pc = 0x25800Cu;
            goto label_25800c;
        }
    }
    ctx->pc = 0x258000u;
    // 0x258000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258004: 0x1502002c  bne         $t0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x258004u;
    {
        const bool branch_taken_0x258004 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x258004) {
            ctx->pc = 0x2580B8u;
            goto label_2580b8;
        }
    }
    ctx->pc = 0x25800Cu;
label_25800c:
    // 0x25800c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x25800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x258010: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258010u;
    SET_GPR_U32(ctx, 31, 0x258018u);
    ctx->pc = 0x258014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258010u;
            // 0x258014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258018u; }
        if (ctx->pc != 0x258018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258018u; }
        if (ctx->pc != 0x258018u) { return; }
    }
    ctx->pc = 0x258018u;
label_258018:
    // 0x258018: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x258018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25801c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x258020: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x258020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258024: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25802c: 0x0  nop
    ctx->pc = 0x25802cu;
    // NOP
    // 0x258030: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x258030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x258034: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258038: 0x0  nop
    ctx->pc = 0x258038u;
    // NOP
    // 0x25803c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25803Cu;
    {
        const bool branch_taken_0x25803c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25803Cu;
            // 0x258040: 0xe60100a0  swc1        $f1, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25803c) {
            ctx->pc = 0x258060u;
            goto label_258060;
        }
    }
    ctx->pc = 0x258044u;
    // 0x258044: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x258048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25804c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25804cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258050: 0x0  nop
    ctx->pc = 0x258050u;
    // NOP
    // 0x258054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x258054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258058: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258058u;
    {
        const bool branch_taken_0x258058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258058u;
            // 0x25805c: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258058) {
            ctx->pc = 0x258094u;
            goto label_258094;
        }
    }
    ctx->pc = 0x258060u;
label_258060:
    // 0x258060: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x258060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x258064: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25806c: 0x0  nop
    ctx->pc = 0x25806cu;
    // NOP
    // 0x258070: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258074: 0x0  nop
    ctx->pc = 0x258074u;
    // NOP
    // 0x258078: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258078u;
    {
        const bool branch_taken_0x258078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258078u;
            // 0x25807c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258078) {
            ctx->pc = 0x258094u;
            goto label_258094;
        }
    }
    ctx->pc = 0x258080u;
    // 0x258080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258088: 0x0  nop
    ctx->pc = 0x258088u;
    // NOP
    // 0x25808c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25808cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258090: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x258090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_258094:
    // 0x258094: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x258094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25809c: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x25809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2580a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2580a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2580a4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2580a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2580a8: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x2580a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2580ac: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x2580acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2580b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2580b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2580b4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2580b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_2580b8:
    // 0x2580b8: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x2580b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2580bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2580c0: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2580C0u;
    {
        const bool branch_taken_0x2580c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2580c0) {
            ctx->pc = 0x2580F4u;
            goto label_2580f4;
        }
    }
    ctx->pc = 0x2580C8u;
    // 0x2580c8: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2580cc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2580ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2580d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2580D0u;
    {
        const bool branch_taken_0x2580d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2580D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2580D0u;
            // 0x2580d4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580d0) {
            ctx->pc = 0x2580E0u;
            goto label_2580e0;
        }
    }
    ctx->pc = 0x2580D8u;
    // 0x2580d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2580d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2580dc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2580dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2580e0:
    // 0x2580e0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2580e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2580e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2580e8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2580e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2580ec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2580ECu;
    {
        const bool branch_taken_0x2580ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2580ECu;
            // 0x2580f0: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580ec) {
            ctx->pc = 0x258114u;
            goto label_258114;
        }
    }
    ctx->pc = 0x2580F4u;
label_2580f4:
    // 0x2580f4: 0x14c00034  bnez        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x2581C8u;
            goto label_2581c8;
        }
    }
    ctx->pc = 0x2580FCu;
    // 0x2580fc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x258100: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x258100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x258104: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258108: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x258108u;
    {
        const bool branch_taken_0x258108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258108) {
            ctx->pc = 0x2581C8u;
            goto label_2581c8;
        }
    }
    ctx->pc = 0x258110u;
    // 0x258110: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x258110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_258114:
    // 0x258114: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x258118: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258118u;
    SET_GPR_U32(ctx, 31, 0x258120u);
    ctx->pc = 0x25811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258118u;
            // 0x25811c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258120u; }
        if (ctx->pc != 0x258120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258120u; }
        if (ctx->pc != 0x258120u) { return; }
    }
    ctx->pc = 0x258120u;
label_258120:
    // 0x258120: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x258120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258124: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x258124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x258128: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x258128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25812c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258134: 0x0  nop
    ctx->pc = 0x258134u;
    // NOP
    // 0x258138: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x258138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25813c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25813cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258140: 0x0  nop
    ctx->pc = 0x258140u;
    // NOP
    // 0x258144: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x258144u;
    {
        const bool branch_taken_0x258144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258144u;
            // 0x258148: 0xe60100a0  swc1        $f1, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258144) {
            ctx->pc = 0x258168u;
            goto label_258168;
        }
    }
    ctx->pc = 0x25814Cu;
    // 0x25814c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x258150: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258158: 0x0  nop
    ctx->pc = 0x258158u;
    // NOP
    // 0x25815c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25815cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258160: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258160u;
    {
        const bool branch_taken_0x258160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258160u;
            // 0x258164: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258160) {
            ctx->pc = 0x25819Cu;
            goto label_25819c;
        }
    }
    ctx->pc = 0x258168u;
label_258168:
    // 0x258168: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x25816c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258174: 0x0  nop
    ctx->pc = 0x258174u;
    // NOP
    // 0x258178: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25817c: 0x0  nop
    ctx->pc = 0x25817cu;
    // NOP
    // 0x258180: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258180u;
    {
        const bool branch_taken_0x258180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258180u;
            // 0x258184: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258180) {
            ctx->pc = 0x25819Cu;
            goto label_25819c;
        }
    }
    ctx->pc = 0x258188u;
    // 0x258188: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25818c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25818cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258190: 0x0  nop
    ctx->pc = 0x258190u;
    // NOP
    // 0x258194: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258198: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x258198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_25819c:
    // 0x25819c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x25819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2581a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2581a4: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x2581a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2581a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2581a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2581ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2581acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2581b0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2581b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2581b4: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x2581b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2581b8: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x2581b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2581bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2581bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2581c0: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2581c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2581c4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2581c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_2581c8:
    // 0x2581c8: 0x14a000dc  bnez        $a1, . + 4 + (0xDC << 2)
    ctx->pc = 0x2581C8u;
    {
        const bool branch_taken_0x2581c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2581c8) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x2581D0u;
    // 0x2581d0: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x2581d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2581d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2581d8: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2581d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2581dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2581dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2581e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2581e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2581e4: 0x0  nop
    ctx->pc = 0x2581e4u;
    // NOP
    // 0x2581e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2581e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2581ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2581ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2581f0: 0x0  nop
    ctx->pc = 0x2581f0u;
    // NOP
    // 0x2581f4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2581F4u;
    {
        const bool branch_taken_0x2581f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2581F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581F4u;
            // 0x2581f8: 0xe60100a0  swc1        $f1, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581f4) {
            ctx->pc = 0x258218u;
            goto label_258218;
        }
    }
    ctx->pc = 0x2581FCu;
    // 0x2581fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x258200: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258208: 0x0  nop
    ctx->pc = 0x258208u;
    // NOP
    // 0x25820c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25820cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258210: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258210u;
    {
        const bool branch_taken_0x258210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258210u;
            // 0x258214: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258210) {
            ctx->pc = 0x25824Cu;
            goto label_25824c;
        }
    }
    ctx->pc = 0x258218u;
label_258218:
    // 0x258218: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x25821c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258224: 0x0  nop
    ctx->pc = 0x258224u;
    // NOP
    // 0x258228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25822c: 0x0  nop
    ctx->pc = 0x25822cu;
    // NOP
    // 0x258230: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258230u;
    {
        const bool branch_taken_0x258230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258230u;
            // 0x258234: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258230) {
            ctx->pc = 0x25824Cu;
            goto label_25824c;
        }
    }
    ctx->pc = 0x258238u;
    // 0x258238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25823c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25823cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258240: 0x0  nop
    ctx->pc = 0x258240u;
    // NOP
    // 0x258244: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258248: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x258248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_25824c:
    // 0x25824c: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x25824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258250: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x258250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258258: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x258258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x25825c: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x25825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258260: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x258260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258268: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x258268u;
    {
        const bool branch_taken_0x258268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258268u;
            // 0x25826c: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258268) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x258270u;
label_258270:
    // 0x258270: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x258270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x258274: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x258274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258278: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x258278u;
    {
        const bool branch_taken_0x258278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258278u;
            // 0x25827c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258278) {
            ctx->pc = 0x258340u;
            goto label_258340;
        }
    }
    ctx->pc = 0x258280u;
    // 0x258280: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258280u;
    {
        const bool branch_taken_0x258280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x258284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258280u;
            // 0x258284: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258280) {
            ctx->pc = 0x258294u;
            goto label_258294;
        }
    }
    ctx->pc = 0x258288u;
    // 0x258288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25828c: 0x1502002c  bne         $t0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25828Cu;
    {
        const bool branch_taken_0x25828c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25828c) {
            ctx->pc = 0x258340u;
            goto label_258340;
        }
    }
    ctx->pc = 0x258294u;
label_258294:
    // 0x258294: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x258294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x258298: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258298u;
    SET_GPR_U32(ctx, 31, 0x2582A0u);
    ctx->pc = 0x25829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258298u;
            // 0x25829c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2582A0u; }
        if (ctx->pc != 0x2582A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2582A0u; }
        if (ctx->pc != 0x2582A0u) { return; }
    }
    ctx->pc = 0x2582A0u;
label_2582a0:
    // 0x2582a0: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x2582a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2582a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2582a8: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2582a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2582ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2582acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2582b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2582b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2582b4: 0x0  nop
    ctx->pc = 0x2582b4u;
    // NOP
    // 0x2582b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2582b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2582bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2582bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2582c0: 0x0  nop
    ctx->pc = 0x2582c0u;
    // NOP
    // 0x2582c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2582C4u;
    {
        const bool branch_taken_0x2582c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2582C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582C4u;
            // 0x2582c8: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582c4) {
            ctx->pc = 0x2582E8u;
            goto label_2582e8;
        }
    }
    ctx->pc = 0x2582CCu;
    // 0x2582cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2582ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2582d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2582d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2582d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2582d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2582d8: 0x0  nop
    ctx->pc = 0x2582d8u;
    // NOP
    // 0x2582dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2582dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2582e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2582E0u;
    {
        const bool branch_taken_0x2582e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582E0u;
            // 0x2582e4: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582e0) {
            ctx->pc = 0x25831Cu;
            goto label_25831c;
        }
    }
    ctx->pc = 0x2582E8u;
label_2582e8:
    // 0x2582e8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2582e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x2582ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2582ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2582f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2582f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2582f4: 0x0  nop
    ctx->pc = 0x2582f4u;
    // NOP
    // 0x2582f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2582f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2582fc: 0x0  nop
    ctx->pc = 0x2582fcu;
    // NOP
    // 0x258300: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258300u;
    {
        const bool branch_taken_0x258300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258300u;
            // 0x258304: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258300) {
            ctx->pc = 0x25831Cu;
            goto label_25831c;
        }
    }
    ctx->pc = 0x258308u;
    // 0x258308: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25830c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25830cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258310: 0x0  nop
    ctx->pc = 0x258310u;
    // NOP
    // 0x258314: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258318: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x258318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_25831c:
    // 0x25831c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x25831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258324: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x258324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25832c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x25832cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x258330: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x258330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258334: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x258334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25833c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x25833cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_258340:
    // 0x258340: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x258340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x258344: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258348: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258348u;
    {
        const bool branch_taken_0x258348 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x258348) {
            ctx->pc = 0x25837Cu;
            goto label_25837c;
        }
    }
    ctx->pc = 0x258350u;
    // 0x258350: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x258354: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x258358: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258358u;
    {
        const bool branch_taken_0x258358 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258358u;
            // 0x25835c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258358) {
            ctx->pc = 0x258368u;
            goto label_258368;
        }
    }
    ctx->pc = 0x258360u;
    // 0x258360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258364: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_258368:
    // 0x258368: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x25836c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258370: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x258370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258374: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x258374u;
    {
        const bool branch_taken_0x258374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258374u;
            // 0x258378: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258374) {
            ctx->pc = 0x25839Cu;
            goto label_25839c;
        }
    }
    ctx->pc = 0x25837Cu;
label_25837c:
    // 0x25837c: 0x14c00034  bnez        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x25837Cu;
    {
        const bool branch_taken_0x25837c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25837c) {
            ctx->pc = 0x258450u;
            goto label_258450;
        }
    }
    ctx->pc = 0x258384u;
    // 0x258384: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x258384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x258388: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x258388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x25838c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25838cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258390: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x258390u;
    {
        const bool branch_taken_0x258390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258390) {
            ctx->pc = 0x258450u;
            goto label_258450;
        }
    }
    ctx->pc = 0x258398u;
    // 0x258398: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_25839c:
    // 0x25839c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2583a0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2583A0u;
    SET_GPR_U32(ctx, 31, 0x2583A8u);
    ctx->pc = 0x2583A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2583A0u;
            // 0x2583a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2583A8u; }
        if (ctx->pc != 0x2583A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2583A8u; }
        if (ctx->pc != 0x2583A8u) { return; }
    }
    ctx->pc = 0x2583A8u;
label_2583a8:
    // 0x2583a8: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x2583a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2583ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2583b0: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2583b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2583b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2583b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2583b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2583b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2583bc: 0x0  nop
    ctx->pc = 0x2583bcu;
    // NOP
    // 0x2583c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2583c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2583c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2583c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2583c8: 0x0  nop
    ctx->pc = 0x2583c8u;
    // NOP
    // 0x2583cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2583CCu;
    {
        const bool branch_taken_0x2583cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2583D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2583CCu;
            // 0x2583d0: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583cc) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x2583D4u;
    // 0x2583d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2583d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2583d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2583dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2583dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2583e0: 0x0  nop
    ctx->pc = 0x2583e0u;
    // NOP
    // 0x2583e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2583e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2583e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2583E8u;
    {
        const bool branch_taken_0x2583e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2583E8u;
            // 0x2583ec: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583e8) {
            ctx->pc = 0x258424u;
            goto label_258424;
        }
    }
    ctx->pc = 0x2583F0u;
label_2583f0:
    // 0x2583f0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x2583f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2583f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2583f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2583f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2583fc: 0x0  nop
    ctx->pc = 0x2583fcu;
    // NOP
    // 0x258400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258404: 0x0  nop
    ctx->pc = 0x258404u;
    // NOP
    // 0x258408: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258408u;
    {
        const bool branch_taken_0x258408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258408u;
            // 0x25840c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258408) {
            ctx->pc = 0x258424u;
            goto label_258424;
        }
    }
    ctx->pc = 0x258410u;
    // 0x258410: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258418: 0x0  nop
    ctx->pc = 0x258418u;
    // NOP
    // 0x25841c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25841cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258420: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x258420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_258424:
    // 0x258424: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x258424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x258428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25842c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258438: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x258438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x25843c: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x25843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258440: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x258440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x258444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258448: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x258448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x25844c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x25844cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_258450:
    // 0x258450: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x258450u;
    {
        const bool branch_taken_0x258450 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x258450) {
            ctx->pc = 0x2584F4u;
            goto label_2584f4;
        }
    }
    ctx->pc = 0x258458u;
    // 0x258458: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x258458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25845c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x258460: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x258460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258464: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25846c: 0x0  nop
    ctx->pc = 0x25846cu;
    // NOP
    // 0x258470: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x258470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x258474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258478: 0x0  nop
    ctx->pc = 0x258478u;
    // NOP
    // 0x25847c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25847Cu;
    {
        const bool branch_taken_0x25847c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25847Cu;
            // 0x258480: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25847c) {
            ctx->pc = 0x2584A0u;
            goto label_2584a0;
        }
    }
    ctx->pc = 0x258484u;
    // 0x258484: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x258484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x258488: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25848c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25848cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258490: 0x0  nop
    ctx->pc = 0x258490u;
    // NOP
    // 0x258494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x258494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258498: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258498u;
    {
        const bool branch_taken_0x258498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258498u;
            // 0x25849c: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258498) {
            ctx->pc = 0x2584D4u;
            goto label_2584d4;
        }
    }
    ctx->pc = 0x2584A0u;
label_2584a0:
    // 0x2584a0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x2584a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2584a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2584a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2584a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2584ac: 0x0  nop
    ctx->pc = 0x2584acu;
    // NOP
    // 0x2584b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2584b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2584b4: 0x0  nop
    ctx->pc = 0x2584b4u;
    // NOP
    // 0x2584b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2584B8u;
    {
        const bool branch_taken_0x2584b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2584BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584B8u;
            // 0x2584bc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584b8) {
            ctx->pc = 0x2584D4u;
            goto label_2584d4;
        }
    }
    ctx->pc = 0x2584C0u;
    // 0x2584c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2584c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2584c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2584c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2584c8: 0x0  nop
    ctx->pc = 0x2584c8u;
    // NOP
    // 0x2584cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2584ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2584d0: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2584d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_2584d4:
    // 0x2584d4: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x2584d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2584d8: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x2584d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2584dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2584dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2584e0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2584e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2584e4: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x2584e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2584e8: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2584e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2584ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2584ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2584f0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2584f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_2584f4:
    // 0x2584f4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2584F4u;
    SET_GPR_U32(ctx, 31, 0x2584FCu);
    ctx->pc = 0x2584F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2584F4u;
            // 0x2584f8: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2584FCu; }
        if (ctx->pc != 0x2584FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2584FCu; }
        if (ctx->pc != 0x2584FCu) { return; }
    }
    ctx->pc = 0x2584FCu;
label_2584fc:
    // 0x2584fc: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x2584fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258500: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x258500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258504: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x258504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x258508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25850c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x25850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x258510: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x258510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258514: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x258514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258518: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25851c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x25851cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x258520: 0xc047964  jal         func_11E590
    ctx->pc = 0x258520u;
    SET_GPR_U32(ctx, 31, 0x258528u);
    ctx->pc = 0x258524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258520u;
            // 0x258524: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258528u; }
        if (ctx->pc != 0x258528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258528u; }
        if (ctx->pc != 0x258528u) { return; }
    }
    ctx->pc = 0x258528u;
label_258528:
    // 0x258528: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x258528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25852c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x25852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258530: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x258530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x258534: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258538: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x258538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_25853c:
    // 0x25853c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x25853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_258540:
    // 0x258540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258548: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x258548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_25854c:
    // 0x25854c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258558: 0x3e00008  jr          $ra
    ctx->pc = 0x258558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258558u;
            // 0x25855c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258560u;
}
