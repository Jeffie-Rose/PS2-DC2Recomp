#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CDngFreeMapFv
// Address: 0x1edff0 - 0x1ee198
void Step__11CDngFreeMapFv_0x1edff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CDngFreeMapFv_0x1edff0");
#endif

    switch (ctx->pc) {
        case 0x1ee0b4u: goto label_1ee0b4;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee104u: goto label_1ee104;
        default: break;
    }

    ctx->pc = 0x1edff0u;

    // 0x1edff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1edff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1edff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edffc: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1edffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ee000: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1EE000u;
    {
        const bool branch_taken_0x1ee000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE000u;
            // 0x1ee004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee000) {
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE008u;
    // 0x1ee008: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1ee00c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE00Cu;
    {
        const bool branch_taken_0x1ee00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE00Cu;
            // 0x1ee010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee00c) {
            ctx->pc = 0x1EE040u;
            goto label_1ee040;
        }
    }
    ctx->pc = 0x1EE014u;
    // 0x1ee014: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x1ee014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee018: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1ee01c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x1ee01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee020: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ee020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee028: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ee028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee02c: 0x0  nop
    ctx->pc = 0x1ee02cu;
    // NOP
    // 0x1ee030: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1EE030u;
    {
        const bool branch_taken_0x1ee030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE030u;
            // 0x1ee034: 0xe60000f0  swc1        $f0, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee030) {
            ctx->pc = 0x1EE06Cu;
            goto label_1ee06c;
        }
    }
    ctx->pc = 0x1EE038u;
    // 0x1ee038: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EE038u;
    {
        const bool branch_taken_0x1ee038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE038u;
            // 0x1ee03c: 0xe60200f0  swc1        $f2, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee038) {
            ctx->pc = 0x1EE06Cu;
            goto label_1ee06c;
        }
    }
    ctx->pc = 0x1EE040u;
label_1ee040:
    // 0x1ee040: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE040u;
    {
        const bool branch_taken_0x1ee040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee040) {
            ctx->pc = 0x1EE06Cu;
            goto label_1ee06c;
        }
    }
    ctx->pc = 0x1EE048u;
    // 0x1ee048: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x1ee048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee04c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x1ee04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee050: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ee050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee054: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee058: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ee058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee05c: 0x0  nop
    ctx->pc = 0x1ee05cu;
    // NOP
    // 0x1ee060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE060u;
    {
        const bool branch_taken_0x1ee060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE060u;
            // 0x1ee064: 0xe60000f0  swc1        $f0, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee060) {
            ctx->pc = 0x1EE06Cu;
            goto label_1ee06c;
        }
    }
    ctx->pc = 0x1EE068u;
    // 0x1ee068: 0xe60200f0  swc1        $f2, 0xF0($s0)
    ctx->pc = 0x1ee068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_1ee06c:
    // 0x1ee06c: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x1ee06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee070: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ee074: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1ee074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee078: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ee078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee07c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ee07cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ee080: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ee080u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ee084: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee088: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1ee088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1ee08c: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1ee08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee090: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1ee090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee094: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ee094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ee098: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ee098u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ee09c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee0a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1ee0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1ee0a4: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1ee0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee0a8: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x1ee0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EE0ACu;
    SET_GPR_U32(ctx, 31, 0x1EE0B4u);
    ctx->pc = 0x1EE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0ACu;
            // 0x1ee0b0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0B4u; }
        if (ctx->pc != 0x1EE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0B4u; }
        if (ctx->pc != 0x1EE0B4u) { return; }
    }
    ctx->pc = 0x1EE0B4u;
label_1ee0b4:
    // 0x1ee0b4: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1EE0B4u;
    SET_GPR_U32(ctx, 31, 0x1EE0BCu);
    ctx->pc = 0x1EE0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0B4u;
            // 0x1ee0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0BCu; }
        if (ctx->pc != 0x1EE0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0BCu; }
        if (ctx->pc != 0x1EE0BCu) { return; }
    }
    ctx->pc = 0x1EE0BCu;
