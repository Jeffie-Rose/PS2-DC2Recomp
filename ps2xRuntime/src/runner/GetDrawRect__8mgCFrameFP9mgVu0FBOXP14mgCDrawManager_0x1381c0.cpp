#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDrawRect__8mgCFrameFP9mgVu0FBOXP14mgCDrawManager
// Address: 0x1381c0 - 0x1386c0
void GetDrawRect__8mgCFrameFP9mgVu0FBOXP14mgCDrawManager_0x1381c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawRect__8mgCFrameFP9mgVu0FBOXP14mgCDrawManager_0x1381c0");
#endif

    switch (ctx->pc) {
        case 0x13825cu: goto label_13825c;
        case 0x13826cu: goto label_13826c;
        case 0x1382b0u: goto label_1382b0;
        case 0x1385c0u: goto label_1385c0;
        case 0x1385ccu: goto label_1385cc;
        case 0x1385ecu: goto label_1385ec;
        case 0x138624u: goto label_138624;
        case 0x13863cu: goto label_13863c;
        case 0x138648u: goto label_138648;
        case 0x13866cu: goto label_13866c;
        case 0x138690u: goto label_138690;
        case 0x13869cu: goto label_13869c;
        default: break;
    }

    ctx->pc = 0x1381c0u;

label_1381c0:
    // 0x1381c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1381c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1381c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1381c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1381c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1381cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1381ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1381d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1381d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1381d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1381d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1381d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1381dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1381e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1381E0u;
    {
        const bool branch_taken_0x1381e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1381E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381E0u;
            // 0x1381e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381e0) {
            ctx->pc = 0x1381F0u;
            goto label_1381f0;
        }
    }
    ctx->pc = 0x1381E8u;
    // 0x1381e8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1381e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1381ec: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x1381ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
label_1381f0:
    // 0x1381f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1381f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1381f4: 0x8cd20064  lw          $s2, 0x64($a2)
    ctx->pc = 0x1381f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x1381f8: 0x24420e30  addiu       $v0, $v0, 0xE30
    ctx->pc = 0x1381f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
    // 0x1381fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1381fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138200: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x138200u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138204: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x138204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138208: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13820c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x13820cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x138210: 0x24420e40  addiu       $v0, $v0, 0xE40
    ctx->pc = 0x138210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
    // 0x138214: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x138214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138218: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x138218u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13821c: 0x8e9000f4  lw          $s0, 0xF4($s4)
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x138220: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138220u;
    {
        const bool branch_taken_0x138220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x138220) {
            ctx->pc = 0x138230u;
            goto label_138230;
        }
    }
    ctx->pc = 0x138228u;
    // 0x138228: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x138228u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x13822c: 0x26100da0  addiu       $s0, $s0, 0xDA0
    ctx->pc = 0x13822cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3488));
label_138230:
    // 0x138230: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x138234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138234u;
    {
        const bool branch_taken_0x138234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138234u;
            // 0x138238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138234) {
            ctx->pc = 0x138244u;
            goto label_138244;
        }
    }
    ctx->pc = 0x13823Cu;
    // 0x13823c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x13823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x138240: 0x0  nop
    ctx->pc = 0x138240u;
    // NOP
label_138244:
    // 0x138244: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138244u;
    {
        const bool branch_taken_0x138244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138244u;
            // 0x138248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138244) {
            ctx->pc = 0x138264u;
            goto label_138264;
        }
    }
    ctx->pc = 0x13824Cu;
    // 0x13824c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138250: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x138250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x138254: 0xc04db90  jal         func_136E40
    ctx->pc = 0x138254u;
    SET_GPR_U32(ctx, 31, 0x13825Cu);
    ctx->pc = 0x138258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138254u;
            // 0x138258: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136E40u;
    if (runtime->hasFunction(0x136E40u)) {
        auto targetFn = runtime->lookupFunction(0x136E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13825Cu; }
        if (ctx->pc != 0x13825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBoardMatrix__8mgCFrameFiPA4_fP13mgRENDER_INFO_0x136e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13825Cu; }
        if (ctx->pc != 0x13825Cu) { return; }
    }
    ctx->pc = 0x13825Cu;
label_13825c:
    // 0x13825c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13825Cu;
    {
        const bool branch_taken_0x13825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13825Cu;
            // 0x138260: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13825c) {
            ctx->pc = 0x138270u;
            goto label_138270;
        }
    }
    ctx->pc = 0x138264u;
