#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAHDSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2586a0 - 0x2588ac
void scsAHDSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2586a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAHDSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2586a0");
#endif

    switch (ctx->pc) {
        case 0x2586e4u: goto label_2586e4;
        case 0x2586fcu: goto label_2586fc;
        case 0x25884cu: goto label_25884c;
        case 0x258878u: goto label_258878;
        default: break;
    }

    ctx->pc = 0x2586a0u;

    // 0x2586a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2586a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2586a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2586a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2586a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2586a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2586ac: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2586acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2586b0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2586B0u;
    {
        const bool branch_taken_0x2586b0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2586B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586B0u;
            // 0x2586b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586b0) {
            ctx->pc = 0x2586C8u;
            goto label_2586c8;
        }
    }
    ctx->pc = 0x2586B8u;
    // 0x2586b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2586b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2586bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2586bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2586c0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2586C0u;
    {
        const bool branch_taken_0x2586c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586C0u;
            // 0x2586c4: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586c0) {
            ctx->pc = 0x25889Cu;
            goto label_25889c;
        }
    }
    ctx->pc = 0x2586C8u;
label_2586c8:
    // 0x2586c8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2586c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2586cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2586ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2586d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2586D0u;
    {
        const bool branch_taken_0x2586d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2586d0) {
            ctx->pc = 0x2586ECu;
            goto label_2586ec;
        }
    }
    ctx->pc = 0x2586D8u;
    // 0x2586d8: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x2586d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2586dc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2586DCu;
    SET_GPR_U32(ctx, 31, 0x2586E4u);
    ctx->pc = 0x2586E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2586DCu;
            // 0x2586e0: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586E4u; }
        if (ctx->pc != 0x2586E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586E4u; }
        if (ctx->pc != 0x2586E4u) { return; }
    }
    ctx->pc = 0x2586E4u;
label_2586e4:
    // 0x2586e4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2586E4u;
    {
        const bool branch_taken_0x2586e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586E4u;
            // 0x2586e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586e4) {
            ctx->pc = 0x25889Cu;
            goto label_25889c;
        }
    }
    ctx->pc = 0x2586ECu;
label_2586ec:
    // 0x2586ec: 0xc48c0030  lwc1        $f12, 0x30($a0)
    ctx->pc = 0x2586ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2586f0: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2586f4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2586F4u;
    SET_GPR_U32(ctx, 31, 0x2586FCu);
    ctx->pc = 0x2586F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2586F4u;
            // 0x2586f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586FCu; }
        if (ctx->pc != 0x2586FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586FCu; }
        if (ctx->pc != 0x2586FCu) { return; }
    }
    ctx->pc = 0x2586FCu;
label_2586fc:
    // 0x2586fc: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2586fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x258700: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x258700u;
    {
        const bool branch_taken_0x258700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258700) {
            ctx->pc = 0x2587A8u;
            goto label_2587a8;
        }
    }
    ctx->pc = 0x258708u;
    // 0x258708: 0xc6020170  lwc1        $f2, 0x170($s0)
    ctx->pc = 0x258708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25870c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x258710: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x258710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258714: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25871c: 0x0  nop
    ctx->pc = 0x25871cu;
    // NOP
    // 0x258720: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x258720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x258724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258728: 0x0  nop
    ctx->pc = 0x258728u;
    // NOP
    // 0x25872c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25872Cu;
    {
        const bool branch_taken_0x25872c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25872Cu;
            // 0x258730: 0xe60100a0  swc1        $f1, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25872c) {
            ctx->pc = 0x258750u;
            goto label_258750;
        }
    }
    ctx->pc = 0x258734u;
    // 0x258734: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x258734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x258738: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25873c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258740: 0x0  nop
    ctx->pc = 0x258740u;
    // NOP
    // 0x258744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x258744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x258748: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258748u;
    {
        const bool branch_taken_0x258748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258748u;
            // 0x25874c: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258748) {
            ctx->pc = 0x258784u;
            goto label_258784;
        }
    }
    ctx->pc = 0x258750u;
