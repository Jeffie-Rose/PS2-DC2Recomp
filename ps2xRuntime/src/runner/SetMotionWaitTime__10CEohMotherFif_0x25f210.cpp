#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotionWaitTime__10CEohMotherFif
// Address: 0x25f210 - 0x25f2e0
void SetMotionWaitTime__10CEohMotherFif_0x25f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionWaitTime__10CEohMotherFif_0x25f210");
#endif

    switch (ctx->pc) {
        case 0x25f210u: goto label_25f210;
        case 0x25f214u: goto label_25f214;
        case 0x25f218u: goto label_25f218;
        case 0x25f21cu: goto label_25f21c;
        case 0x25f220u: goto label_25f220;
        case 0x25f224u: goto label_25f224;
        case 0x25f228u: goto label_25f228;
        case 0x25f22cu: goto label_25f22c;
        case 0x25f230u: goto label_25f230;
        case 0x25f234u: goto label_25f234;
        case 0x25f238u: goto label_25f238;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f240u: goto label_25f240;
        case 0x25f244u: goto label_25f244;
        case 0x25f248u: goto label_25f248;
        case 0x25f24cu: goto label_25f24c;
        case 0x25f250u: goto label_25f250;
        case 0x25f254u: goto label_25f254;
        case 0x25f258u: goto label_25f258;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f260u: goto label_25f260;
        case 0x25f264u: goto label_25f264;
        case 0x25f268u: goto label_25f268;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f270u: goto label_25f270;
        case 0x25f274u: goto label_25f274;
        case 0x25f278u: goto label_25f278;
        case 0x25f27cu: goto label_25f27c;
        case 0x25f280u: goto label_25f280;
        case 0x25f284u: goto label_25f284;
        case 0x25f288u: goto label_25f288;
        case 0x25f28cu: goto label_25f28c;
        case 0x25f290u: goto label_25f290;
        case 0x25f294u: goto label_25f294;
        case 0x25f298u: goto label_25f298;
        case 0x25f29cu: goto label_25f29c;
        case 0x25f2a0u: goto label_25f2a0;
        case 0x25f2a4u: goto label_25f2a4;
        case 0x25f2a8u: goto label_25f2a8;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2b0u: goto label_25f2b0;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c0u: goto label_25f2c0;
        case 0x25f2c4u: goto label_25f2c4;
        case 0x25f2c8u: goto label_25f2c8;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2d0u: goto label_25f2d0;
        case 0x25f2d4u: goto label_25f2d4;
        case 0x25f2d8u: goto label_25f2d8;
        case 0x25f2dcu: goto label_25f2dc;
        default: break;
    }

    ctx->pc = 0x25f210u;

label_25f210:
    // 0x25f210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25f214:
    // 0x25f214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25f218:
    // 0x25f218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25f21c:
    // 0x25f21c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f220:
    if (ctx->pc == 0x25F220u) {
        ctx->pc = 0x25F220u;
            // 0x25f220: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x25F224u;
        goto label_25f224;
    }
    ctx->pc = 0x25F21Cu;
    {
        const bool branch_taken_0x25f21c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F21Cu;
            // 0x25f220: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f21c) {
            ctx->pc = 0x25F230u;
            goto label_25f230;
        }
    }
    ctx->pc = 0x25F224u;
label_25f224:
    // 0x25f224: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f228:
    // 0x25f228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f22c:
    if (ctx->pc == 0x25F22Cu) {
        ctx->pc = 0x25F22Cu;
            // 0x25f22c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F230u;
        goto label_25f230;
    }
    ctx->pc = 0x25F228u;
    {
        const bool branch_taken_0x25f228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F228u;
            // 0x25f22c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f228) {
            ctx->pc = 0x25F238u;
            goto label_25f238;
        }
    }
    ctx->pc = 0x25F230u;
label_25f230:
    // 0x25f230: 0x10000026  b           . + 4 + (0x26 << 2)
label_25f234:
    if (ctx->pc == 0x25F234u) {
        ctx->pc = 0x25F234u;
            // 0x25f234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F238u;
        goto label_25f238;
    }
    ctx->pc = 0x25F230u;
    {
        const bool branch_taken_0x25f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F230u;
            // 0x25f234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f230) {
            ctx->pc = 0x25F2CCu;
            goto label_25f2cc;
        }
    }
    ctx->pc = 0x25F238u;
label_25f238:
    // 0x25f238: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f23c:
    // 0x25f23c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f240:
    // 0x25f240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f244:
    if (ctx->pc == 0x25F244u) {
        ctx->pc = 0x25F244u;
            // 0x25f244: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x25F248u;
        goto label_25f248;
    }
    ctx->pc = 0x25F240u;
    {
        const bool branch_taken_0x25f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F240u;
            // 0x25f244: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f240) {
            ctx->pc = 0x25F250u;
            goto label_25f250;
        }
    }
    ctx->pc = 0x25F248u;