label_138264:
    // 0x138264: 0xc04dc6c  jal         func_1371B0
    ctx->pc = 0x138264u;
    SET_GPR_U32(ctx, 31, 0x13826Cu);
    ctx->pc = 0x138268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138264u;
            // 0x138268: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1371B0u;
    if (runtime->hasFunction(0x1371B0u)) {
        auto targetFn = runtime->lookupFunction(0x1371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13826Cu; }
        if (ctx->pc != 0x13826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrixTopBottom__8mgCFrameFPA4_f_0x1371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13826Cu; }
        if (ctx->pc != 0x13826Cu) { return; }
    }
    ctx->pc = 0x13826Cu;
label_13826c:
    // 0x13826c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x13826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_138270:
    // 0x138270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x138270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x138274: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138274u;
    {
        const bool branch_taken_0x138274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138274u;
            // 0x138278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138274) {
            ctx->pc = 0x138280u;
            goto label_138280;
        }
    }
    ctx->pc = 0x13827Cu;
    // 0x13827c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13827cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138280:
    // 0x138280: 0x8e8200f8  lw          $v0, 0xF8($s4)
    ctx->pc = 0x138280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x138284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138284u;
    {
        const bool branch_taken_0x138284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138284) {
            ctx->pc = 0x138298u;
            goto label_138298;
        }
    }
    ctx->pc = 0x13828Cu;
    // 0x13828c: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x138290: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138290u;
    {
        const bool branch_taken_0x138290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138290) {
            ctx->pc = 0x13829Cu;
            goto label_13829c;
        }
    }
    ctx->pc = 0x138298u;
label_138298:
    // 0x138298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x138298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13829c:
    // 0x13829c: 0x122000c3  beqz        $s1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x13829Cu;
    {
        const bool branch_taken_0x13829c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13829Cu;
            // 0x1382a0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13829c) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x1382A4u;
    // 0x1382a4: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1382a8: 0xc04c094  jal         func_130250
    ctx->pc = 0x1382A8u;
    SET_GPR_U32(ctx, 31, 0x1382B0u);
    ctx->pc = 0x1382ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1382A8u;
            // 0x1382ac: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1382B0u; }
        if (ctx->pc != 0x1382B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1382B0u; }
        if (ctx->pc != 0x1382B0u) { return; }
    }
    ctx->pc = 0x1382B0u;
