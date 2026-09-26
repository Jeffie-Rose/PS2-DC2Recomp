#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightNoTime__4CMapFi
// Address: 0x161360 - 0x161478
void GetLightNoTime__4CMapFi_0x161360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightNoTime__4CMapFi_0x161360");
#endif

    switch (ctx->pc) {
        case 0x16138cu: goto label_16138c;
        default: break;
    }

    ctx->pc = 0x161360u;

    // 0x161360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16136c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161370: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161374: 0x8c9000d0  lw          $s0, 0xD0($a0)
    ctx->pc = 0x161374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x161378: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x161378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16137c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x16137Cu;
    {
        const bool branch_taken_0x16137c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16137Cu;
            // 0x161380: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16137c) {
            ctx->pc = 0x161398u;
            goto label_161398;
        }
    }
    ctx->pc = 0x161384u;
    // 0x161384: 0xc058520  jal         func_161480
    ctx->pc = 0x161384u;
    SET_GPR_U32(ctx, 31, 0x16138Cu);
    ctx->pc = 0x161480u;
    if (runtime->hasFunction(0x161480u)) {
        auto targetFn = runtime->lookupFunction(0x161480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16138Cu; }
        if (ctx->pc != 0x16138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeEnable__4CMapFv_0x161480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16138Cu; }
        if (ctx->pc != 0x16138Cu) { return; }
    }
    ctx->pc = 0x16138Cu;
label_16138c:
    // 0x16138c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16138Cu;
    {
        const bool branch_taken_0x16138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16138Cu;
            // 0x161390: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16138c) {
            ctx->pc = 0x1613A4u;
            goto label_1613a4;
        }
    }
    ctx->pc = 0x161394u;
    // 0x161394: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_161398:
    // 0x161398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16139c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x16139Cu;
    {
        const bool branch_taken_0x16139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16139Cu;
            // 0x1613a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16139c) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x1613A4u;
label_1613a4:
    // 0x1613a4: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1613A4u;
    {
        const bool branch_taken_0x1613a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1613A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613A4u;
            // 0x1613a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613a4) {
            ctx->pc = 0x161418u;
            goto label_161418;
        }
    }
    ctx->pc = 0x1613ACu;
    // 0x1613ac: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1613ACu;
    {
        const bool branch_taken_0x1613ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1613B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613ACu;
            // 0x1613b0: 0x3c0241ac  lui         $v0, 0x41AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16812 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613ac) {
            ctx->pc = 0x161400u;
            goto label_161400;
        }
    }
    ctx->pc = 0x1613B4u;
    // 0x1613b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1613b8: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1613B8u;
    {
        const bool branch_taken_0x1613b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1613BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613B8u;
            // 0x1613bc: 0x3c02418c  lui         $v0, 0x418C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16780 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613b8) {
            ctx->pc = 0x1613F4u;
            goto label_1613f4;
        }
    }
    ctx->pc = 0x1613C0u;
    // 0x1613c0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1613C0u;
    {
        const bool branch_taken_0x1613c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613C0u;
            // 0x1613c4: 0x3c024118  lui         $v0, 0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c0) {
            ctx->pc = 0x1613E8u;
            goto label_1613e8;
        }
    }
    ctx->pc = 0x1613C8u;
    // 0x1613c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1613cc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1613D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613CCu;
            // 0x1613d0: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x1613DCu;
            goto label_1613dc;
        }
    }
    ctx->pc = 0x1613D4u;
    // 0x1613d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1613D4u;
    {
        const bool branch_taken_0x1613d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613D4u;
            // 0x1613d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613d4) {
            ctx->pc = 0x16140Cu;
            goto label_16140c;
        }
    }
    ctx->pc = 0x1613DCu;
label_1613dc:
    // 0x1613dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1613dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1613e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1613E0u;
    {
        const bool branch_taken_0x1613e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613e0) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x1613E8u;
label_1613e8:
    // 0x1613e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1613e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1613ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1613ECu;
    {
        const bool branch_taken_0x1613ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613ec) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x1613F4u;
label_1613f4:
    // 0x1613f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1613f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1613f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1613F8u;
    {
        const bool branch_taken_0x1613f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613f8) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x161400u;
label_161400:
    // 0x161400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161404: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x161404u;
    {
        const bool branch_taken_0x161404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161404) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x16140Cu;
label_16140c:
    // 0x16140c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161410: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x161410u;
    {
        const bool branch_taken_0x161410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161410) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x161418u;
label_161418:
    // 0x161418: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x161418u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16141c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x161420: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x161420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161424: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161428: 0x3c024118  lui         $v0, 0x4118
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
    // 0x16142c: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x16142cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x161430: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x161430u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161438: 0x0  nop
    ctx->pc = 0x161438u;
    // NOP
    // 0x16143c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16143cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161440: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x161440u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x161444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161448: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16144c: 0x0  nop
    ctx->pc = 0x16144cu;
    // NOP
    // 0x161450: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161454: 0x0  nop
    ctx->pc = 0x161454u;
    // NOP
    // 0x161458: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161458u;
    {
        const bool branch_taken_0x161458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161458) {
            ctx->pc = 0x161464u;
            goto label_161464;
        }
    }
    ctx->pc = 0x161460u;
    // 0x161460: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x161460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_161464:
    // 0x161464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161468:
    // 0x161468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16146c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16146cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161470: 0x3e00008  jr          $ra
    ctx->pc = 0x161470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161470u;
            // 0x161474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161478u;
}
