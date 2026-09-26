#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MyTextureMake__6ClsMesFv
// Address: 0x154150 - 0x154380
void MyTextureMake__6ClsMesFv_0x154150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MyTextureMake__6ClsMesFv_0x154150");
#endif

    switch (ctx->pc) {
        case 0x15418cu: goto label_15418c;
        case 0x1541b0u: goto label_1541b0;
        case 0x154210u: goto label_154210;
        case 0x154260u: goto label_154260;
        case 0x154268u: goto label_154268;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542f8u: goto label_1542f8;
        default: break;
    }

    ctx->pc = 0x154150u;

    // 0x154150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154154: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15415c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15415cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154164: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x154164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15416c: 0x0  nop
    ctx->pc = 0x15416cu;
    // NOP
    // 0x154170: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
    ctx->pc = 0x154170u;
    {
        const bool branch_taken_0x154170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154170u;
            // 0x154174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154170) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x154178u;
    // 0x154178: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x154178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x15417c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15417Cu;
    {
        const bool branch_taken_0x15417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15417c) {
            ctx->pc = 0x1541B8u;
            goto label_1541b8;
        }
    }
    ctx->pc = 0x154184u;
    // 0x154184: 0xc054808  jal         func_152020
    ctx->pc = 0x154184u;
    SET_GPR_U32(ctx, 31, 0x15418Cu);
    ctx->pc = 0x152020u;
    if (runtime->hasFunction(0x152020u)) {
        auto targetFn = runtime->lookupFunction(0x152020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15418Cu; }
        if (ctx->pc != 0x15418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPageAutoFlg__6ClsMesFv_0x152020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15418Cu; }
        if (ctx->pc != 0x15418Cu) { return; }
    }
    ctx->pc = 0x15418Cu;
label_15418c:
    // 0x15418c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x15418Cu;
    {
        const bool branch_taken_0x15418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15418c) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x154194u;
    // 0x154194: 0x8e0417dc  lw          $a0, 0x17DC($s0)
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6108)));
    // 0x154198: 0x8e0317e0  lw          $v1, 0x17E0($s0)
    ctx->pc = 0x154198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6112)));
    // 0x15419c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15419cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1541a0: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1541A0u;
    {
        const bool branch_taken_0x1541a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1541a0) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x1541A8u;
    // 0x1541a8: 0xc054fb0  jal         func_153EC0
    ctx->pc = 0x1541A8u;
    SET_GPR_U32(ctx, 31, 0x1541B0u);
    ctx->pc = 0x1541ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1541A8u;
            // 0x1541ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541B0u; }
        if (ctx->pc != 0x1541B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541B0u; }
        if (ctx->pc != 0x1541B0u) { return; }
    }
    ctx->pc = 0x1541B0u;
label_1541b0:
    // 0x1541b0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1541B0u;
    {
        const bool branch_taken_0x1541b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541B0u;
            // 0x1541b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541b0) {
            ctx->pc = 0x154374u;
            goto label_154374;
        }
    }
    ctx->pc = 0x1541B8u;
label_1541b8:
    // 0x1541b8: 0x8e0217d8  lw          $v0, 0x17D8($s0)
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6104)));
    // 0x1541bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1541BCu;
    {
        const bool branch_taken_0x1541bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1541bc) {
            ctx->pc = 0x1541D0u;
            goto label_1541d0;
        }
    }
    ctx->pc = 0x1541C4u;
    // 0x1541c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1541c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1541C8u;
    {
        const bool branch_taken_0x1541c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541C8u;
            // 0x1541cc: 0xae0217d8  sw          $v0, 0x17D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541c8) {
            ctx->pc = 0x154204u;
            goto label_154204;
        }
    }
    ctx->pc = 0x1541D0u;