label_1382b0:
    // 0x1382b0: 0x8e8500f0  lw          $a1, 0xF0($s4)
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x1382b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1382b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1382b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1382b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1382bc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1382bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1382c0: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1382c0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1382c4: 0xd8ab0010  lqc2        $vf11, 0x10($a1)
    ctx->pc = 0x1382c4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1382c8: 0xd8ac0020  lqc2        $vf12, 0x20($a1)
    ctx->pc = 0x1382c8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1382cc: 0xd8ad0030  lqc2        $vf13, 0x30($a1)
    ctx->pc = 0x1382ccu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1382d0: 0xd8ae0040  lqc2        $vf14, 0x40($a1)
    ctx->pc = 0x1382d0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1382d4: 0xd8af0050  lqc2        $vf15, 0x50($a1)
    ctx->pc = 0x1382d4u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1382d8: 0xd8b00060  lqc2        $vf16, 0x60($a1)
    ctx->pc = 0x1382d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1382dc: 0xd8b10070  lqc2        $vf17, 0x70($a1)
    ctx->pc = 0x1382dcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1382e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1382e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1382e4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1382e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1382e8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1382e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1382ec: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1382ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1382f0: 0x4bea09bc  vmulax.xyzw $ACC, $vf1, $vf10x
    ctx->pc = 0x1382f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1382f4: 0x4bea10bd  vmadday.xyzw $ACC, $vf2, $vf10y
    ctx->pc = 0x1382f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1382f8: 0x4bea18be  vmaddaz.xyzw $ACC, $vf3, $vf10z
    ctx->pc = 0x1382f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1382fc: 0x4bea228b  vmaddw.xyzw $vf10, $vf4, $vf10w
    ctx->pc = 0x1382fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138300: 0x4beb09bc  vmulax.xyzw $ACC, $vf1, $vf11x
    ctx->pc = 0x138300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138304: 0x4beb10bd  vmadday.xyzw $ACC, $vf2, $vf11y
    ctx->pc = 0x138304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138308: 0x4beb18be  vmaddaz.xyzw $ACC, $vf3, $vf11z
    ctx->pc = 0x138308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x13830c: 0x4a3451fd  vabs.w      $vf20, $vf10
    ctx->pc = 0x13830cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[10], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x138310: 0x4a0002ff  vnop
    ctx->pc = 0x138310u;
    // NOP operation, no action needed for VU0
    // 0x138314: 0x4a0002ff  vnop
    ctx->pc = 0x138314u;
    // NOP operation, no action needed for VU0
    // 0x138318: 0x4beb22cb  vmaddw.xyzw $vf11, $vf4, $vf11w
    ctx->pc = 0x138318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13831c: 0x4bf403bc  vdiv        $Q, $vf0w, $vf20w
    ctx->pc = 0x13831cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138320: 0x4a0002ff  vnop
    ctx->pc = 0x138320u;
    // NOP operation, no action needed for VU0
    // 0x138324: 0x4a0002ff  vnop
    ctx->pc = 0x138324u;
    // NOP operation, no action needed for VU0
    // 0x138328: 0x4a3559fd  vabs.w      $vf21, $vf11
    ctx->pc = 0x138328u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[11], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x13832c: 0x4a0002ff  vnop
    ctx->pc = 0x13832cu;
    // NOP operation, no action needed for VU0
    // 0x138330: 0x4a0002ff  vnop
    ctx->pc = 0x138330u;
    // NOP operation, no action needed for VU0
    // 0x138334: 0x4a0003bf  vwaitq
    ctx->pc = 0x138334u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138338: 0x4b80529c  vmulq.xy    $vf10, $vf10, $Q
    ctx->pc = 0x138338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x13833c: 0x4bf503bc  vdiv        $Q, $vf0w, $vf21w
    ctx->pc = 0x13833cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138340: 0x4bec09bc  vmulax.xyzw $ACC, $vf1, $vf12x
    ctx->pc = 0x138340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138344: 0x4bec10bd  vmadday.xyzw $ACC, $vf2, $vf12y
    ctx->pc = 0x138344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138348: 0x4bec18be  vmaddaz.xyzw $ACC, $vf3, $vf12z
    ctx->pc = 0x138348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x13834c: 0x4bec230b  vmaddw.xyzw $vf12, $vf4, $vf12w
    ctx->pc = 0x13834cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138350: 0x4bed09bc  vmulax.xyzw $ACC, $vf1, $vf13x
    ctx->pc = 0x138350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138354: 0x4a0003bf  vwaitq
    ctx->pc = 0x138354u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138358: 0x4b805adc  vmulq.xy    $vf11, $vf11, $Q
    ctx->pc = 0x138358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x13835c: 0x4a3661fd  vabs.w      $vf22, $vf12
    ctx->pc = 0x13835cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[12], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x138360: 0x4bed10bd  vmadday.xyzw $ACC, $vf2, $vf13y
    ctx->pc = 0x138360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138364: 0x4bed18be  vmaddaz.xyzw $ACC, $vf3, $vf13z
    ctx->pc = 0x138364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138368: 0x4bed234b  vmaddw.xyzw $vf13, $vf4, $vf13w
    ctx->pc = 0x138368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13836c: 0x4bf603bc  vdiv        $Q, $vf0w, $vf22w
    ctx->pc = 0x13836cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138370: 0x4bee09bc  vmulax.xyzw $ACC, $vf1, $vf14x
    ctx->pc = 0x138370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138374: 0x4bee10bd  vmadday.xyzw $ACC, $vf2, $vf14y
    ctx->pc = 0x138374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138378: 0x4a3769fd  vabs.w      $vf23, $vf13
    ctx->pc = 0x138378u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x13837c: 0x4bee18be  vmaddaz.xyzw $ACC, $vf3, $vf14z
    ctx->pc = 0x13837cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x138380: 0x4bee238b  vmaddw.xyzw $vf14, $vf4, $vf14w
    ctx->pc = 0x138380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138384: 0x4beb57ab  vmax.xyzw   $vf30, $vf10, $vf11
    ctx->pc = 0x138384u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x138388: 0x4beb57ef  vmini.xyzw  $vf31, $vf10, $vf11
    ctx->pc = 0x138388u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x13838c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13838cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138390: 0x4b80631c  vmulq.xy    $vf12, $vf12, $Q
    ctx->pc = 0x138390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x138394: 0x4bf703bc  vdiv        $Q, $vf0w, $vf23w
    ctx->pc = 0x138394u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138398: 0x4a3871fd  vabs.w      $vf24, $vf14
    ctx->pc = 0x138398u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[14], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x13839c: 0x4bef09bc  vmulax.xyzw $ACC, $vf1, $vf15x
    ctx->pc = 0x13839cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383a0: 0x4bef10bd  vmadday.xyzw $ACC, $vf2, $vf15y
    ctx->pc = 0x1383a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383a4: 0x4bef18be  vmaddaz.xyzw $ACC, $vf3, $vf15z
    ctx->pc = 0x1383a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383a8: 0x4bef23cb  vmaddw.xyzw $vf15, $vf4, $vf15w
    ctx->pc = 0x1383a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1383ac: 0x4becf7ab  vmax.xyzw   $vf30, $vf30, $vf12
    ctx->pc = 0x1383acu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1383b0: 0x4becffef  vmini.xyzw  $vf31, $vf31, $vf12
    ctx->pc = 0x1383b0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1383b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1383b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1383b8: 0x4b806b5c  vmulq.xy    $vf13, $vf13, $Q
    ctx->pc = 0x1383b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1383bc: 0x4bf803bc  vdiv        $Q, $vf0w, $vf24w
    ctx->pc = 0x1383bcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x1383c0: 0x4a3979fd  vabs.w      $vf25, $vf15
    ctx->pc = 0x1383c0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[15], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x1383c4: 0x4bf009bc  vmulax.xyzw $ACC, $vf1, $vf16x
    ctx->pc = 0x1383c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383c8: 0x4bf010bd  vmadday.xyzw $ACC, $vf2, $vf16y
    ctx->pc = 0x1383c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383cc: 0x4bf018be  vmaddaz.xyzw $ACC, $vf3, $vf16z
    ctx->pc = 0x1383ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383d0: 0x4bf0240b  vmaddw.xyzw $vf16, $vf4, $vf16w
    ctx->pc = 0x1383d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1383d4: 0x4bedf7ab  vmax.xyzw   $vf30, $vf30, $vf13
    ctx->pc = 0x1383d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1383d8: 0x4bedffef  vmini.xyzw  $vf31, $vf31, $vf13
    ctx->pc = 0x1383d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1383dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1383dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1383e0: 0x4b80739c  vmulq.xy    $vf14, $vf14, $Q
    ctx->pc = 0x1383e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1383e4: 0x4bf903bc  vdiv        $Q, $vf0w, $vf25w
    ctx->pc = 0x1383e4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x1383e8: 0x4a3a81fd  vabs.w      $vf26, $vf16
    ctx->pc = 0x1383e8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[16], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x1383ec: 0x4bf109bc  vmulax.xyzw $ACC, $vf1, $vf17x
    ctx->pc = 0x1383ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383f0: 0x4bf110bd  vmadday.xyzw $ACC, $vf2, $vf17y
    ctx->pc = 0x1383f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383f4: 0x4bf118be  vmaddaz.xyzw $ACC, $vf3, $vf17z
    ctx->pc = 0x1383f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  ctx->vu0_acc = res; }
    // 0x1383f8: 0x4bf1244b  vmaddw.xyzw $vf17, $vf4, $vf17w
    ctx->pc = 0x1383f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1383fc: 0x4beef7ab  vmax.xyzw   $vf30, $vf30, $vf14
    ctx->pc = 0x1383fcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x138400: 0x4beeffef  vmini.xyzw  $vf31, $vf31, $vf14
    ctx->pc = 0x138400u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x138404: 0x4a0003bf  vwaitq
    ctx->pc = 0x138404u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138408: 0x4b807bdc  vmulq.xy    $vf15, $vf15, $Q
    ctx->pc = 0x138408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13840c: 0x4bfa03bc  vdiv        $Q, $vf0w, $vf26w
    ctx->pc = 0x13840cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138410: 0x4a3b89fd  vabs.w      $vf27, $vf17
    ctx->pc = 0x138410u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[17], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x138414: 0x4a0002ff  vnop
    ctx->pc = 0x138414u;
    // NOP operation, no action needed for VU0
    // 0x138418: 0x4beff7ab  vmax.xyzw   $vf30, $vf30, $vf15
    ctx->pc = 0x138418u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x13841c: 0x4befffef  vmini.xyzw  $vf31, $vf31, $vf15
    ctx->pc = 0x13841cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x138420: 0x4a0002ff  vnop
    ctx->pc = 0x138420u;
    // NOP operation, no action needed for VU0
    // 0x138424: 0x4a0003bf  vwaitq
    ctx->pc = 0x138424u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138428: 0x4b80841c  vmulq.xy    $vf16, $vf16, $Q
    ctx->pc = 0x138428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x13842c: 0x4bfb03bc  vdiv        $Q, $vf0w, $vf27w
    ctx->pc = 0x13842cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2_vu_divq(fs, ft); }
    // 0x138430: 0x4a0002ff  vnop
    ctx->pc = 0x138430u;
    // NOP operation, no action needed for VU0
    // 0x138434: 0x4bf0f7ab  vmax.xyzw   $vf30, $vf30, $vf16
    ctx->pc = 0x138434u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x138438: 0x4bf0ffef  vmini.xyzw  $vf31, $vf31, $vf16
    ctx->pc = 0x138438u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x13843c: 0x4a0002ff  vnop
    ctx->pc = 0x13843cu;
    // NOP operation, no action needed for VU0
    // 0x138440: 0x4a0002ff  vnop
    ctx->pc = 0x138440u;
    // NOP operation, no action needed for VU0
    // 0x138444: 0x4a0003bf  vwaitq
    ctx->pc = 0x138444u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138448: 0x4b808c5c  vmulq.xy    $vf17, $vf17, $Q
    ctx->pc = 0x138448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_set1_ps(ctx->vu0_q)); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, -1, -1)); uint32_t vu_active = 0x3u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x13844c: 0x4bf1f7ab  vmax.xyzw   $vf30, $vf30, $vf17
    ctx->pc = 0x13844cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x138450: 0x4bf1ffef  vmini.xyzw  $vf31, $vf31, $vf17
    ctx->pc = 0x138450u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[31], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x138454: 0xf87e0000  sqc2        $vf30, 0x0($v1)
    ctx->pc = 0x138454u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x138458: 0xf85f0000  sqc2        $vf31, 0x0($v0)
    ctx->pc = 0x138458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x13845c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x13845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x138460: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x138460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x138464: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x138464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138468: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x13846c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x13846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138470: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x138470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138474: 0x41023  negu        $v0, $a0
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x138478: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x138478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13847c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x13847cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x138480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138484: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x138484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x138488: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x138488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13848c: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x13848cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x138490: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x138490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x138494: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x138494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138498: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x138498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13849c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x13849cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1384a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1384a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1384a4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1384a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1384a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1384a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1384ac: 0x0  nop
    ctx->pc = 0x1384acu;
    // NOP
    // 0x1384b0: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1384B0u;
    {
        const bool branch_taken_0x1384b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1384B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384B0u;
            // 0x1384b4: 0x46012040  add.s       $f1, $f4, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384b0) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x1384B8u;
    // 0x1384b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1384b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384bc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1384bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1384c0: 0x0  nop
    ctx->pc = 0x1384c0u;
    // NOP
    // 0x1384c4: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x1384C4u;
    {
        const bool branch_taken_0x1384c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1384c4) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x1384CCu;
    // 0x1384cc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1384ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1384d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1384d4: 0x0  nop
    ctx->pc = 0x1384d4u;
    // NOP
    // 0x1384d8: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1384D8u;
    {
        const bool branch_taken_0x1384d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1384d8) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x1384E0u;
    // 0x1384e0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1384e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384e4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1384e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1384e8: 0x0  nop
    ctx->pc = 0x1384e8u;
    // NOP
    // 0x1384ec: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1384ECu;
    {
        const bool branch_taken_0x1384ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1384ec) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x1384F4u;
    // 0x1384f4: 0xc6410e88  lwc1        $f1, 0xE88($s2)
    ctx->pc = 0x1384f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1384f8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1384f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1384fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138500: 0x0  nop
    ctx->pc = 0x138500u;
    // NOP
    // 0x138504: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x138504u;
    {
        const bool branch_taken_0x138504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138504) {
            ctx->pc = 0x1385ACu;
            goto label_1385ac;
        }
    }
    ctx->pc = 0x13850Cu;
    // 0x13850c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138510: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138510u;
    {
        const bool branch_taken_0x138510 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x138514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138510u;
            // 0x138514: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138510) {
            ctx->pc = 0x138520u;
            goto label_138520;
        }
    }
    ctx->pc = 0x138518u;
    // 0x138518: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13851c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138520:
    // 0x138520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138524: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x138524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x138528: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x138528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13852c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13852cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138530: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x138534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138538: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138538u;
    {
        const bool branch_taken_0x138538 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138538u;
            // 0x13853c: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138538) {
            ctx->pc = 0x138548u;
            goto label_138548;
        }
    }
    ctx->pc = 0x138540u;
    // 0x138540: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138544: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x138544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138548:
    // 0x138548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13854c: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x13854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x138550: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x138550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138554: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x138554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138558: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13855c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13855cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138560: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138560u;
    {
        const bool branch_taken_0x138560 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138560u;
            // 0x138564: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138560) {
            ctx->pc = 0x138570u;
            goto label_138570;
        }
    }
    ctx->pc = 0x138568u;
    // 0x138568: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x138568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13856c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13856cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138570:
    // 0x138570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138574: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x138578: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x138578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13857c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13857cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138580: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x138584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138588: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138588u;
    {
        const bool branch_taken_0x138588 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138588u;
            // 0x13858c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138588) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x138590u;
    // 0x138590: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138594: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x138594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138598:
    // 0x138598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13859c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x13859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1385a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1385a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1385a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1385a8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1385a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1385ac:
    // 0x1385ac: 0x0  nop
    ctx->pc = 0x1385acu;
    // NOP
    // 0x1385b0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1385B0u;
    {
        const bool branch_taken_0x1385b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385B0u;
            // 0x1385b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385b0) {
            ctx->pc = 0x1385CCu;
            goto label_1385cc;
        }
    }
    ctx->pc = 0x1385B8u;
    // 0x1385b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1385B8u;
    SET_GPR_U32(ctx, 31, 0x1385C0u);
    ctx->pc = 0x1385BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1385B8u;
            // 0x1385bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385C0u; }
        if (ctx->pc != 0x1385C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385C0u; }
        if (ctx->pc != 0x1385C0u) { return; }
    }
    ctx->pc = 0x1385C0u;
