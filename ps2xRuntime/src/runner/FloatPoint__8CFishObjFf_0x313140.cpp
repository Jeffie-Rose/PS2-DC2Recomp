#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FloatPoint__8CFishObjFf
// Address: 0x313140 - 0x313310
void FloatPoint__8CFishObjFf_0x313140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FloatPoint__8CFishObjFf_0x313140");
#endif

    switch (ctx->pc) {
        case 0x313170u: goto label_313170;
        case 0x3132a4u: goto label_3132a4;
        default: break;
    }

    ctx->pc = 0x313140u;

    // 0x313140: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x313144: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x313144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x313148: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x313148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x31314c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31314cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313150: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x313150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x313154: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x313154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x313158: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x313158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31315c: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x31315cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x313160: 0x34a3d70a  ori         $v1, $a1, 0xD70A
    ctx->pc = 0x313160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x313164: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x313164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313168: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x313168u;
    {
        const bool branch_taken_0x313168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313168u;
            // 0x31316c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313168) {
            ctx->pc = 0x313278u;
            goto label_313278;
        }
    }
    ctx->pc = 0x313170u;
label_313170:
    // 0x313170: 0x8ca802c4  lw          $t0, 0x2C4($a1)
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 708)));
    // 0x313174: 0x8ca302c8  lw          $v1, 0x2C8($a1)
    ctx->pc = 0x313174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 712)));
    // 0x313178: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x313178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31317c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313180: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x313180u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x313184: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x313184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313188: 0x0  nop
    ctx->pc = 0x313188u;
    // NOP
    // 0x31318c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31318Cu;
    {
        const bool branch_taken_0x31318c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31318Cu;
            // 0x313190: 0x24a902c4  addiu       $t1, $a1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31318c) {
            ctx->pc = 0x31319Cu;
            goto label_31319c;
        }
    }
    ctx->pc = 0x313194u;
    // 0x313194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313194u;
    {
        const bool branch_taken_0x313194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313194u;
            // 0x313198: 0x46001907  neg.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313194) {
            ctx->pc = 0x3131A0u;
            goto label_3131a0;
        }
    }
    ctx->pc = 0x31319Cu;
label_31319c:
    // 0x31319c: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x31319cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_3131a0:
    // 0x3131a0: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x3131a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3131a4: 0x0  nop
    ctx->pc = 0x3131a4u;
    // NOP
    // 0x3131a8: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x3131A8u;
    {
        const bool branch_taken_0x3131a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3131a8) {
            ctx->pc = 0x31326Cu;
            goto label_31326c;
        }
    }
    ctx->pc = 0x3131B0u;
    // 0x3131b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3131b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3131b4: 0x0  nop
    ctx->pc = 0x3131b4u;
    // NOP
    // 0x3131b8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3131B8u;
    {
        const bool branch_taken_0x3131b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3131b8) {
            ctx->pc = 0x3131F0u;
            goto label_3131f0;
        }
    }
    ctx->pc = 0x3131C0u;
    // 0x3131c0: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3131c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3131c4: 0x0  nop
    ctx->pc = 0x3131c4u;
    // NOP
    // 0x3131c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3131C8u;
    {
        const bool branch_taken_0x3131c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3131c8) {
            ctx->pc = 0x3131D4u;
            goto label_3131d4;
        }
    }
    ctx->pc = 0x3131D0u;
    // 0x3131d0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x3131d0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_3131d4:
    // 0x3131d4: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x3131d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3131d8: 0x0  nop
    ctx->pc = 0x3131d8u;
    // NOP
    // 0x3131dc: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x3131dcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3131e0: 0x0  nop
    ctx->pc = 0x3131e0u;
    // NOP
    // 0x3131e4: 0x0  nop
    ctx->pc = 0x3131e4u;
    // NOP
    // 0x3131e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3131E8u;
    {
        const bool branch_taken_0x3131e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3131e8) {
            ctx->pc = 0x313210u;
            goto label_313210;
        }
    }
    ctx->pc = 0x3131F0u;