label_1541d0:
    // 0x1541d0: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1541d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1541D4u;
    {
        const bool branch_taken_0x1541d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1541D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541D4u;
            // 0x1541d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541d4) {
            ctx->pc = 0x154208u;
            goto label_154208;
        }
    }
    ctx->pc = 0x1541DCu;
    // 0x1541dc: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x1541dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1541e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1541e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1541e4: 0x0  nop
    ctx->pc = 0x1541e4u;
    // NOP
    // 0x1541e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1541e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541ec: 0x0  nop
    ctx->pc = 0x1541ecu;
    // NOP
    // 0x1541f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1541F0u;
    {
        const bool branch_taken_0x1541f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1541f0) {
            ctx->pc = 0x154204u;
            goto label_154204;
        }
    }
    ctx->pc = 0x1541F8u;
    // 0x1541f8: 0xc60001d0  lwc1        $f0, 0x1D0($s0)
    ctx->pc = 0x1541f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1541fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1541fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x154200: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x154200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
label_154204:
    // 0x154204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154208:
    // 0x154208: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x154208u;
    SET_GPR_U32(ctx, 31, 0x154210u);
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154210u; }
        if (ctx->pc != 0x154210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154210u; }
        if (ctx->pc != 0x154210u) { return; }
    }
    ctx->pc = 0x154210u;
label_154210:
    // 0x154210: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154214: 0x0  nop
    ctx->pc = 0x154214u;
    // NOP
    // 0x154218: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x154218u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15421c: 0x0  nop
    ctx->pc = 0x15421cu;
    // NOP
    // 0x154220: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x154220u;
    {
        const bool branch_taken_0x154220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154220) {
            ctx->pc = 0x15423Cu;
            goto label_15423c;
        }
    }
    ctx->pc = 0x154228u;
    // 0x154228: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x15422c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x15422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x154230: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x154230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x154234: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x154234u;
    {
        const bool branch_taken_0x154234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154234) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x15423Cu;
label_15423c:
    // 0x15423c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x15423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154240: 0xc60101d0  lwc1        $f1, 0x1D0($s0)
    ctx->pc = 0x154240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x154244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x154248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x154248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15424c: 0x0  nop
    ctx->pc = 0x15424cu;
    // NOP
    // 0x154250: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x154250u;
    {
        const bool branch_taken_0x154250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154250) {
            ctx->pc = 0x154324u;
            goto label_154324;
        }
    }
    ctx->pc = 0x154258u;
    // 0x154258: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x154258u;
    {
        const bool branch_taken_0x154258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154258u;
            // 0x15425c: 0xe60001d0  swc1        $f0, 0x1D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154258) {
            ctx->pc = 0x154324u;
            goto label_154324;
        }
    }
    ctx->pc = 0x154260u;
label_154260:
    // 0x154260: 0xc054fbc  jal         func_153EF0
    ctx->pc = 0x154260u;
    SET_GPR_U32(ctx, 31, 0x154268u);
    ctx->pc = 0x154264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154260u;
            // 0x154264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153EF0u;
    if (runtime->hasFunction(0x153EF0u)) {
        auto targetFn = runtime->lookupFunction(0x153EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154268u; }
        if (ctx->pc != 0x154268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MyTextureMake_sub__6ClsMesFv_0x153ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154268u; }
        if (ctx->pc != 0x154268u) { return; }
    }
    ctx->pc = 0x154268u;
label_154268:
    // 0x154268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15426c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15426Cu;
    {
        const bool branch_taken_0x15426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15426c) {
            ctx->pc = 0x154280u;
            goto label_154280;
        }
    }
    ctx->pc = 0x154274u;
    // 0x154274: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154278: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x154278u;
    {
        const bool branch_taken_0x154278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154278) {
            ctx->pc = 0x1542BCu;
            goto label_1542bc;
        }
    }
    ctx->pc = 0x154280u;
label_154280:
    // 0x154280: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x154280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154288: 0x0  nop
    ctx->pc = 0x154288u;
    // NOP
    // 0x15428c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15428cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154290: 0x0  nop
    ctx->pc = 0x154290u;
    // NOP
    // 0x154294: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x154294u;
    {
        const bool branch_taken_0x154294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154294) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x15429Cu;
    // 0x15429c: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x15429Cu;
    SET_GPR_U32(ctx, 31, 0x1542A4u);
    ctx->pc = 0x1542A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15429Cu;
            // 0x1542a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542A4u; }
        if (ctx->pc != 0x1542A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542A4u; }
        if (ctx->pc != 0x1542A4u) { return; }
    }
    ctx->pc = 0x1542A4u;