label_1385c0:
    // 0x1385c0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1385c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1385c4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1385C4u;
    SET_GPR_U32(ctx, 31, 0x1385CCu);
    ctx->pc = 0x1385C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1385C4u;
            // 0x1385c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385CCu; }
        if (ctx->pc != 0x1385CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385CCu; }
        if (ctx->pc != 0x1385CCu) { return; }
    }
    ctx->pc = 0x1385CCu;
label_1385cc:
    // 0x1385cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1385ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1385d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1385d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1385d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1385D4u;
    {
        const bool branch_taken_0x1385d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385D4u;
            // 0x1385d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385d4) {
            ctx->pc = 0x1385E4u;
            goto label_1385e4;
        }
    }
    ctx->pc = 0x1385DCu;
    // 0x1385dc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1385DCu;
    {
        const bool branch_taken_0x1385dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385DCu;
            // 0x1385e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385dc) {
            ctx->pc = 0x1386A4u;
            goto label_1386a4;
        }
    }
    ctx->pc = 0x1385E4u;
label_1385e4:
    // 0x1385e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1385E4u;
    {
        const bool branch_taken_0x1385e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385E4u;
            // 0x1385e8: 0x8e900058  lw          $s0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e4) {
            ctx->pc = 0x138680u;
            goto label_138680;
        }
    }
    ctx->pc = 0x1385ECu;