label_25f248:
    // 0x25f248: 0x10000020  b           . + 4 + (0x20 << 2)
label_25f24c:
    if (ctx->pc == 0x25F24Cu) {
        ctx->pc = 0x25F24Cu;
            // 0x25f24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F250u;
        goto label_25f250;
    }
    ctx->pc = 0x25F248u;
    {
        const bool branch_taken_0x25f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F248u;
            // 0x25f24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f248) {
            ctx->pc = 0x25F2CCu;
            goto label_25f2cc;
        }
    }
    ctx->pc = 0x25F250u;
label_25f250:
    // 0x25f250: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f254:
    // 0x25f254: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_25f258:
    if (ctx->pc == 0x25F258u) {
        ctx->pc = 0x25F258u;
            // 0x25f258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F25Cu;
        goto label_25f25c;
    }
    ctx->pc = 0x25F254u;
    {
        const bool branch_taken_0x25f254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F254u;
            // 0x25f258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f254) {
            ctx->pc = 0x25F264u;
            goto label_25f264;
        }
    }
    ctx->pc = 0x25F25Cu;
label_25f25c:
    // 0x25f25c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25f260:
    if (ctx->pc == 0x25F260u) {
        ctx->pc = 0x25F260u;
            // 0x25f260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x25F264u;
        goto label_25f264;
    }
    ctx->pc = 0x25F25Cu;
    {
        const bool branch_taken_0x25f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F25Cu;
            // 0x25f260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f25c) {
            ctx->pc = 0x25F2D0u;
            goto label_25f2d0;
        }
    }
    ctx->pc = 0x25F264u;
label_25f264:
    // 0x25f264: 0x8c640374  lw          $a0, 0x374($v1)
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
label_25f268:
    // 0x25f268: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_25f26c:
    if (ctx->pc == 0x25F26Cu) {
        ctx->pc = 0x25F26Cu;
            // 0x25f26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F270u;
        goto label_25f270;
    }
    ctx->pc = 0x25F268u;
    {
        const bool branch_taken_0x25f268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F268u;
            // 0x25f26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f268) {
            ctx->pc = 0x25F2CCu;
            goto label_25f2cc;
        }
    }
    ctx->pc = 0x25F270u;
label_25f270:
    // 0x25f270: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_25f274:
    // 0x25f274: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x25f274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_25f278:
    // 0x25f278: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x25f278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25f27c:
    // 0x25f27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25f27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25f280:
    // 0x25f280: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25f280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f284:
    // 0x25f284: 0x0  nop
    ctx->pc = 0x25f284u;
    // NOP
label_25f288:
    // 0x25f288: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x25f288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_25f28c:
    // 0x25f28c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25f28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25f290:
    // 0x25f290: 0x460ca502  mul.s       $f20, $f20, $f12
    ctx->pc = 0x25f290u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_25f294:
    // 0x25f294: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x25f294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25f298:
    // 0x25f298: 0xe4600388  swc1        $f0, 0x388($v1)
    ctx->pc = 0x25f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 904), bits); }
label_25f29c:
    // 0x25f29c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f2a0:
    // 0x25f2a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f2a4:
    // 0x25f2a4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x25f2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_25f2a8:
    // 0x25f2a8: 0x320f809  jalr        $t9
label_25f2ac:
    if (ctx->pc == 0x25F2ACu) {
        ctx->pc = 0x25F2B0u;
        goto label_25f2b0;
    }
    ctx->pc = 0x25F2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F2B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F2B0u; }
            if (ctx->pc != 0x25F2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x25F2B0u;
label_25f2b0:
    // 0x25f2b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f2b4:
    // 0x25f2b4: 0x8c620374  lw          $v0, 0x374($v1)
    ctx->pc = 0x25f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
label_25f2b8:
    // 0x25f2b8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x25f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f2bc:
    // 0x25f2bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25f2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25f2c0:
    // 0x25f2c0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x25f2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25f2c4:
    // 0x25f2c4: 0xe4600388  swc1        $f0, 0x388($v1)
    ctx->pc = 0x25f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 904), bits); }
label_25f2c8:
    // 0x25f2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f2cc:
    // 0x25f2cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25f2d0:
    // 0x25f2d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f2d4:
    // 0x25f2d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25f2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f2d8:
    // 0x25f2d8: 0x3e00008  jr          $ra
label_25f2dc:
    if (ctx->pc == 0x25F2DCu) {
        ctx->pc = 0x25F2DCu;
            // 0x25f2dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x25F2E0u;
        goto label_fallthrough_0x25f2d8;
    }
    ctx->pc = 0x25F2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F2D8u;
            // 0x25f2dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f2d8:
    ctx->pc = 0x25F2E0u;
}