label_3131f0:
    // 0x3131f0: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3131f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3131f4: 0x0  nop
    ctx->pc = 0x3131f4u;
    // NOP
    // 0x3131f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3131F8u;
    {
        const bool branch_taken_0x3131f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3131f8) {
            ctx->pc = 0x313204u;
            goto label_313204;
        }
    }
    ctx->pc = 0x313200u;
    // 0x313200: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x313200u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_313204:
    // 0x313204: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x313204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x313208: 0x0  nop
    ctx->pc = 0x313208u;
    // NOP
    // 0x31320c: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x31320cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_313210:
    // 0x313210: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x313210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313214: 0x0  nop
    ctx->pc = 0x313214u;
    // NOP
    // 0x313218: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x313218u;
    {
        const bool branch_taken_0x313218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313218) {
            ctx->pc = 0x31326Cu;
            goto label_31326c;
        }
    }
    ctx->pc = 0x313220u;
    // 0x313220: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x313220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313224: 0x0  nop
    ctx->pc = 0x313224u;
    // NOP
    // 0x313228: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x313228u;
    {
        const bool branch_taken_0x313228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313228) {
            ctx->pc = 0x313234u;
            goto label_313234;
        }
    }
    ctx->pc = 0x313230u;
    // 0x313230: 0x46003046  mov.s       $f1, $f6
    ctx->pc = 0x313230u;
    ctx->f[1] = FPU_MOV_S(ctx->f[6]);
label_313234:
    // 0x313234: 0x0  nop
    ctx->pc = 0x313234u;
    // NOP
    // 0x313238: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x313238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31323c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x31323cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x313240: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x313240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x313244: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x313244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x313248: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x313248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31324c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x31324cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x313250: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x313250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x313254: 0xc4a002d0  lwc1        $f0, 0x2D0($a1)
    ctx->pc = 0x313254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313258: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31325c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x31325cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x313260: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x313260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313268: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x313268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_31326c:
    // 0x31326c: 0x0  nop
    ctx->pc = 0x31326cu;
    // NOP
    // 0x313270: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x313274: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313278:
    // 0x313278: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x31327c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x31327cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x313280: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x313280u;
    {
        const bool branch_taken_0x313280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313280u;
            // 0x313284: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313280) {
            ctx->pc = 0x313170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_313170;
        }
    }
    ctx->pc = 0x313288u;
    // 0x313288: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x313288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x31328c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313290: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x313290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x313294: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x313294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313298: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x313298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31329c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31329Cu;
    {
        const bool branch_taken_0x31329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31329Cu;
            // 0x3132a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31329c) {
            ctx->pc = 0x3132F8u;
            goto label_3132f8;
        }
    }
    ctx->pc = 0x3132A4u;
label_3132a4:
    // 0x3132a4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3132a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3132a8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3132a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3132ac: 0x0  nop
    ctx->pc = 0x3132acu;
    // NOP
    // 0x3132b0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3132B0u;
    {
        const bool branch_taken_0x3132b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3132b0) {
            ctx->pc = 0x3132ECu;
            goto label_3132ec;
        }
    }
    ctx->pc = 0x3132B8u;
    // 0x3132b8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3132b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3132bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3132bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3132c0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3132c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3132c4: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x3132c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3132c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3132c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3132cc: 0x0  nop
    ctx->pc = 0x3132ccu;
    // NOP
    // 0x3132d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3132D0u;
    {
        const bool branch_taken_0x3132d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3132D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3132D0u;
            // 0x3132d4: 0x24670034  addiu       $a3, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132d0) {
            ctx->pc = 0x3132E0u;
            goto label_3132e0;
        }
    }
    ctx->pc = 0x3132D8u;
    // 0x3132d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3132d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3132dc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3132dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3132e0:
    // 0x3132e0: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x3132e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3132e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3132e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3132e8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3132e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_3132ec:
    // 0x3132ec: 0x0  nop
    ctx->pc = 0x3132ecu;
    // NOP
    // 0x3132f0: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3132f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3132f8:
    // 0x3132f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3132fc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3132fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x313300: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x313300u;
    {
        const bool branch_taken_0x313300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313300u;
            // 0x313304: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313300) {
            ctx->pc = 0x3132A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3132a4;
        }
    }
    ctx->pc = 0x313308u;
    // 0x313308: 0x3e00008  jr          $ra
    ctx->pc = 0x313308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313310u;
}