label_1542a4:
    // 0x1542a4: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x1542a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x1542a8: 0xc60001d4  lwc1        $f0, 0x1D4($s0)
    ctx->pc = 0x1542a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1542ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1542acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1542b0: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x1542b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x1542b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1542B4u;
    {
        const bool branch_taken_0x1542b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1542b4) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x1542BCu;
label_1542bc:
    // 0x1542bc: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1542c0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1542c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1542c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1542c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1542c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1542C8u;
    {
        const bool branch_taken_0x1542c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1542CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542C8u;
            // 0x1542cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542c8) {
            ctx->pc = 0x1542F0u;
            goto label_1542f0;
        }
    }
    ctx->pc = 0x1542D0u;
    // 0x1542d0: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1542D0u;
    SET_GPR_U32(ctx, 31, 0x1542D8u);
    ctx->pc = 0x1542D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542D0u;
            // 0x1542d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D8u; }
        if (ctx->pc != 0x1542D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D8u; }
        if (ctx->pc != 0x1542D8u) { return; }
    }
    ctx->pc = 0x1542D8u;
label_1542d8:
    // 0x1542d8: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x1542d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x1542dc: 0xc60001d4  lwc1        $f0, 0x1D4($s0)
    ctx->pc = 0x1542dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1542e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1542e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1542e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1542E4u;
    {
        const bool branch_taken_0x1542e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542E4u;
            // 0x1542e8: 0xe60001d0  swc1        $f0, 0x1D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542e4) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x1542ECu;
    // 0x1542ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1542ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1542f0:
    // 0x1542f0: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1542F0u;
    SET_GPR_U32(ctx, 31, 0x1542F8u);
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542F8u; }
        if (ctx->pc != 0x1542F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542F8u; }
        if (ctx->pc != 0x1542F8u) { return; }
    }
    ctx->pc = 0x1542F8u;
label_1542f8:
    // 0x1542f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1542f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1542fc: 0x0  nop
    ctx->pc = 0x1542fcu;
    // NOP
    // 0x154300: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x154300u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154304: 0x0  nop
    ctx->pc = 0x154304u;
    // NOP
    // 0x154308: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x154308u;
    {
        const bool branch_taken_0x154308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154308) {
            ctx->pc = 0x154324u;
            goto label_154324;
        }
    }
    ctx->pc = 0x154310u;
    // 0x154310: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x154310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x154314: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x154314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x154318: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x154318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15431c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15431Cu;
    {
        const bool branch_taken_0x15431c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15431c) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x154324u;
label_154324:
    // 0x154324: 0x0  nop
    ctx->pc = 0x154324u;
    // NOP
    // 0x154328: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x154328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15432c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15432cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154330: 0x0  nop
    ctx->pc = 0x154330u;
    // NOP
    // 0x154334: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x154334u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154338: 0x0  nop
    ctx->pc = 0x154338u;
    // NOP
    // 0x15433c: 0x4501ffc8  bc1t        . + 4 + (-0x38 << 2)
    ctx->pc = 0x15433Cu;
    {
        const bool branch_taken_0x15433c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15433c) {
            ctx->pc = 0x154260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154260;
        }
    }
    ctx->pc = 0x154344u;
    // 0x154344: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x154344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154348: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15434c: 0xc60201d0  lwc1        $f2, 0x1D0($s0)
    ctx->pc = 0x15434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154354: 0x0  nop
    ctx->pc = 0x154354u;
    // NOP
    // 0x154358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x154358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15435c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x15435cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x154360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x154360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154364: 0x0  nop
    ctx->pc = 0x154364u;
    // NOP
    // 0x154368: 0x4500ffbd  bc1f        . + 4 + (-0x43 << 2)
    ctx->pc = 0x154368u;
    {
        const bool branch_taken_0x154368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154368) {
            ctx->pc = 0x154260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154260;
        }
    }
    ctx->pc = 0x154370u;
label_154370:
    // 0x154370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x154370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154374:
    // 0x154374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154378: 0x3e00008  jr          $ra
    ctx->pc = 0x154378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154378u;
            // 0x15437c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154380u;
}