label_258750:
    // 0x258750: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x258750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x258754: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25875c: 0x0  nop
    ctx->pc = 0x25875cu;
    // NOP
    // 0x258760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258764: 0x0  nop
    ctx->pc = 0x258764u;
    // NOP
    // 0x258768: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258768u;
    {
        const bool branch_taken_0x258768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258768u;
            // 0x25876c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258768) {
            ctx->pc = 0x258784u;
            goto label_258784;
        }
    }
    ctx->pc = 0x258770u;
    // 0x258770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258778: 0x0  nop
    ctx->pc = 0x258778u;
    // NOP
    // 0x25877c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25877cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258780: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x258780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_258784:
    // 0x258784: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x258784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258788: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x258788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25878c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25878cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258790: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x258790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x258794: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x258794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258798: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x258798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25879c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25879cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2587a0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2587A0u;
    {
        const bool branch_taken_0x2587a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587A0u;
            // 0x2587a4: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587a0) {
            ctx->pc = 0x25888Cu;
            goto label_25888c;
        }
    }
    ctx->pc = 0x2587A8u;
label_2587a8:
    // 0x2587a8: 0xc6020170  lwc1        $f2, 0x170($s0)
    ctx->pc = 0x2587a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2587ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2587acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2587b0: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2587b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2587b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2587b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2587b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2587b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2587bc: 0x0  nop
    ctx->pc = 0x2587bcu;
    // NOP
    // 0x2587c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2587c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2587c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2587c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2587c8: 0x0  nop
    ctx->pc = 0x2587c8u;
    // NOP
    // 0x2587cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2587CCu;
    {
        const bool branch_taken_0x2587cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2587D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587CCu;
            // 0x2587d0: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587cc) {
            ctx->pc = 0x2587F0u;
            goto label_2587f0;
        }
    }
    ctx->pc = 0x2587D4u;
    // 0x2587d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2587d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2587d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2587d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2587dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2587dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2587e0: 0x0  nop
    ctx->pc = 0x2587e0u;
    // NOP
    // 0x2587e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2587e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2587e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2587E8u;
    {
        const bool branch_taken_0x2587e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587E8u;
            // 0x2587ec: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587e8) {
            ctx->pc = 0x258824u;
            goto label_258824;
        }
    }
    ctx->pc = 0x2587F0u;
label_2587f0:
    // 0x2587f0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2587f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x2587f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2587f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2587f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2587f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2587fc: 0x0  nop
    ctx->pc = 0x2587fcu;
    // NOP
    // 0x258800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258804: 0x0  nop
    ctx->pc = 0x258804u;
    // NOP
    // 0x258808: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258808u;
    {
        const bool branch_taken_0x258808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258808u;
            // 0x25880c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258808) {
            ctx->pc = 0x258824u;
            goto label_258824;
        }
    }
    ctx->pc = 0x258810u;
    // 0x258810: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x258810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x258814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258818: 0x0  nop
    ctx->pc = 0x258818u;
    // NOP
    // 0x25881c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25881cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258820: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x258820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_258824:
    // 0x258824: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x258824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258828: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x258828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25882c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25882cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258830: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x258830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x258834: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x258834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258838: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x258838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25883c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25883cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x258840: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x258840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x258844: 0xc047a42  jal         func_11E908
    ctx->pc = 0x258844u;
    SET_GPR_U32(ctx, 31, 0x25884Cu);
    ctx->pc = 0x258848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258844u;
            // 0x258848: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25884Cu; }
        if (ctx->pc != 0x25884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25884Cu; }
        if (ctx->pc != 0x25884Cu) { return; }
    }
    ctx->pc = 0x25884Cu;
label_25884c:
    // 0x25884c: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x25884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258850: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x258850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258854: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x258854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x258858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25885c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x25885cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x258860: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x258860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258864: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x258864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25886c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x25886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x258870: 0xc047964  jal         func_11E590
    ctx->pc = 0x258870u;
    SET_GPR_U32(ctx, 31, 0x258878u);
    ctx->pc = 0x258874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258870u;
            // 0x258874: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258878u; }
        if (ctx->pc != 0x258878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258878u; }
        if (ctx->pc != 0x258878u) { return; }
    }
    ctx->pc = 0x258878u;
label_258878:
    // 0x258878: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x258878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25887c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x25887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258880: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x258880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x258884: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258888: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x258888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_25888c:
    // 0x25888c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x25888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x258890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258898: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x258898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_25889c:
    // 0x25889c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2588a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2588a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2588A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2588A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2588A4u;
            // 0x2588a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2588ACu;
}