label_1ee0bc:
    // 0x1ee0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee0c0: 0x0  nop
    ctx->pc = 0x1ee0c0u;
    // NOP
    // 0x1ee0c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ee0c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee0d0: 0x0  nop
    ctx->pc = 0x1ee0d0u;
    // NOP
    // 0x1ee0d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ee0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee0d8: 0x0  nop
    ctx->pc = 0x1ee0d8u;
    // NOP
    // 0x1ee0dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE0DCu;
    {
        const bool branch_taken_0x1ee0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee0dc) {
            ctx->pc = 0x1EE0ECu;
            goto label_1ee0ec;
        }
    }
    ctx->pc = 0x1EE0E4u;
    // 0x1ee0e4: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x1ee0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0e8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1ee0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1ee0ec:
    // 0x1ee0ec: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1ee0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee0f0: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1ee0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EE0F4u;
    SET_GPR_U32(ctx, 31, 0x1EE0FCu);
    ctx->pc = 0x1EE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0F4u;
            // 0x1ee0f8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0FCu; }
        if (ctx->pc != 0x1EE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0FCu; }
        if (ctx->pc != 0x1EE0FCu) { return; }
    }
    ctx->pc = 0x1EE0FCu;
label_1ee0fc:
    // 0x1ee0fc: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1EE0FCu;
    SET_GPR_U32(ctx, 31, 0x1EE104u);
    ctx->pc = 0x1EE100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0FCu;
            // 0x1ee100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE104u; }
        if (ctx->pc != 0x1EE104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE104u; }
        if (ctx->pc != 0x1EE104u) { return; }
    }
    ctx->pc = 0x1EE104u;
label_1ee104:
    // 0x1ee104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ee108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee110: 0x0  nop
    ctx->pc = 0x1ee110u;
    // NOP
    // 0x1ee114: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ee114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee11c: 0x0  nop
    ctx->pc = 0x1ee11cu;
    // NOP
    // 0x1ee120: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE120u;
    {
        const bool branch_taken_0x1ee120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee120) {
            ctx->pc = 0x1EE130u;
            goto label_1ee130;
        }
    }
    ctx->pc = 0x1EE128u;
    // 0x1ee128: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1ee128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee12c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1ee12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1ee130:
    // 0x1ee130: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1ee134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ee134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee138: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x1ee138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee13c: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1ee140: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x1ee140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1ee144: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE144u;
    {
        const bool branch_taken_0x1ee144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee144) {
            ctx->pc = 0x1EE150u;
            goto label_1ee150;
        }
    }
    ctx->pc = 0x1EE14Cu;
    // 0x1ee14c: 0xa60000c8  sh          $zero, 0xC8($s0)
    ctx->pc = 0x1ee14cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 0));
label_1ee150:
    // 0x1ee150: 0xc7828efc  lwc1        $f2, -0x7104($gp)
    ctx->pc = 0x1ee150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee154: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1ee154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1ee158: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1ee158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1ee15c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ee15cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee160: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ee160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee168: 0x0  nop
    ctx->pc = 0x1ee168u;
    // NOP
    // 0x1ee16c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ee16cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ee170: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee174: 0x0  nop
    ctx->pc = 0x1ee174u;
    // NOP
    // 0x1ee178: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE178u;
    {
        const bool branch_taken_0x1ee178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE178u;
            // 0x1ee17c: 0xe7818efc  swc1        $f1, -0x7104($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee178) {
            ctx->pc = 0x1EE184u;
            goto label_1ee184;
        }
    }
    ctx->pc = 0x1EE180u;
    // 0x1ee180: 0xe7808efc  swc1        $f0, -0x7104($gp)
    ctx->pc = 0x1ee180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), bits); }
label_1ee184:
    // 0x1ee184: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ee184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1ee188:
    // 0x1ee188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ee188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee190: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE190u;
            // 0x1ee194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE198u;
}