label_1385ec:
    // 0x1385ec: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1385f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1385F0u;
    {
        const bool branch_taken_0x1385f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385F0u;
            // 0x1385f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385f0) {
            ctx->pc = 0x13860Cu;
            goto label_13860c;
        }
    }
    ctx->pc = 0x1385F8u;
    // 0x1385f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1385fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1385fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x138600: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138600u;
    {
        const bool branch_taken_0x138600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138600) {
            ctx->pc = 0x13860Cu;
            goto label_13860c;
        }
    }
    ctx->pc = 0x138608u;
    // 0x138608: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x138608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13860c:
    // 0x13860c: 0x0  nop
    ctx->pc = 0x13860cu;
    // NOP
    // 0x138610: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x138610u;
    {
        const bool branch_taken_0x138610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138610u;
            // 0x138614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138610) {
            ctx->pc = 0x138674u;
            goto label_138674;
        }
    }
    ctx->pc = 0x138618u;
    // 0x138618: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13861c: 0xc04e070  jal         func_1381C0
    ctx->pc = 0x13861Cu;
    SET_GPR_U32(ctx, 31, 0x138624u);
    ctx->pc = 0x138620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13861Cu;
            // 0x138620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C0u;
    goto label_1381c0;
    ctx->pc = 0x138624u;
