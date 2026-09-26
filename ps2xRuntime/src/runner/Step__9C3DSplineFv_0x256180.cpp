#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9C3DSplineFv
// Address: 0x256180 - 0x256348
void Step__9C3DSplineFv_0x256180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9C3DSplineFv_0x256180");
#endif

    switch (ctx->pc) {
        case 0x2562e8u: goto label_2562e8;
        default: break;
    }

    ctx->pc = 0x256180u;

    // 0x256180: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x256184: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x256184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256188: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x256188u;
    {
        const bool branch_taken_0x256188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256188u;
            // 0x25618c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256188) {
            ctx->pc = 0x256198u;
            goto label_256198;
        }
    }
    ctx->pc = 0x256190u;
    // 0x256190: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x256190u;
    {
        const bool branch_taken_0x256190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256190) {
            ctx->pc = 0x256340u;
            goto label_256340;
        }
    }
    ctx->pc = 0x256198u;
label_256198:
    // 0x256198: 0xc4810388  lwc1        $f1, 0x388($a0)
    ctx->pc = 0x256198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25619c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2561a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2561a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2561a4: 0x0  nop
    ctx->pc = 0x2561a4u;
    // NOP
    // 0x2561a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2561a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2561ac: 0xe4800388  swc1        $f0, 0x388($a0)
    ctx->pc = 0x2561acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
    // 0x2561b0: 0x8c850384  lw          $a1, 0x384($a0)
    ctx->pc = 0x2561b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x2561b4: 0xc4800388  lwc1        $f0, 0x388($a0)
    ctx->pc = 0x2561b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2561b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2561b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2561bc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2561c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2561c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2561c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2561c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2561c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2561cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2561ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2561d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2561d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2561d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2561d8: 0x0  nop
    ctx->pc = 0x2561d8u;
    // NOP
    // 0x2561dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2561dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2561e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2561e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2561e4: 0x0  nop
    ctx->pc = 0x2561e4u;
    // NOP
    // 0x2561e8: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x2561E8u;
    {
        const bool branch_taken_0x2561e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2561ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2561E8u;
            // 0x2561ec: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561e8) {
            ctx->pc = 0x2562A8u;
            goto label_2562a8;
        }
    }
    ctx->pc = 0x2561F0u;
    // 0x2561f0: 0xac820384  sw          $v0, 0x384($a0)
    ctx->pc = 0x2561f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 2));
    // 0x2561f4: 0x8c820384  lw          $v0, 0x384($a0)
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x2561f8: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2561fc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x256200: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x256200u;
    {
        const bool branch_taken_0x256200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256200u;
            // 0x256204: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256200) {
            ctx->pc = 0x2562A8u;
            goto label_2562a8;
        }
    }
    ctx->pc = 0x256208u;
    // 0x256208: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x256208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x25620c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x25620cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256210: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256218: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25621c: 0xc4a1fff4  lwc1        $f1, -0xC($a1)
    ctx->pc = 0x25621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256224: 0x0  nop
    ctx->pc = 0x256224u;
    // NOP
    // 0x256228: 0xe481038c  swc1        $f1, 0x38C($a0)
    ctx->pc = 0x256228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 908), bits); }
    // 0x25622c: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x25622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x256230: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256234: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256238: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25623c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256240: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x256240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256244: 0xe4810390  swc1        $f1, 0x390($a0)
    ctx->pc = 0x256244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x256248: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x25624c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x25624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256250: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x256250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256254: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25625c: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x25625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256260: 0xe4810394  swc1        $f1, 0x394($a0)
    ctx->pc = 0x256260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
    // 0x256264: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x256268: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x256268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25626c: 0xac830384  sw          $v1, 0x384($a0)
    ctx->pc = 0x25626cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 3));
    // 0x256270: 0x8c850384  lw          $a1, 0x384($a0)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x256274: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256278: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x256278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25627c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256280: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x256280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256284: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x256284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256288: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x256288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25628c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x256290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x256290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256294: 0x0  nop
    ctx->pc = 0x256294u;
    // NOP
    // 0x256298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25629c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25629cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2562a0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2562A0u;
    {
        const bool branch_taken_0x2562a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2562A0u;
            // 0x2562a4: 0xe4800388  swc1        $f0, 0x388($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562a0) {
            ctx->pc = 0x256340u;
            goto label_256340;
        }
    }
    ctx->pc = 0x2562A8u;
label_2562a8:
    // 0x2562a8: 0x8c830384  lw          $v1, 0x384($a0)
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x2562ac: 0xc4820388  lwc1        $f2, 0x388($a0)
    ctx->pc = 0x2562acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2562b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2562b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2562b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2562bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2562c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2562c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2562c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2562c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2562c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2562c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2562ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2562d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2562d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2562d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2562d8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2562d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2562dc: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x2562dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2562e0: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x2562e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2562e4: 0x46042982  mul.s       $f6, $f5, $f4
    ctx->pc = 0x2562e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2562e8:
    // 0x2562e8: 0x8c860384  lw          $a2, 0x384($a0)
    ctx->pc = 0x2562e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x2562ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2562ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2562f0: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2562f4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2562f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2562f8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2562f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2562fc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2562fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x256300: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256304: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x256308: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x256308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x25630c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x25630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256310: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x256310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x256314: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x256314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256318: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x256318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25631c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x25631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256320: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x256320u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x256324: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x256324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x256328: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x256328u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x25632c: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25632cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x256330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256334: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x256334u;
    {
        const bool branch_taken_0x256334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256334u;
            // 0x256338: 0xe460038c  swc1        $f0, 0x38C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256334) {
            ctx->pc = 0x2562E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2562e8;
        }
    }
    ctx->pc = 0x25633Cu;
    // 0x25633c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25633cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256340:
    // 0x256340: 0x3e00008  jr          $ra
    ctx->pc = 0x256340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256348u;
}