label_138624:
    // 0x138624: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x138624u;
    {
        const bool branch_taken_0x138624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138624) {
            ctx->pc = 0x138674u;
            goto label_138674;
        }
    }
    ctx->pc = 0x13862Cu;
    // 0x13862c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13862Cu;
    {
        const bool branch_taken_0x13862c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x138630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13862Cu;
            // 0x138630: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13862c) {
            ctx->pc = 0x138650u;
            goto label_138650;
        }
    }
    ctx->pc = 0x138634u;
    // 0x138634: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138634u;
    SET_GPR_U32(ctx, 31, 0x13863Cu);
    ctx->pc = 0x138638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138634u;
            // 0x138638: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13863Cu; }
        if (ctx->pc != 0x13863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13863Cu; }
        if (ctx->pc != 0x13863Cu) { return; }
    }
    ctx->pc = 0x13863Cu;
label_13863c:
    // 0x13863c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138640: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138640u;
    SET_GPR_U32(ctx, 31, 0x138648u);
    ctx->pc = 0x138644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138640u;
            // 0x138644: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138648u; }
        if (ctx->pc != 0x138648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138648u; }
        if (ctx->pc != 0x138648u) { return; }
    }
    ctx->pc = 0x138648u;
label_138648:
    // 0x138648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138648u;
    {
        const bool branch_taken_0x138648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138648) {
            ctx->pc = 0x13866Cu;
            goto label_13866c;
        }
    }
    ctx->pc = 0x138650u;
label_138650:
    // 0x138650: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138654: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138658: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x138658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13865c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x13865cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138660: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x138664: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x138664u;
    SET_GPR_U32(ctx, 31, 0x13866Cu);
    ctx->pc = 0x138668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138664u;
            // 0x138668: 0x27a90110  addiu       $t1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13866Cu; }
        if (ctx->pc != 0x13866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13866Cu; }
        if (ctx->pc != 0x13866Cu) { return; }
    }
    ctx->pc = 0x13866Cu;
label_13866c:
    // 0x13866c: 0x0  nop
    ctx->pc = 0x13866cu;
    // NOP
    // 0x138670: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x138670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138674:
    // 0x138674: 0x0  nop
    ctx->pc = 0x138674u;
    // NOP
    // 0x138678: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x138678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x13867c: 0x0  nop
    ctx->pc = 0x13867cu;
    // NOP
label_138680:
    // 0x138680: 0x1600ffda  bnez        $s0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x138680u;
    {
        const bool branch_taken_0x138680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x138684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138680u;
            // 0x138684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138680) {
            ctx->pc = 0x1385ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1385ec;
        }
    }
    ctx->pc = 0x138688u;
    // 0x138688: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138688u;
    SET_GPR_U32(ctx, 31, 0x138690u);
    ctx->pc = 0x13868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138688u;
            // 0x13868c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138690u; }
        if (ctx->pc != 0x138690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138690u; }
        if (ctx->pc != 0x138690u) { return; }
    }
    ctx->pc = 0x138690u;
label_138690:
    // 0x138690: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x138690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x138694: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138694u;
    SET_GPR_U32(ctx, 31, 0x13869Cu);
    ctx->pc = 0x138698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138694u;
            // 0x138698: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13869Cu; }
        if (ctx->pc != 0x13869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13869Cu; }
        if (ctx->pc != 0x13869Cu) { return; }
    }
    ctx->pc = 0x13869Cu;
label_13869c:
    // 0x13869c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13869cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1386a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1386a4:
    // 0x1386a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1386a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1386a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1386a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1386ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1386acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1386b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1386b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1386b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1386b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1386b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1386B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1386BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386B8u;
            // 0x1386bc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1386C0u;
}
