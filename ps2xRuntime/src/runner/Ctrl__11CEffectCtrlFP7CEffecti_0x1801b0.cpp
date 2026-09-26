#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Ctrl__11CEffectCtrlFP7CEffecti
// Address: 0x1801b0 - 0x180e54
void Ctrl__11CEffectCtrlFP7CEffecti_0x1801b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ctrl__11CEffectCtrlFP7CEffecti_0x1801b0");
#endif

    switch (ctx->pc) {
        case 0x180260u: goto label_180260;
        case 0x180268u: goto label_180268;
        case 0x180284u: goto label_180284;
        case 0x18028cu: goto label_18028c;
        case 0x180310u: goto label_180310;
        case 0x180318u: goto label_180318;
        case 0x180334u: goto label_180334;
        case 0x18033cu: goto label_18033c;
        case 0x18034cu: goto label_18034c;
        case 0x180354u: goto label_180354;
        case 0x1803a0u: goto label_1803a0;
        case 0x1803a8u: goto label_1803a8;
        case 0x1803c4u: goto label_1803c4;
        case 0x1803ccu: goto label_1803cc;
        case 0x180424u: goto label_180424;
        case 0x18043cu: goto label_18043c;
        case 0x18044cu: goto label_18044c;
        case 0x18045cu: goto label_18045c;
        case 0x180478u: goto label_180478;
        case 0x18048cu: goto label_18048c;
        case 0x1804a0u: goto label_1804a0;
        case 0x1804b8u: goto label_1804b8;
        case 0x1804dcu: goto label_1804dc;
        case 0x1804e8u: goto label_1804e8;
        case 0x180524u: goto label_180524;
        case 0x18053cu: goto label_18053c;
        case 0x18054cu: goto label_18054c;
        case 0x18055cu: goto label_18055c;
        case 0x180578u: goto label_180578;
        case 0x18058cu: goto label_18058c;
        case 0x1805a0u: goto label_1805a0;
        case 0x1805e4u: goto label_1805e4;
        case 0x1805fcu: goto label_1805fc;
        case 0x18060cu: goto label_18060c;
        case 0x18061cu: goto label_18061c;
        case 0x180638u: goto label_180638;
        case 0x18064cu: goto label_18064c;
        case 0x180660u: goto label_180660;
        case 0x1806a4u: goto label_1806a4;
        case 0x1806bcu: goto label_1806bc;
        case 0x1806ccu: goto label_1806cc;
        case 0x1806dcu: goto label_1806dc;
        case 0x1806f8u: goto label_1806f8;
        case 0x18070cu: goto label_18070c;
        case 0x180720u: goto label_180720;
        case 0x180764u: goto label_180764;
        case 0x18077cu: goto label_18077c;
        case 0x18078cu: goto label_18078c;
        case 0x18079cu: goto label_18079c;
        case 0x1807b8u: goto label_1807b8;
        case 0x1807ccu: goto label_1807cc;
        case 0x1807e0u: goto label_1807e0;
        case 0x18083cu: goto label_18083c;
        case 0x180854u: goto label_180854;
        case 0x180864u: goto label_180864;
        case 0x180880u: goto label_180880;
        case 0x180894u: goto label_180894;
        case 0x1808d4u: goto label_1808d4;
        case 0x1808ecu: goto label_1808ec;
        case 0x1808fcu: goto label_1808fc;
        case 0x180918u: goto label_180918;
        case 0x18092cu: goto label_18092c;
        case 0x18096cu: goto label_18096c;
        case 0x180984u: goto label_180984;
        case 0x180994u: goto label_180994;
        case 0x1809a4u: goto label_1809a4;
        case 0x1809c0u: goto label_1809c0;
        case 0x1809d4u: goto label_1809d4;
        case 0x1809e8u: goto label_1809e8;
        case 0x180a2cu: goto label_180a2c;
        case 0x180a44u: goto label_180a44;
        case 0x180a54u: goto label_180a54;
        case 0x180a64u: goto label_180a64;
        case 0x180a80u: goto label_180a80;
        case 0x180a94u: goto label_180a94;
        case 0x180aa8u: goto label_180aa8;
        case 0x180b14u: goto label_180b14;
        case 0x180b30u: goto label_180b30;
        case 0x180b84u: goto label_180b84;
        case 0x180ba0u: goto label_180ba0;
        case 0x180bf4u: goto label_180bf4;
        case 0x180c10u: goto label_180c10;
        case 0x180c48u: goto label_180c48;
        case 0x180dc0u: goto label_180dc0;
        case 0x180de8u: goto label_180de8;
        case 0x180e08u: goto label_180e08;
        default: break;
    }

    ctx->pc = 0x1801b0u;

    // 0x1801b0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1801b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1801b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1801b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1801b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1801bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1801bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1801c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1801c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1801c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1801c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1801c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1801ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1801d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1801d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1801d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1801d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1801d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1801dc: 0x10600314  beqz        $v1, . + 4 + (0x314 << 2)
    ctx->pc = 0x1801DCu;
    {
        const bool branch_taken_0x1801dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801DCu;
            // 0x1801e0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801dc) {
            ctx->pc = 0x180E30u;
            goto label_180e30;
        }
    }
    ctx->pc = 0x1801E4u;
    // 0x1801e4: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1801e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1801E8u;
    {
        const bool branch_taken_0x1801e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801e8) {
            ctx->pc = 0x1801F8u;
            goto label_1801f8;
        }
    }
    ctx->pc = 0x1801F0u;
    // 0x1801f0: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x1801F0u;
    {
        const bool branch_taken_0x1801f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801F0u;
            // 0x1801f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801f0) {
            ctx->pc = 0x180E34u;
            goto label_180e34;
        }
    }
    ctx->pc = 0x1801F8u;
label_1801f8:
    // 0x1801f8: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1801fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1801fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180200: 0x14650031  bne         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x180200u;
    {
        const bool branch_taken_0x180200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x180200) {
            ctx->pc = 0x1802C8u;
            goto label_1802c8;
        }
    }
    ctx->pc = 0x180208u;
    // 0x180208: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x18020c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x180210: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x180210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x180214: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x180218: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x18021c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x18021cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x180220: 0x14600303  bnez        $v1, . + 4 + (0x303 << 2)
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180220) {
            ctx->pc = 0x180E30u;
            goto label_180e30;
        }
    }
    ctx->pc = 0x180228u;
    // 0x180228: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x18022c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180230: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x180230u;
    {
        const bool branch_taken_0x180230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180230) {
            ctx->pc = 0x180270u;
            goto label_180270;
        }
    }
    ctx->pc = 0x180238u;
    // 0x180238: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180238u;
    {
        const bool branch_taken_0x180238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x180238) {
            ctx->pc = 0x180250u;
            goto label_180250;
        }
    }
    ctx->pc = 0x180240u;
    // 0x180240: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x180240u;
    {
        const bool branch_taken_0x180240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x180240) {
            ctx->pc = 0x180290u;
            goto label_180290;
        }
    }
    ctx->pc = 0x180248u;
    // 0x180248: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x180248u;
    {
        const bool branch_taken_0x180248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180248u;
            // 0x18024c: 0xaea00050  sw          $zero, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180248) {
            ctx->pc = 0x180294u;
            goto label_180294;
        }
    }
    ctx->pc = 0x180250u;
label_180250:
    // 0x180250: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x180250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180254: 0xc6ad0058  lwc1        $f13, 0x58($s5)
    ctx->pc = 0x180254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180258: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180258u;
    SET_GPR_U32(ctx, 31, 0x180260u);
    ctx->pc = 0x18025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180258u;
            // 0x18025c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180260u; }
        if (ctx->pc != 0x180260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180260u; }
        if (ctx->pc != 0x180260u) { return; }
    }
    ctx->pc = 0x180260u;
label_180260:
    // 0x180260: 0xc0a248c  jal         func_289230
    ctx->pc = 0x180260u;
    SET_GPR_U32(ctx, 31, 0x180268u);
    ctx->pc = 0x180264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180260u;
            // 0x180264: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180268u; }
        if (ctx->pc != 0x180268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180268u; }
        if (ctx->pc != 0x180268u) { return; }
    }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180268u;
    {
        const bool branch_taken_0x180268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180268u;
            // 0x18026c: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180268) {
            ctx->pc = 0x180290u;
            goto label_180290;
        }
    }
    ctx->pc = 0x180270u;
label_180270:
    // 0x180270: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x180270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180274: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x180278: 0xc6ad0058  lwc1        $f13, 0x58($s5)
    ctx->pc = 0x180278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18027c: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x18027Cu;
    SET_GPR_U32(ctx, 31, 0x180284u);
    ctx->pc = 0x180280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18027Cu;
            // 0x180280: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180284u; }
        if (ctx->pc != 0x180284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180284u; }
        if (ctx->pc != 0x180284u) { return; }
    }
    ctx->pc = 0x180284u;
label_180284:
    // 0x180284: 0xc0a248c  jal         func_289230
    ctx->pc = 0x180284u;
    SET_GPR_U32(ctx, 31, 0x18028Cu);
    ctx->pc = 0x180288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180284u;
            // 0x180288: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18028Cu; }
        if (ctx->pc != 0x18028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18028Cu; }
        if (ctx->pc != 0x18028Cu) { return; }
    }
    ctx->pc = 0x18028Cu;
label_18028c:
    // 0x18028c: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x18028cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_180290:
    // 0x180290: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x180290u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
label_180294:
    // 0x180294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180298: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x18029c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1802a0: 0xaea40064  sw          $a0, 0x64($s5)
    ctx->pc = 0x1802a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 4));
    // 0x1802a4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1802a8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1802A8u;
    {
        const bool branch_taken_0x1802a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1802a8) {
            ctx->pc = 0x1802CCu;
            goto label_1802cc;
        }
    }
    ctx->pc = 0x1802B0u;
    // 0x1802b0: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1802b4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1802b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1802b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1802B8u;
    {
        const bool branch_taken_0x1802b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1802b8) {
            ctx->pc = 0x1802CCu;
            goto label_1802cc;
        }
    }
    ctx->pc = 0x1802C0u;
    // 0x1802c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1802C0u;
    {
        const bool branch_taken_0x1802c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802C0u;
            // 0x1802c4: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802c0) {
            ctx->pc = 0x1802CCu;
            goto label_1802cc;
        }
    }
    ctx->pc = 0x1802C8u;
label_1802c8:
    // 0x1802c8: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1802c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_1802cc:
    // 0x1802cc: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1802d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1802d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1802d4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1802D4u;
    {
        const bool branch_taken_0x1802d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1802d4) {
            ctx->pc = 0x180320u;
            goto label_180320;
        }
    }
    ctx->pc = 0x1802DCu;
    // 0x1802dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1802e0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1802E0u;
    {
        const bool branch_taken_0x1802e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1802e0) {
            ctx->pc = 0x180300u;
            goto label_180300;
        }
    }
    ctx->pc = 0x1802E8u;
    // 0x1802e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1802E8u;
    {
        const bool branch_taken_0x1802e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802e8) {
            ctx->pc = 0x1802F8u;
            goto label_1802f8;
        }
    }
    ctx->pc = 0x1802F0u;
    // 0x1802f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1802F0u;
    {
        const bool branch_taken_0x1802f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802F0u;
            // 0x1802f4: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802f0) {
            ctx->pc = 0x180344u;
            goto label_180344;
        }
    }
    ctx->pc = 0x1802F8u;
label_1802f8:
    // 0x1802f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1802F8u;
    {
        const bool branch_taken_0x1802f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802F8u;
            // 0x1802fc: 0x8eb10024  lw          $s1, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802f8) {
            ctx->pc = 0x180340u;
            goto label_180340;
        }
    }
    ctx->pc = 0x180300u;
label_180300:
    // 0x180300: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x180300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180304: 0xc6ad002c  lwc1        $f13, 0x2C($s5)
    ctx->pc = 0x180304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180308: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180308u;
    SET_GPR_U32(ctx, 31, 0x180310u);
    ctx->pc = 0x18030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180308u;
            // 0x18030c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180310u; }
        if (ctx->pc != 0x180310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180310u; }
        if (ctx->pc != 0x180310u) { return; }
    }
    ctx->pc = 0x180310u;
label_180310:
    // 0x180310: 0xc0a248c  jal         func_289230
    ctx->pc = 0x180310u;
    SET_GPR_U32(ctx, 31, 0x180318u);
    ctx->pc = 0x180314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180310u;
            // 0x180314: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180318u; }
        if (ctx->pc != 0x180318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180318u; }
        if (ctx->pc != 0x180318u) { return; }
    }
    ctx->pc = 0x180318u;
label_180318:
    // 0x180318: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180318u;
    {
        const bool branch_taken_0x180318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180318u;
            // 0x18031c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180318) {
            ctx->pc = 0x180340u;
            goto label_180340;
        }
    }
    ctx->pc = 0x180320u;
label_180320:
    // 0x180320: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x180320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180324: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x180328: 0xc6ad002c  lwc1        $f13, 0x2C($s5)
    ctx->pc = 0x180328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18032c: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x18032Cu;
    SET_GPR_U32(ctx, 31, 0x180334u);
    ctx->pc = 0x180330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18032Cu;
            // 0x180330: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180334u; }
        if (ctx->pc != 0x180334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180334u; }
        if (ctx->pc != 0x180334u) { return; }
    }
    ctx->pc = 0x180334u;
label_180334:
    // 0x180334: 0xc0a248c  jal         func_289230
    ctx->pc = 0x180334u;
    SET_GPR_U32(ctx, 31, 0x18033Cu);
    ctx->pc = 0x180338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180334u;
            // 0x180338: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18033Cu; }
        if (ctx->pc != 0x18033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18033Cu; }
        if (ctx->pc != 0x18033Cu) { return; }
    }
    ctx->pc = 0x18033Cu;
label_18033c:
    // 0x18033c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18033cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180340:
    // 0x180340: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x180340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_180344:
    // 0x180344: 0x102002ba  beqz        $at, . + 4 + (0x2BA << 2)
    ctx->pc = 0x180344u;
    {
        const bool branch_taken_0x180344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180344u;
            // 0x180348: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180344) {
            ctx->pc = 0x180E30u;
            goto label_180e30;
        }
    }
    ctx->pc = 0x18034Cu;
label_18034c:
    // 0x18034c: 0xc05fd60  jal         func_17F580
    ctx->pc = 0x18034Cu;
    SET_GPR_U32(ctx, 31, 0x180354u);
    ctx->pc = 0x180350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18034Cu;
            // 0x180350: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F580u;
    if (runtime->hasFunction(0x17F580u)) {
        auto targetFn = runtime->lookupFunction(0x17F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180354u; }
        if (ctx->pc != 0x180354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEffectParam__FP12EFFECT_PARAM_0x17f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180354u; }
        if (ctx->pc != 0x180354u) { return; }
    }
    ctx->pc = 0x180354u;
label_180354:
    // 0x180354: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x180358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18035c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18035Cu;
    {
        const bool branch_taken_0x18035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18035c) {
            ctx->pc = 0x1803B0u;
            goto label_1803b0;
        }
    }
    ctx->pc = 0x180364u;
    // 0x180364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180368: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180368u;
    {
        const bool branch_taken_0x180368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180368) {
            ctx->pc = 0x18038Cu;
            goto label_18038c;
        }
    }
    ctx->pc = 0x180370u;
    // 0x180370: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180370u;
    {
        const bool branch_taken_0x180370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180370) {
            ctx->pc = 0x180380u;
            goto label_180380;
        }
    }
    ctx->pc = 0x180378u;
    // 0x180378: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x180378u;
    {
        const bool branch_taken_0x180378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180378) {
            ctx->pc = 0x1803D0u;
            goto label_1803d0;
        }
    }
    ctx->pc = 0x180380u;
label_180380:
    // 0x180380: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x180380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x180384: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x180384u;
    {
        const bool branch_taken_0x180384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180384u;
            // 0x180388: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180384) {
            ctx->pc = 0x1803D0u;
            goto label_1803d0;
        }
    }
    ctx->pc = 0x18038Cu;
label_18038c:
    // 0x18038c: 0x0  nop
    ctx->pc = 0x18038cu;
    // NOP
    // 0x180390: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x180390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180394: 0xc6ad003c  lwc1        $f13, 0x3C($s5)
    ctx->pc = 0x180394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180398: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180398u;
    SET_GPR_U32(ctx, 31, 0x1803A0u);
    ctx->pc = 0x18039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180398u;
            // 0x18039c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A0u; }
        if (ctx->pc != 0x1803A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A0u; }
        if (ctx->pc != 0x1803A0u) { return; }
    }
    ctx->pc = 0x1803A0u;
label_1803a0:
    // 0x1803a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1803A0u;
    SET_GPR_U32(ctx, 31, 0x1803A8u);
    ctx->pc = 0x1803A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803A0u;
            // 0x1803a4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A8u; }
        if (ctx->pc != 0x1803A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A8u; }
        if (ctx->pc != 0x1803A8u) { return; }
    }
    ctx->pc = 0x1803A8u;
label_1803a8:
    // 0x1803a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1803A8u;
    {
        const bool branch_taken_0x1803a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803A8u;
            // 0x1803ac: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803a8) {
            ctx->pc = 0x1803D0u;
            goto label_1803d0;
        }
    }
    ctx->pc = 0x1803B0u;
label_1803b0:
    // 0x1803b0: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1803b4: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x1803b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803b8: 0xc6ad003c  lwc1        $f13, 0x3C($s5)
    ctx->pc = 0x1803b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1803bc: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1803BCu;
    SET_GPR_U32(ctx, 31, 0x1803C4u);
    ctx->pc = 0x1803C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803BCu;
            // 0x1803c0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803C4u; }
        if (ctx->pc != 0x1803C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803C4u; }
        if (ctx->pc != 0x1803C4u) { return; }
    }
    ctx->pc = 0x1803C4u;
label_1803c4:
    // 0x1803c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1803C4u;
    SET_GPR_U32(ctx, 31, 0x1803CCu);
    ctx->pc = 0x1803C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803C4u;
            // 0x1803c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803CCu; }
        if (ctx->pc != 0x1803CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803CCu; }
        if (ctx->pc != 0x1803CCu) { return; }
    }
    ctx->pc = 0x1803CCu;
label_1803cc:
    // 0x1803cc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1803ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1803d0:
    // 0x1803d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803d4: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x1803d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1803d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1803dc: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x1803dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803e0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1803e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1803e4: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1803e8: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1803e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1803ec: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1803ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1803f0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1803F0u;
    {
        const bool branch_taken_0x1803f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1803f0) {
            ctx->pc = 0x180464u;
            goto label_180464;
        }
    }
    ctx->pc = 0x1803F8u;
    // 0x1803f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1803fc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1803FCu;
    {
        const bool branch_taken_0x1803fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1803fc) {
            ctx->pc = 0x18042Cu;
            goto label_18042c;
        }
    }
    ctx->pc = 0x180404u;
    // 0x180404: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180404u;
    {
        const bool branch_taken_0x180404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180404) {
            ctx->pc = 0x180414u;
            goto label_180414;
        }
    }
    ctx->pc = 0x18040Cu;
    // 0x18040c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18040Cu;
    {
        const bool branch_taken_0x18040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18040c) {
            ctx->pc = 0x1804A4u;
            goto label_1804a4;
        }
    }
    ctx->pc = 0x180414u;
label_180414:
    // 0x180414: 0x0  nop
    ctx->pc = 0x180414u;
    // NOP
    // 0x180418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18041c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18041Cu;
    SET_GPR_U32(ctx, 31, 0x180424u);
    ctx->pc = 0x180420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18041Cu;
            // 0x180420: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180424u; }
        if (ctx->pc != 0x180424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180424u; }
        if (ctx->pc != 0x180424u) { return; }
    }
    ctx->pc = 0x180424u;
label_180424:
    // 0x180424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180424u;
    {
        const bool branch_taken_0x180424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180424) {
            ctx->pc = 0x1804A4u;
            goto label_1804a4;
        }
    }
    ctx->pc = 0x18042Cu;
label_18042c:
    // 0x18042c: 0x0  nop
    ctx->pc = 0x18042cu;
    // NOP
    // 0x180430: 0xc6ad0090  lwc1        $f13, 0x90($s5)
    ctx->pc = 0x180430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180434: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180434u;
    SET_GPR_U32(ctx, 31, 0x18043Cu);
    ctx->pc = 0x180438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180434u;
            // 0x180438: 0xc6ac0070  lwc1        $f12, 0x70($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18043Cu; }
        if (ctx->pc != 0x18043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18043Cu; }
        if (ctx->pc != 0x18043Cu) { return; }
    }
    ctx->pc = 0x18043Cu;
label_18043c:
    // 0x18043c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x18043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x180440: 0xc6ad0094  lwc1        $f13, 0x94($s5)
    ctx->pc = 0x180440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180444: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180444u;
    SET_GPR_U32(ctx, 31, 0x18044Cu);
    ctx->pc = 0x180448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180444u;
            // 0x180448: 0xc6ac0074  lwc1        $f12, 0x74($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18044Cu; }
        if (ctx->pc != 0x18044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18044Cu; }
        if (ctx->pc != 0x18044Cu) { return; }
    }
    ctx->pc = 0x18044Cu;
label_18044c:
    // 0x18044c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x180450: 0xc6ad0098  lwc1        $f13, 0x98($s5)
    ctx->pc = 0x180450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180454: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180454u;
    SET_GPR_U32(ctx, 31, 0x18045Cu);
    ctx->pc = 0x180458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180454u;
            // 0x180458: 0xc6ac0078  lwc1        $f12, 0x78($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18045Cu; }
        if (ctx->pc != 0x18045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18045Cu; }
        if (ctx->pc != 0x18045Cu) { return; }
    }
    ctx->pc = 0x18045Cu;
label_18045c:
    // 0x18045c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18045Cu;
    {
        const bool branch_taken_0x18045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18045Cu;
            // 0x180460: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18045c) {
            ctx->pc = 0x1804A4u;
            goto label_1804a4;
        }
    }
    ctx->pc = 0x180464u;
label_180464:
    // 0x180464: 0x0  nop
    ctx->pc = 0x180464u;
    // NOP
    // 0x180468: 0xc6ac0070  lwc1        $f12, 0x70($s5)
    ctx->pc = 0x180468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18046c: 0xc6ad0090  lwc1        $f13, 0x90($s5)
    ctx->pc = 0x18046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180470: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180470u;
    SET_GPR_U32(ctx, 31, 0x180478u);
    ctx->pc = 0x180474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180470u;
            // 0x180474: 0x8ea400a0  lw          $a0, 0xA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180478u; }
        if (ctx->pc != 0x180478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180478u; }
        if (ctx->pc != 0x180478u) { return; }
    }
    ctx->pc = 0x180478u;
label_180478:
    // 0x180478: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x180478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18047c: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x180480: 0xc6ad0094  lwc1        $f13, 0x94($s5)
    ctx->pc = 0x180480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180484: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180484u;
    SET_GPR_U32(ctx, 31, 0x18048Cu);
    ctx->pc = 0x180488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180484u;
            // 0x180488: 0xc6ac0074  lwc1        $f12, 0x74($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18048Cu; }
        if (ctx->pc != 0x18048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18048Cu; }
        if (ctx->pc != 0x18048Cu) { return; }
    }
    ctx->pc = 0x18048Cu;
label_18048c:
    // 0x18048c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x180490: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x180490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x180494: 0xc6ad0098  lwc1        $f13, 0x98($s5)
    ctx->pc = 0x180494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180498: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180498u;
    SET_GPR_U32(ctx, 31, 0x1804A0u);
    ctx->pc = 0x18049Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180498u;
            // 0x18049c: 0xc6ac0078  lwc1        $f12, 0x78($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804A0u; }
        if (ctx->pc != 0x1804A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804A0u; }
        if (ctx->pc != 0x1804A0u) { return; }
    }
    ctx->pc = 0x1804A0u;
label_1804a0:
    // 0x1804a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1804a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1804a4:
    // 0x1804a4: 0x0  nop
    ctx->pc = 0x1804a4u;
    // NOP
    // 0x1804a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1804ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1804acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804b0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1804B0u;
    SET_GPR_U32(ctx, 31, 0x1804B8u);
    ctx->pc = 0x1804B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804B0u;
            // 0x1804b4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B8u; }
        if (ctx->pc != 0x1804B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B8u; }
        if (ctx->pc != 0x1804B8u) { return; }
    }
    ctx->pc = 0x1804B8u;
label_1804b8:
    // 0x1804b8: 0x8ea200a4  lw          $v0, 0xA4($s5)
    ctx->pc = 0x1804b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x1804bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1804bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1804c0: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x1804c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1804c4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1804c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1804c8: 0x8ea200a8  lw          $v0, 0xA8($s5)
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x1804cc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1804ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1804d0: 0x8ea200ac  lw          $v0, 0xAC($s5)
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x1804d4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1804D4u;
    SET_GPR_U32(ctx, 31, 0x1804DCu);
    ctx->pc = 0x1804D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804D4u;
            // 0x1804d8: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804DCu; }
        if (ctx->pc != 0x1804DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804DCu; }
        if (ctx->pc != 0x1804DCu) { return; }
    }
    ctx->pc = 0x1804DCu;
label_1804dc:
    // 0x1804dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1804e0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1804E0u;
    SET_GPR_U32(ctx, 31, 0x1804E8u);
    ctx->pc = 0x1804E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804E0u;
            // 0x1804e4: 0x26a500e0  addiu       $a1, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804E8u; }
        if (ctx->pc != 0x1804E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804E8u; }
        if (ctx->pc != 0x1804E8u) { return; }
    }
    ctx->pc = 0x1804E8u;
label_1804e8:
    // 0x1804e8: 0x8ea30110  lw          $v1, 0x110($s5)
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x1804ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1804f0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1804F0u;
    {
        const bool branch_taken_0x1804f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1804f0) {
            ctx->pc = 0x180564u;
            goto label_180564;
        }
    }
    ctx->pc = 0x1804F8u;
    // 0x1804f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1804fc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1804FCu;
    {
        const bool branch_taken_0x1804fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1804fc) {
            ctx->pc = 0x18052Cu;
            goto label_18052c;
        }
    }
    ctx->pc = 0x180504u;
    // 0x180504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180504u;
    {
        const bool branch_taken_0x180504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180504) {
            ctx->pc = 0x180514u;
            goto label_180514;
        }
    }
    ctx->pc = 0x18050Cu;
    // 0x18050c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18050Cu;
    {
        const bool branch_taken_0x18050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18050c) {
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x180514u;
label_180514:
    // 0x180514: 0x0  nop
    ctx->pc = 0x180514u;
    // NOP
    // 0x180518: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18051c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18051Cu;
    SET_GPR_U32(ctx, 31, 0x180524u);
    ctx->pc = 0x180520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18051Cu;
            // 0x180520: 0x26a500b0  addiu       $a1, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180524u; }
        if (ctx->pc != 0x180524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180524u; }
        if (ctx->pc != 0x180524u) { return; }
    }
    ctx->pc = 0x180524u;
label_180524:
    // 0x180524: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180524u;
    {
        const bool branch_taken_0x180524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180524) {
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x18052Cu;
label_18052c:
    // 0x18052c: 0x0  nop
    ctx->pc = 0x18052cu;
    // NOP
    // 0x180530: 0xc6ad0120  lwc1        $f13, 0x120($s5)
    ctx->pc = 0x180530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180534: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180534u;
    SET_GPR_U32(ctx, 31, 0x18053Cu);
    ctx->pc = 0x180538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180534u;
            // 0x180538: 0xc6ac00b0  lwc1        $f12, 0xB0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18053Cu; }
        if (ctx->pc != 0x18053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18053Cu; }
        if (ctx->pc != 0x18053Cu) { return; }
    }
    ctx->pc = 0x18053Cu;
label_18053c:
    // 0x18053c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x180540: 0xc6ad0124  lwc1        $f13, 0x124($s5)
    ctx->pc = 0x180540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180544: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180544u;
    SET_GPR_U32(ctx, 31, 0x18054Cu);
    ctx->pc = 0x180548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180544u;
            // 0x180548: 0xc6ac00b4  lwc1        $f12, 0xB4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18054Cu; }
        if (ctx->pc != 0x18054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18054Cu; }
        if (ctx->pc != 0x18054Cu) { return; }
    }
    ctx->pc = 0x18054Cu;
label_18054c:
    // 0x18054c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18054cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x180550: 0xc6ad0128  lwc1        $f13, 0x128($s5)
    ctx->pc = 0x180550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180554: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180554u;
    SET_GPR_U32(ctx, 31, 0x18055Cu);
    ctx->pc = 0x180558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180554u;
            // 0x180558: 0xc6ac00b8  lwc1        $f12, 0xB8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18055Cu; }
        if (ctx->pc != 0x18055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18055Cu; }
        if (ctx->pc != 0x18055Cu) { return; }
    }
    ctx->pc = 0x18055Cu;
label_18055c:
    // 0x18055c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18055Cu;
    {
        const bool branch_taken_0x18055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18055Cu;
            // 0x180560: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18055c) {
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x180564u;
label_180564:
    // 0x180564: 0x0  nop
    ctx->pc = 0x180564u;
    // NOP
    // 0x180568: 0xc6ac00b0  lwc1        $f12, 0xB0($s5)
    ctx->pc = 0x180568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18056c: 0xc6ad0120  lwc1        $f13, 0x120($s5)
    ctx->pc = 0x18056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180570: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180570u;
    SET_GPR_U32(ctx, 31, 0x180578u);
    ctx->pc = 0x180574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180570u;
            // 0x180574: 0x8ea40160  lw          $a0, 0x160($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180578u; }
        if (ctx->pc != 0x180578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180578u; }
        if (ctx->pc != 0x180578u) { return; }
    }
    ctx->pc = 0x180578u;
label_180578:
    // 0x180578: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x180578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18057c: 0x8ea40160  lw          $a0, 0x160($s5)
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x180580: 0xc6ad0124  lwc1        $f13, 0x124($s5)
    ctx->pc = 0x180580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180584: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180584u;
    SET_GPR_U32(ctx, 31, 0x18058Cu);
    ctx->pc = 0x180588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180584u;
            // 0x180588: 0xc6ac00b4  lwc1        $f12, 0xB4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18058Cu; }
        if (ctx->pc != 0x18058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18058Cu; }
        if (ctx->pc != 0x18058Cu) { return; }
    }
    ctx->pc = 0x18058Cu;
label_18058c:
    // 0x18058c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x180590: 0x8ea40160  lw          $a0, 0x160($s5)
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x180594: 0xc6ad0128  lwc1        $f13, 0x128($s5)
    ctx->pc = 0x180594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180598: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180598u;
    SET_GPR_U32(ctx, 31, 0x1805A0u);
    ctx->pc = 0x18059Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180598u;
            // 0x18059c: 0xc6ac00b8  lwc1        $f12, 0xB8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805A0u; }
        if (ctx->pc != 0x1805A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805A0u; }
        if (ctx->pc != 0x1805A0u) { return; }
    }
    ctx->pc = 0x1805A0u;
label_1805a0:
    // 0x1805a0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1805a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1805a4:
    // 0x1805a4: 0x0  nop
    ctx->pc = 0x1805a4u;
    // NOP
    // 0x1805a8: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
    // 0x1805ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1805b0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1805B0u;
    {
        const bool branch_taken_0x1805b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1805b0) {
            ctx->pc = 0x180624u;
            goto label_180624;
        }
    }
    ctx->pc = 0x1805B8u;
    // 0x1805b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1805b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1805BCu;
    {
        const bool branch_taken_0x1805bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1805bc) {
            ctx->pc = 0x1805ECu;
            goto label_1805ec;
        }
    }
    ctx->pc = 0x1805C4u;
    // 0x1805c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1805C4u;
    {
        const bool branch_taken_0x1805c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805c4) {
            ctx->pc = 0x1805D4u;
            goto label_1805d4;
        }
    }
    ctx->pc = 0x1805CCu;
    // 0x1805cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1805CCu;
    {
        const bool branch_taken_0x1805cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805cc) {
            ctx->pc = 0x180664u;
            goto label_180664;
        }
    }
    ctx->pc = 0x1805D4u;
label_1805d4:
    // 0x1805d4: 0x0  nop
    ctx->pc = 0x1805d4u;
    // NOP
    // 0x1805d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1805dc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1805DCu;
    SET_GPR_U32(ctx, 31, 0x1805E4u);
    ctx->pc = 0x1805E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805DCu;
            // 0x1805e0: 0x26a500c0  addiu       $a1, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805E4u; }
        if (ctx->pc != 0x1805E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805E4u; }
        if (ctx->pc != 0x1805E4u) { return; }
    }
    ctx->pc = 0x1805E4u;
label_1805e4:
    // 0x1805e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1805E4u;
    {
        const bool branch_taken_0x1805e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805e4) {
            ctx->pc = 0x180664u;
            goto label_180664;
        }
    }
    ctx->pc = 0x1805ECu;
label_1805ec:
    // 0x1805ec: 0x0  nop
    ctx->pc = 0x1805ecu;
    // NOP
    // 0x1805f0: 0xc6ad0130  lwc1        $f13, 0x130($s5)
    ctx->pc = 0x1805f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1805f4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1805F4u;
    SET_GPR_U32(ctx, 31, 0x1805FCu);
    ctx->pc = 0x1805F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805F4u;
            // 0x1805f8: 0xc6ac00c0  lwc1        $f12, 0xC0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805FCu; }
        if (ctx->pc != 0x1805FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805FCu; }
        if (ctx->pc != 0x1805FCu) { return; }
    }
    ctx->pc = 0x1805FCu;
label_1805fc:
    // 0x1805fc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1805fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x180600: 0xc6ad0134  lwc1        $f13, 0x134($s5)
    ctx->pc = 0x180600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180604: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180604u;
    SET_GPR_U32(ctx, 31, 0x18060Cu);
    ctx->pc = 0x180608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180604u;
            // 0x180608: 0xc6ac00c4  lwc1        $f12, 0xC4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18060Cu; }
        if (ctx->pc != 0x18060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18060Cu; }
        if (ctx->pc != 0x18060Cu) { return; }
    }
    ctx->pc = 0x18060Cu;
label_18060c:
    // 0x18060c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x180610: 0xc6ad0138  lwc1        $f13, 0x138($s5)
    ctx->pc = 0x180610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180614: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180614u;
    SET_GPR_U32(ctx, 31, 0x18061Cu);
    ctx->pc = 0x180618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180614u;
            // 0x180618: 0xc6ac00c8  lwc1        $f12, 0xC8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18061Cu; }
        if (ctx->pc != 0x18061Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18061Cu; }
        if (ctx->pc != 0x18061Cu) { return; }
    }
    ctx->pc = 0x18061Cu;
label_18061c:
    // 0x18061c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18061Cu;
    {
        const bool branch_taken_0x18061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18061Cu;
            // 0x180620: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18061c) {
            ctx->pc = 0x180664u;
            goto label_180664;
        }
    }
    ctx->pc = 0x180624u;
label_180624:
    // 0x180624: 0x0  nop
    ctx->pc = 0x180624u;
    // NOP
    // 0x180628: 0xc6ac00c0  lwc1        $f12, 0xC0($s5)
    ctx->pc = 0x180628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18062c: 0xc6ad0130  lwc1        $f13, 0x130($s5)
    ctx->pc = 0x18062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180630: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180630u;
    SET_GPR_U32(ctx, 31, 0x180638u);
    ctx->pc = 0x180634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180630u;
            // 0x180634: 0x8ea40164  lw          $a0, 0x164($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180638u; }
        if (ctx->pc != 0x180638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180638u; }
        if (ctx->pc != 0x180638u) { return; }
    }
    ctx->pc = 0x180638u;
label_180638:
    // 0x180638: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x180638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18063c: 0x8ea40164  lw          $a0, 0x164($s5)
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x180640: 0xc6ad0134  lwc1        $f13, 0x134($s5)
    ctx->pc = 0x180640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180644: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180644u;
    SET_GPR_U32(ctx, 31, 0x18064Cu);
    ctx->pc = 0x180648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180644u;
            // 0x180648: 0xc6ac00c4  lwc1        $f12, 0xC4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18064Cu; }
        if (ctx->pc != 0x18064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18064Cu; }
        if (ctx->pc != 0x18064Cu) { return; }
    }
    ctx->pc = 0x18064Cu;
label_18064c:
    // 0x18064c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x180650: 0x8ea40164  lw          $a0, 0x164($s5)
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x180654: 0xc6ad0138  lwc1        $f13, 0x138($s5)
    ctx->pc = 0x180654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180658: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180658u;
    SET_GPR_U32(ctx, 31, 0x180660u);
    ctx->pc = 0x18065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180658u;
            // 0x18065c: 0xc6ac00c8  lwc1        $f12, 0xC8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180660u; }
        if (ctx->pc != 0x180660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180660u; }
        if (ctx->pc != 0x180660u) { return; }
    }
    ctx->pc = 0x180660u;
label_180660:
    // 0x180660: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x180660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_180664:
    // 0x180664: 0x0  nop
    ctx->pc = 0x180664u;
    // NOP
    // 0x180668: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x180668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x18066c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180670: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x180670u;
    {
        const bool branch_taken_0x180670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180670) {
            ctx->pc = 0x1806E4u;
            goto label_1806e4;
        }
    }
    ctx->pc = 0x180678u;
    // 0x180678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18067c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18067Cu;
    {
        const bool branch_taken_0x18067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18067c) {
            ctx->pc = 0x1806ACu;
            goto label_1806ac;
        }
    }
    ctx->pc = 0x180684u;
    // 0x180684: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180684u;
    {
        const bool branch_taken_0x180684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180684) {
            ctx->pc = 0x180694u;
            goto label_180694;
        }
    }
    ctx->pc = 0x18068Cu;
    // 0x18068c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18068Cu;
    {
        const bool branch_taken_0x18068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18068c) {
            ctx->pc = 0x180724u;
            goto label_180724;
        }
    }
    ctx->pc = 0x180694u;
label_180694:
    // 0x180694: 0x0  nop
    ctx->pc = 0x180694u;
    // NOP
    // 0x180698: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x180698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18069c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18069Cu;
    SET_GPR_U32(ctx, 31, 0x1806A4u);
    ctx->pc = 0x1806A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18069Cu;
            // 0x1806a0: 0x26a500f0  addiu       $a1, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    }
    ctx->pc = 0x1806A4u;
label_1806a4:
    // 0x1806a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1806A4u;
    {
        const bool branch_taken_0x1806a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1806a4) {
            ctx->pc = 0x180724u;
            goto label_180724;
        }
    }
    ctx->pc = 0x1806ACu;
label_1806ac:
    // 0x1806ac: 0x0  nop
    ctx->pc = 0x1806acu;
    // NOP
    // 0x1806b0: 0xc6ad0140  lwc1        $f13, 0x140($s5)
    ctx->pc = 0x1806b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1806b4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1806B4u;
    SET_GPR_U32(ctx, 31, 0x1806BCu);
    ctx->pc = 0x1806B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806B4u;
            // 0x1806b8: 0xc6ac00f0  lwc1        $f12, 0xF0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806BCu; }
        if (ctx->pc != 0x1806BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806BCu; }
        if (ctx->pc != 0x1806BCu) { return; }
    }
    ctx->pc = 0x1806BCu;
label_1806bc:
    // 0x1806bc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1806bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1806c0: 0xc6ad0144  lwc1        $f13, 0x144($s5)
    ctx->pc = 0x1806c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1806c4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1806C4u;
    SET_GPR_U32(ctx, 31, 0x1806CCu);
    ctx->pc = 0x1806C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806C4u;
            // 0x1806c8: 0xc6ac00f4  lwc1        $f12, 0xF4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806CCu; }
        if (ctx->pc != 0x1806CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806CCu; }
        if (ctx->pc != 0x1806CCu) { return; }
    }
    ctx->pc = 0x1806CCu;
label_1806cc:
    // 0x1806cc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1806ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1806d0: 0xc6ad0148  lwc1        $f13, 0x148($s5)
    ctx->pc = 0x1806d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1806d4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1806D4u;
    SET_GPR_U32(ctx, 31, 0x1806DCu);
    ctx->pc = 0x1806D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806D4u;
            // 0x1806d8: 0xc6ac00f8  lwc1        $f12, 0xF8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806DCu; }
        if (ctx->pc != 0x1806DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806DCu; }
        if (ctx->pc != 0x1806DCu) { return; }
    }
    ctx->pc = 0x1806DCu;
label_1806dc:
    // 0x1806dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1806DCu;
    {
        const bool branch_taken_0x1806dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806DCu;
            // 0x1806e0: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806dc) {
            ctx->pc = 0x180724u;
            goto label_180724;
        }
    }
    ctx->pc = 0x1806E4u;
label_1806e4:
    // 0x1806e4: 0x0  nop
    ctx->pc = 0x1806e4u;
    // NOP
    // 0x1806e8: 0xc6ac00f0  lwc1        $f12, 0xF0($s5)
    ctx->pc = 0x1806e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1806ec: 0xc6ad0140  lwc1        $f13, 0x140($s5)
    ctx->pc = 0x1806ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1806f0: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1806F0u;
    SET_GPR_U32(ctx, 31, 0x1806F8u);
    ctx->pc = 0x1806F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806F0u;
            // 0x1806f4: 0x8ea40168  lw          $a0, 0x168($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806F8u; }
        if (ctx->pc != 0x1806F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806F8u; }
        if (ctx->pc != 0x1806F8u) { return; }
    }
    ctx->pc = 0x1806F8u;
label_1806f8:
    // 0x1806f8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1806f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1806fc: 0x8ea40168  lw          $a0, 0x168($s5)
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x180700: 0xc6ad0144  lwc1        $f13, 0x144($s5)
    ctx->pc = 0x180700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180704: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180704u;
    SET_GPR_U32(ctx, 31, 0x18070Cu);
    ctx->pc = 0x180708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180704u;
            // 0x180708: 0xc6ac00f4  lwc1        $f12, 0xF4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18070Cu; }
        if (ctx->pc != 0x18070Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18070Cu; }
        if (ctx->pc != 0x18070Cu) { return; }
    }
    ctx->pc = 0x18070Cu;
label_18070c:
    // 0x18070c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x180710: 0x8ea40168  lw          $a0, 0x168($s5)
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x180714: 0xc6ad0148  lwc1        $f13, 0x148($s5)
    ctx->pc = 0x180714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180718: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180718u;
    SET_GPR_U32(ctx, 31, 0x180720u);
    ctx->pc = 0x18071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180718u;
            // 0x18071c: 0xc6ac00f8  lwc1        $f12, 0xF8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180720u; }
        if (ctx->pc != 0x180720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180720u; }
        if (ctx->pc != 0x180720u) { return; }
    }
    ctx->pc = 0x180720u;
label_180720:
    // 0x180720: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x180720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_180724:
    // 0x180724: 0x0  nop
    ctx->pc = 0x180724u;
    // NOP
    // 0x180728: 0x8ea3011c  lw          $v1, 0x11C($s5)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x18072c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180730: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x180730u;
    {
        const bool branch_taken_0x180730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180730) {
            ctx->pc = 0x1807A4u;
            goto label_1807a4;
        }
    }
    ctx->pc = 0x180738u;
    // 0x180738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18073c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18073Cu;
    {
        const bool branch_taken_0x18073c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18073c) {
            ctx->pc = 0x18076Cu;
            goto label_18076c;
        }
    }
    ctx->pc = 0x180744u;
    // 0x180744: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180744u;
    {
        const bool branch_taken_0x180744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180744) {
            ctx->pc = 0x180754u;
            goto label_180754;
        }
    }
    ctx->pc = 0x18074Cu;
    // 0x18074c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18074Cu;
    {
        const bool branch_taken_0x18074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18074c) {
            ctx->pc = 0x1807E4u;
            goto label_1807e4;
        }
    }
    ctx->pc = 0x180754u;
label_180754:
    // 0x180754: 0x0  nop
    ctx->pc = 0x180754u;
    // NOP
    // 0x180758: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18075c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18075Cu;
    SET_GPR_U32(ctx, 31, 0x180764u);
    ctx->pc = 0x180760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18075Cu;
            // 0x180760: 0x26a50100  addiu       $a1, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180764u; }
        if (ctx->pc != 0x180764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180764u; }
        if (ctx->pc != 0x180764u) { return; }
    }
    ctx->pc = 0x180764u;
label_180764:
    // 0x180764: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180764u;
    {
        const bool branch_taken_0x180764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180764) {
            ctx->pc = 0x1807E4u;
            goto label_1807e4;
        }
    }
    ctx->pc = 0x18076Cu;
label_18076c:
    // 0x18076c: 0x0  nop
    ctx->pc = 0x18076cu;
    // NOP
    // 0x180770: 0xc6ad0150  lwc1        $f13, 0x150($s5)
    ctx->pc = 0x180770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180774: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180774u;
    SET_GPR_U32(ctx, 31, 0x18077Cu);
    ctx->pc = 0x180778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180774u;
            // 0x180778: 0xc6ac0100  lwc1        $f12, 0x100($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18077Cu; }
        if (ctx->pc != 0x18077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18077Cu; }
        if (ctx->pc != 0x18077Cu) { return; }
    }
    ctx->pc = 0x18077Cu;
label_18077c:
    // 0x18077c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x180780: 0xc6ad0154  lwc1        $f13, 0x154($s5)
    ctx->pc = 0x180780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180784: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180784u;
    SET_GPR_U32(ctx, 31, 0x18078Cu);
    ctx->pc = 0x180788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180784u;
            // 0x180788: 0xc6ac0104  lwc1        $f12, 0x104($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18078Cu; }
        if (ctx->pc != 0x18078Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18078Cu; }
        if (ctx->pc != 0x18078Cu) { return; }
    }
    ctx->pc = 0x18078Cu;
label_18078c:
    // 0x18078c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x180790: 0xc6ad0158  lwc1        $f13, 0x158($s5)
    ctx->pc = 0x180790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180794: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180794u;
    SET_GPR_U32(ctx, 31, 0x18079Cu);
    ctx->pc = 0x180798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180794u;
            // 0x180798: 0xc6ac0108  lwc1        $f12, 0x108($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18079Cu; }
        if (ctx->pc != 0x18079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18079Cu; }
        if (ctx->pc != 0x18079Cu) { return; }
    }
    ctx->pc = 0x18079Cu;
label_18079c:
    // 0x18079c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18079Cu;
    {
        const bool branch_taken_0x18079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18079Cu;
            // 0x1807a0: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18079c) {
            ctx->pc = 0x1807E4u;
            goto label_1807e4;
        }
    }
    ctx->pc = 0x1807A4u;
label_1807a4:
    // 0x1807a4: 0x0  nop
    ctx->pc = 0x1807a4u;
    // NOP
    // 0x1807a8: 0xc6ac0100  lwc1        $f12, 0x100($s5)
    ctx->pc = 0x1807a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1807ac: 0xc6ad0150  lwc1        $f13, 0x150($s5)
    ctx->pc = 0x1807acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1807b0: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1807B0u;
    SET_GPR_U32(ctx, 31, 0x1807B8u);
    ctx->pc = 0x1807B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807B0u;
            // 0x1807b4: 0x8ea4016c  lw          $a0, 0x16C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807B8u; }
        if (ctx->pc != 0x1807B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807B8u; }
        if (ctx->pc != 0x1807B8u) { return; }
    }
    ctx->pc = 0x1807B8u;
label_1807b8:
    // 0x1807b8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1807b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1807bc: 0x8ea4016c  lw          $a0, 0x16C($s5)
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
    // 0x1807c0: 0xc6ad0154  lwc1        $f13, 0x154($s5)
    ctx->pc = 0x1807c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1807c4: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1807C4u;
    SET_GPR_U32(ctx, 31, 0x1807CCu);
    ctx->pc = 0x1807C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807C4u;
            // 0x1807c8: 0xc6ac0104  lwc1        $f12, 0x104($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807CCu; }
        if (ctx->pc != 0x1807CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807CCu; }
        if (ctx->pc != 0x1807CCu) { return; }
    }
    ctx->pc = 0x1807CCu;
label_1807cc:
    // 0x1807cc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1807ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1807d0: 0x8ea4016c  lw          $a0, 0x16C($s5)
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
    // 0x1807d4: 0xc6ad0158  lwc1        $f13, 0x158($s5)
    ctx->pc = 0x1807d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1807d8: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1807D8u;
    SET_GPR_U32(ctx, 31, 0x1807E0u);
    ctx->pc = 0x1807DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807D8u;
            // 0x1807dc: 0xc6ac0108  lwc1        $f12, 0x108($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807E0u; }
        if (ctx->pc != 0x1807E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807E0u; }
        if (ctx->pc != 0x1807E0u) { return; }
    }
    ctx->pc = 0x1807E0u;
label_1807e0:
    // 0x1807e0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1807e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1807e4:
    // 0x1807e4: 0x0  nop
    ctx->pc = 0x1807e4u;
    // NOP
    // 0x1807e8: 0x8ea30170  lw          $v1, 0x170($s5)
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
    // 0x1807ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1807f0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1807f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1807f4: 0x8ea30174  lw          $v1, 0x174($s5)
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x1807f8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x1807f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1807fc: 0x8ea30178  lw          $v1, 0x178($s5)
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
    // 0x180800: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x180800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x180804: 0x8ea301c0  lw          $v1, 0x1C0($s5)
    ctx->pc = 0x180804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x180808: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x180808u;
    {
        const bool branch_taken_0x180808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180808) {
            ctx->pc = 0x18086Cu;
            goto label_18086c;
        }
    }
    ctx->pc = 0x180810u;
    // 0x180810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180814: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180814u;
    {
        const bool branch_taken_0x180814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180814) {
            ctx->pc = 0x180844u;
            goto label_180844;
        }
    }
    ctx->pc = 0x18081Cu;
    // 0x18081c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18081c) {
            ctx->pc = 0x18082Cu;
            goto label_18082c;
        }
    }
    ctx->pc = 0x180824u;
    // 0x180824: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x180824u;
    {
        const bool branch_taken_0x180824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180824) {
            ctx->pc = 0x180898u;
            goto label_180898;
        }
    }
    ctx->pc = 0x18082Cu;
label_18082c:
    // 0x18082c: 0x0  nop
    ctx->pc = 0x18082cu;
    // NOP
    // 0x180830: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x180830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x180834: 0xc041c5c  jal         func_107170
    ctx->pc = 0x180834u;
    SET_GPR_U32(ctx, 31, 0x18083Cu);
    ctx->pc = 0x180838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180834u;
            // 0x180838: 0x26a50180  addiu       $a1, $s5, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18083Cu; }
        if (ctx->pc != 0x18083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18083Cu; }
        if (ctx->pc != 0x18083Cu) { return; }
    }
    ctx->pc = 0x18083Cu;
label_18083c:
    // 0x18083c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18083Cu;
    {
        const bool branch_taken_0x18083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18083c) {
            ctx->pc = 0x180898u;
            goto label_180898;
        }
    }
    ctx->pc = 0x180844u;
label_180844:
    // 0x180844: 0x0  nop
    ctx->pc = 0x180844u;
    // NOP
    // 0x180848: 0xc6ad01d0  lwc1        $f13, 0x1D0($s5)
    ctx->pc = 0x180848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18084c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x18084Cu;
    SET_GPR_U32(ctx, 31, 0x180854u);
    ctx->pc = 0x180850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18084Cu;
            // 0x180850: 0xc6ac0180  lwc1        $f12, 0x180($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180854u; }
        if (ctx->pc != 0x180854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180854u; }
        if (ctx->pc != 0x180854u) { return; }
    }
    ctx->pc = 0x180854u;
label_180854:
    // 0x180854: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x180854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x180858: 0xc6ad01d4  lwc1        $f13, 0x1D4($s5)
    ctx->pc = 0x180858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18085c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x18085Cu;
    SET_GPR_U32(ctx, 31, 0x180864u);
    ctx->pc = 0x180860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18085Cu;
            // 0x180860: 0xc6ac0184  lwc1        $f12, 0x184($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180864u; }
        if (ctx->pc != 0x180864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180864u; }
        if (ctx->pc != 0x180864u) { return; }
    }
    ctx->pc = 0x180864u;
label_180864:
    // 0x180864: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x180864u;
    {
        const bool branch_taken_0x180864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180864u;
            // 0x180868: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180864) {
            ctx->pc = 0x180898u;
            goto label_180898;
        }
    }
    ctx->pc = 0x18086Cu;
label_18086c:
    // 0x18086c: 0x0  nop
    ctx->pc = 0x18086cu;
    // NOP
    // 0x180870: 0xc6ac0180  lwc1        $f12, 0x180($s5)
    ctx->pc = 0x180870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180874: 0xc6ad01d0  lwc1        $f13, 0x1D0($s5)
    ctx->pc = 0x180874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180878: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180878u;
    SET_GPR_U32(ctx, 31, 0x180880u);
    ctx->pc = 0x18087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180878u;
            // 0x18087c: 0x8ea40210  lw          $a0, 0x210($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180880u; }
        if (ctx->pc != 0x180880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180880u; }
        if (ctx->pc != 0x180880u) { return; }
    }
    ctx->pc = 0x180880u;
label_180880:
    // 0x180880: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x180880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x180884: 0x8ea40210  lw          $a0, 0x210($s5)
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
    // 0x180888: 0xc6ad01d4  lwc1        $f13, 0x1D4($s5)
    ctx->pc = 0x180888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18088c: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x18088Cu;
    SET_GPR_U32(ctx, 31, 0x180894u);
    ctx->pc = 0x180890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18088Cu;
            // 0x180890: 0xc6ac0184  lwc1        $f12, 0x184($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180894u; }
        if (ctx->pc != 0x180894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180894u; }
        if (ctx->pc != 0x180894u) { return; }
    }
    ctx->pc = 0x180894u;
label_180894:
    // 0x180894: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x180894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_180898:
    // 0x180898: 0x8ea301c4  lw          $v1, 0x1C4($s5)
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x18089c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1808a0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1808A0u;
    {
        const bool branch_taken_0x1808a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1808a0) {
            ctx->pc = 0x180904u;
            goto label_180904;
        }
    }
    ctx->pc = 0x1808A8u;
    // 0x1808a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1808ac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1808ACu;
    {
        const bool branch_taken_0x1808ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1808ac) {
            ctx->pc = 0x1808DCu;
            goto label_1808dc;
        }
    }
    ctx->pc = 0x1808B4u;
    // 0x1808b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1808B4u;
    {
        const bool branch_taken_0x1808b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808b4) {
            ctx->pc = 0x1808C4u;
            goto label_1808c4;
        }
    }
    ctx->pc = 0x1808BCu;
    // 0x1808bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1808BCu;
    {
        const bool branch_taken_0x1808bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808bc) {
            ctx->pc = 0x180930u;
            goto label_180930;
        }
    }
    ctx->pc = 0x1808C4u;
label_1808c4:
    // 0x1808c4: 0x0  nop
    ctx->pc = 0x1808c4u;
    // NOP
    // 0x1808c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1808cc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1808CCu;
    SET_GPR_U32(ctx, 31, 0x1808D4u);
    ctx->pc = 0x1808D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808CCu;
            // 0x1808d0: 0x26a50190  addiu       $a1, $s5, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808D4u; }
        if (ctx->pc != 0x1808D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808D4u; }
        if (ctx->pc != 0x1808D4u) { return; }
    }
    ctx->pc = 0x1808D4u;
label_1808d4:
    // 0x1808d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1808D4u;
    {
        const bool branch_taken_0x1808d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808d4) {
            ctx->pc = 0x180930u;
            goto label_180930;
        }
    }
    ctx->pc = 0x1808DCu;
label_1808dc:
    // 0x1808dc: 0x0  nop
    ctx->pc = 0x1808dcu;
    // NOP
    // 0x1808e0: 0xc6ad01e0  lwc1        $f13, 0x1E0($s5)
    ctx->pc = 0x1808e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1808e4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1808E4u;
    SET_GPR_U32(ctx, 31, 0x1808ECu);
    ctx->pc = 0x1808E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808E4u;
            // 0x1808e8: 0xc6ac0190  lwc1        $f12, 0x190($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808ECu; }
        if (ctx->pc != 0x1808ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808ECu; }
        if (ctx->pc != 0x1808ECu) { return; }
    }
    ctx->pc = 0x1808ECu;
label_1808ec:
    // 0x1808ec: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1808ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1808f0: 0xc6ad01e4  lwc1        $f13, 0x1E4($s5)
    ctx->pc = 0x1808f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1808f4: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x1808F4u;
    SET_GPR_U32(ctx, 31, 0x1808FCu);
    ctx->pc = 0x1808F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808F4u;
            // 0x1808f8: 0xc6ac0194  lwc1        $f12, 0x194($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808FCu; }
        if (ctx->pc != 0x1808FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808FCu; }
        if (ctx->pc != 0x1808FCu) { return; }
    }
    ctx->pc = 0x1808FCu;
label_1808fc:
    // 0x1808fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1808FCu;
    {
        const bool branch_taken_0x1808fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808FCu;
            // 0x180900: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808fc) {
            ctx->pc = 0x180930u;
            goto label_180930;
        }
    }
    ctx->pc = 0x180904u;
label_180904:
    // 0x180904: 0x0  nop
    ctx->pc = 0x180904u;
    // NOP
    // 0x180908: 0xc6ac0190  lwc1        $f12, 0x190($s5)
    ctx->pc = 0x180908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18090c: 0xc6ad01e0  lwc1        $f13, 0x1E0($s5)
    ctx->pc = 0x18090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180910: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180910u;
    SET_GPR_U32(ctx, 31, 0x180918u);
    ctx->pc = 0x180914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180910u;
            // 0x180914: 0x8ea40214  lw          $a0, 0x214($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 532)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180918u; }
        if (ctx->pc != 0x180918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180918u; }
        if (ctx->pc != 0x180918u) { return; }
    }
    ctx->pc = 0x180918u;
label_180918:
    // 0x180918: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x180918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x18091c: 0x8ea40214  lw          $a0, 0x214($s5)
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 532)));
    // 0x180920: 0xc6ad01e4  lwc1        $f13, 0x1E4($s5)
    ctx->pc = 0x180920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180924: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180924u;
    SET_GPR_U32(ctx, 31, 0x18092Cu);
    ctx->pc = 0x180928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180924u;
            // 0x180928: 0xc6ac0194  lwc1        $f12, 0x194($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18092Cu; }
        if (ctx->pc != 0x18092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18092Cu; }
        if (ctx->pc != 0x18092Cu) { return; }
    }
    ctx->pc = 0x18092Cu;
label_18092c:
    // 0x18092c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x18092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_180930:
    // 0x180930: 0x8ea301c8  lw          $v1, 0x1C8($s5)
    ctx->pc = 0x180930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 456)));
    // 0x180934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180938: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x180938u;
    {
        const bool branch_taken_0x180938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180938) {
            ctx->pc = 0x1809ACu;
            goto label_1809ac;
        }
    }
    ctx->pc = 0x180940u;
    // 0x180940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180944: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180944u;
    {
        const bool branch_taken_0x180944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180944) {
            ctx->pc = 0x180974u;
            goto label_180974;
        }
    }
    ctx->pc = 0x18094Cu;
    // 0x18094c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18094Cu;
    {
        const bool branch_taken_0x18094c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18094c) {
            ctx->pc = 0x18095Cu;
            goto label_18095c;
        }
    }
    ctx->pc = 0x180954u;
    // 0x180954: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x180954u;
    {
        const bool branch_taken_0x180954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180954) {
            ctx->pc = 0x1809ECu;
            goto label_1809ec;
        }
    }
    ctx->pc = 0x18095Cu;
label_18095c:
    // 0x18095c: 0x0  nop
    ctx->pc = 0x18095cu;
    // NOP
    // 0x180960: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x180960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x180964: 0xc041c5c  jal         func_107170
    ctx->pc = 0x180964u;
    SET_GPR_U32(ctx, 31, 0x18096Cu);
    ctx->pc = 0x180968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180964u;
            // 0x180968: 0x26a501a0  addiu       $a1, $s5, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18096Cu; }
        if (ctx->pc != 0x18096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18096Cu; }
        if (ctx->pc != 0x18096Cu) { return; }
    }
    ctx->pc = 0x18096Cu;
label_18096c:
    // 0x18096c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18096Cu;
    {
        const bool branch_taken_0x18096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18096c) {
            ctx->pc = 0x1809ECu;
            goto label_1809ec;
        }
    }
    ctx->pc = 0x180974u;
label_180974:
    // 0x180974: 0x0  nop
    ctx->pc = 0x180974u;
    // NOP
    // 0x180978: 0xc6ad01f0  lwc1        $f13, 0x1F0($s5)
    ctx->pc = 0x180978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18097c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x18097Cu;
    SET_GPR_U32(ctx, 31, 0x180984u);
    ctx->pc = 0x180980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18097Cu;
            // 0x180980: 0xc6ac01a0  lwc1        $f12, 0x1A0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180984u; }
        if (ctx->pc != 0x180984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180984u; }
        if (ctx->pc != 0x180984u) { return; }
    }
    ctx->pc = 0x180984u;
label_180984:
    // 0x180984: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x180984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x180988: 0xc6ad01f4  lwc1        $f13, 0x1F4($s5)
    ctx->pc = 0x180988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18098c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x18098Cu;
    SET_GPR_U32(ctx, 31, 0x180994u);
    ctx->pc = 0x180990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18098Cu;
            // 0x180990: 0xc6ac01a4  lwc1        $f12, 0x1A4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180994u; }
        if (ctx->pc != 0x180994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180994u; }
        if (ctx->pc != 0x180994u) { return; }
    }
    ctx->pc = 0x180994u;
label_180994:
    // 0x180994: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x180994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x180998: 0xc6ad01f8  lwc1        $f13, 0x1F8($s5)
    ctx->pc = 0x180998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18099c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x18099Cu;
    SET_GPR_U32(ctx, 31, 0x1809A4u);
    ctx->pc = 0x1809A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18099Cu;
            // 0x1809a0: 0xc6ac01a8  lwc1        $f12, 0x1A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809A4u; }
        if (ctx->pc != 0x1809A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809A4u; }
        if (ctx->pc != 0x1809A4u) { return; }
    }
    ctx->pc = 0x1809A4u;
label_1809a4:
    // 0x1809a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1809A4u;
    {
        const bool branch_taken_0x1809a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809A4u;
            // 0x1809a8: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809a4) {
            ctx->pc = 0x1809ECu;
            goto label_1809ec;
        }
    }
    ctx->pc = 0x1809ACu;
label_1809ac:
    // 0x1809ac: 0x0  nop
    ctx->pc = 0x1809acu;
    // NOP
    // 0x1809b0: 0xc6ac01a0  lwc1        $f12, 0x1A0($s5)
    ctx->pc = 0x1809b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1809b4: 0xc6ad01f0  lwc1        $f13, 0x1F0($s5)
    ctx->pc = 0x1809b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1809b8: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1809B8u;
    SET_GPR_U32(ctx, 31, 0x1809C0u);
    ctx->pc = 0x1809BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809B8u;
            // 0x1809bc: 0x8ea40218  lw          $a0, 0x218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809C0u; }
        if (ctx->pc != 0x1809C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809C0u; }
        if (ctx->pc != 0x1809C0u) { return; }
    }
    ctx->pc = 0x1809C0u;
label_1809c0:
    // 0x1809c0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1809c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1809c4: 0x8ea40218  lw          $a0, 0x218($s5)
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
    // 0x1809c8: 0xc6ad01f4  lwc1        $f13, 0x1F4($s5)
    ctx->pc = 0x1809c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1809cc: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1809CCu;
    SET_GPR_U32(ctx, 31, 0x1809D4u);
    ctx->pc = 0x1809D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809CCu;
            // 0x1809d0: 0xc6ac01a4  lwc1        $f12, 0x1A4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809D4u; }
        if (ctx->pc != 0x1809D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809D4u; }
        if (ctx->pc != 0x1809D4u) { return; }
    }
    ctx->pc = 0x1809D4u;
label_1809d4:
    // 0x1809d4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1809d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1809d8: 0x8ea40218  lw          $a0, 0x218($s5)
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
    // 0x1809dc: 0xc6ad01f8  lwc1        $f13, 0x1F8($s5)
    ctx->pc = 0x1809dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1809e0: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x1809E0u;
    SET_GPR_U32(ctx, 31, 0x1809E8u);
    ctx->pc = 0x1809E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809E0u;
            // 0x1809e4: 0xc6ac01a8  lwc1        $f12, 0x1A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809E8u; }
        if (ctx->pc != 0x1809E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809E8u; }
        if (ctx->pc != 0x1809E8u) { return; }
    }
    ctx->pc = 0x1809E8u;
label_1809e8:
    // 0x1809e8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1809e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1809ec:
    // 0x1809ec: 0x0  nop
    ctx->pc = 0x1809ecu;
    // NOP
    // 0x1809f0: 0x8ea301cc  lw          $v1, 0x1CC($s5)
    ctx->pc = 0x1809f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x1809f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1809f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1809f8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1809F8u;
    {
        const bool branch_taken_0x1809f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1809f8) {
            ctx->pc = 0x180A6Cu;
            goto label_180a6c;
        }
    }
    ctx->pc = 0x180A00u;
    // 0x180a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180a04: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180A04u;
    {
        const bool branch_taken_0x180a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180a04) {
            ctx->pc = 0x180A34u;
            goto label_180a34;
        }
    }
    ctx->pc = 0x180A0Cu;
    // 0x180a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180A0Cu;
    {
        const bool branch_taken_0x180a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a0c) {
            ctx->pc = 0x180A1Cu;
            goto label_180a1c;
        }
    }
    ctx->pc = 0x180A14u;
    // 0x180a14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x180A14u;
    {
        const bool branch_taken_0x180a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a14) {
            ctx->pc = 0x180AACu;
            goto label_180aac;
        }
    }
    ctx->pc = 0x180A1Cu;
label_180a1c:
    // 0x180a1c: 0x0  nop
    ctx->pc = 0x180a1cu;
    // NOP
    // 0x180a20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x180a24: 0xc041c5c  jal         func_107170
    ctx->pc = 0x180A24u;
    SET_GPR_U32(ctx, 31, 0x180A2Cu);
    ctx->pc = 0x180A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A24u;
            // 0x180a28: 0x26a501b0  addiu       $a1, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A2Cu; }
        if (ctx->pc != 0x180A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A2Cu; }
        if (ctx->pc != 0x180A2Cu) { return; }
    }
    ctx->pc = 0x180A2Cu;
label_180a2c:
    // 0x180a2c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180A2Cu;
    {
        const bool branch_taken_0x180a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a2c) {
            ctx->pc = 0x180AACu;
            goto label_180aac;
        }
    }
    ctx->pc = 0x180A34u;
label_180a34:
    // 0x180a34: 0x0  nop
    ctx->pc = 0x180a34u;
    // NOP
    // 0x180a38: 0xc6ad0200  lwc1        $f13, 0x200($s5)
    ctx->pc = 0x180a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a3c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180A3Cu;
    SET_GPR_U32(ctx, 31, 0x180A44u);
    ctx->pc = 0x180A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A3Cu;
            // 0x180a40: 0xc6ac01b0  lwc1        $f12, 0x1B0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A44u; }
        if (ctx->pc != 0x180A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A44u; }
        if (ctx->pc != 0x180A44u) { return; }
    }
    ctx->pc = 0x180A44u;
label_180a44:
    // 0x180a44: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x180a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x180a48: 0xc6ad0204  lwc1        $f13, 0x204($s5)
    ctx->pc = 0x180a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a4c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180A4Cu;
    SET_GPR_U32(ctx, 31, 0x180A54u);
    ctx->pc = 0x180A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A4Cu;
            // 0x180a50: 0xc6ac01b4  lwc1        $f12, 0x1B4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A54u; }
        if (ctx->pc != 0x180A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A54u; }
        if (ctx->pc != 0x180A54u) { return; }
    }
    ctx->pc = 0x180A54u;
label_180a54:
    // 0x180a54: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x180a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x180a58: 0xc6ad0208  lwc1        $f13, 0x208($s5)
    ctx->pc = 0x180a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a5c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180A5Cu;
    SET_GPR_U32(ctx, 31, 0x180A64u);
    ctx->pc = 0x180A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A5Cu;
            // 0x180a60: 0xc6ac01b8  lwc1        $f12, 0x1B8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A64u; }
        if (ctx->pc != 0x180A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A64u; }
        if (ctx->pc != 0x180A64u) { return; }
    }
    ctx->pc = 0x180A64u;
label_180a64:
    // 0x180a64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x180A64u;
    {
        const bool branch_taken_0x180a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A64u;
            // 0x180a68: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a64) {
            ctx->pc = 0x180AACu;
            goto label_180aac;
        }
    }
    ctx->pc = 0x180A6Cu;
label_180a6c:
    // 0x180a6c: 0x0  nop
    ctx->pc = 0x180a6cu;
    // NOP
    // 0x180a70: 0xc6ac01b0  lwc1        $f12, 0x1B0($s5)
    ctx->pc = 0x180a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180a74: 0xc6ad0200  lwc1        $f13, 0x200($s5)
    ctx->pc = 0x180a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a78: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180A78u;
    SET_GPR_U32(ctx, 31, 0x180A80u);
    ctx->pc = 0x180A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A78u;
            // 0x180a7c: 0x8ea4021c  lw          $a0, 0x21C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A80u; }
        if (ctx->pc != 0x180A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A80u; }
        if (ctx->pc != 0x180A80u) { return; }
    }
    ctx->pc = 0x180A80u;
label_180a80:
    // 0x180a80: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x180a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x180a84: 0x8ea4021c  lw          $a0, 0x21C($s5)
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 540)));
    // 0x180a88: 0xc6ad0204  lwc1        $f13, 0x204($s5)
    ctx->pc = 0x180a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a8c: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180A8Cu;
    SET_GPR_U32(ctx, 31, 0x180A94u);
    ctx->pc = 0x180A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A8Cu;
            // 0x180a90: 0xc6ac01b4  lwc1        $f12, 0x1B4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A94u; }
        if (ctx->pc != 0x180A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A94u; }
        if (ctx->pc != 0x180A94u) { return; }
    }
    ctx->pc = 0x180A94u;
label_180a94:
    // 0x180a94: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x180a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x180a98: 0x8ea4021c  lw          $a0, 0x21C($s5)
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 540)));
    // 0x180a9c: 0xc6ad0208  lwc1        $f13, 0x208($s5)
    ctx->pc = 0x180a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180aa0: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180AA0u;
    SET_GPR_U32(ctx, 31, 0x180AA8u);
    ctx->pc = 0x180AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180AA0u;
            // 0x180aa4: 0xc6ac01b8  lwc1        $f12, 0x1B8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180AA8u; }
        if (ctx->pc != 0x180AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180AA8u; }
        if (ctx->pc != 0x180AA8u) { return; }
    }
    ctx->pc = 0x180AA8u;
label_180aa8:
    // 0x180aa8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x180aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_180aac:
    // 0x180aac: 0x0  nop
    ctx->pc = 0x180aacu;
    // NOP
    // 0x180ab0: 0x27b20158  addiu       $s2, $sp, 0x158
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x180ab4: 0xc6a00228  lwc1        $f0, 0x228($s5)
    ctx->pc = 0x180ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180abc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x180abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x180ac0: 0x8ea30220  lw          $v1, 0x220($s5)
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 544)));
    // 0x180ac4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x180ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x180ac8: 0x8ea30224  lw          $v1, 0x224($s5)
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x180acc: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x180accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x180ad0: 0x8ea30234  lw          $v1, 0x234($s5)
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 564)));
    // 0x180ad4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x180AD4u;
    {
        const bool branch_taken_0x180ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180ad4) {
            ctx->pc = 0x180B1Cu;
            goto label_180b1c;
        }
    }
    ctx->pc = 0x180ADCu;
    // 0x180adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180ae0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180AE0u;
    {
        const bool branch_taken_0x180ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180ae0) {
            ctx->pc = 0x180B04u;
            goto label_180b04;
        }
    }
    ctx->pc = 0x180AE8u;
    // 0x180ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180AE8u;
    {
        const bool branch_taken_0x180ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ae8) {
            ctx->pc = 0x180AF8u;
            goto label_180af8;
        }
    }
    ctx->pc = 0x180AF0u;
    // 0x180af0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x180AF0u;
    {
        const bool branch_taken_0x180af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180af0) {
            ctx->pc = 0x180B34u;
            goto label_180b34;
        }
    }
    ctx->pc = 0x180AF8u;
label_180af8:
    // 0x180af8: 0xc6a00228  lwc1        $f0, 0x228($s5)
    ctx->pc = 0x180af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180afc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x180AFCu;
    {
        const bool branch_taken_0x180afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180AFCu;
            // 0x180b00: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180afc) {
            ctx->pc = 0x180B34u;
            goto label_180b34;
        }
    }
    ctx->pc = 0x180B04u;
label_180b04:
    // 0x180b04: 0x0  nop
    ctx->pc = 0x180b04u;
    // NOP
    // 0x180b08: 0xc6ad0240  lwc1        $f13, 0x240($s5)
    ctx->pc = 0x180b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180b0c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180B0Cu;
    SET_GPR_U32(ctx, 31, 0x180B14u);
    ctx->pc = 0x180B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B0Cu;
            // 0x180b10: 0xc6ac0228  lwc1        $f12, 0x228($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B14u; }
        if (ctx->pc != 0x180B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B14u; }
        if (ctx->pc != 0x180B14u) { return; }
    }
    ctx->pc = 0x180B14u;
label_180b14:
    // 0x180b14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180B14u;
    {
        const bool branch_taken_0x180b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B14u;
            // 0x180b18: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b14) {
            ctx->pc = 0x180B34u;
            goto label_180b34;
        }
    }
    ctx->pc = 0x180B1Cu;
label_180b1c:
    // 0x180b1c: 0x0  nop
    ctx->pc = 0x180b1cu;
    // NOP
    // 0x180b20: 0xc6ac0228  lwc1        $f12, 0x228($s5)
    ctx->pc = 0x180b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180b24: 0xc6ad0240  lwc1        $f13, 0x240($s5)
    ctx->pc = 0x180b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180b28: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180B28u;
    SET_GPR_U32(ctx, 31, 0x180B30u);
    ctx->pc = 0x180B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B28u;
            // 0x180b2c: 0x8ea4024c  lw          $a0, 0x24C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B30u; }
        if (ctx->pc != 0x180B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B30u; }
        if (ctx->pc != 0x180B30u) { return; }
    }
    ctx->pc = 0x180B30u;
label_180b30:
    // 0x180b30: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x180b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_180b34:
    // 0x180b34: 0x0  nop
    ctx->pc = 0x180b34u;
    // NOP
    // 0x180b38: 0x8ea30238  lw          $v1, 0x238($s5)
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x180b3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180b40: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x180B40u;
    {
        const bool branch_taken_0x180b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180b40) {
            ctx->pc = 0x180B8Cu;
            goto label_180b8c;
        }
    }
    ctx->pc = 0x180B48u;
    // 0x180b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180b4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180B4Cu;
    {
        const bool branch_taken_0x180b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180b4c) {
            ctx->pc = 0x180B74u;
            goto label_180b74;
        }
    }
    ctx->pc = 0x180B54u;
    // 0x180b54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180B54u;
    {
        const bool branch_taken_0x180b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b54) {
            ctx->pc = 0x180B64u;
            goto label_180b64;
        }
    }
    ctx->pc = 0x180B5Cu;
    // 0x180b5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x180B5Cu;
    {
        const bool branch_taken_0x180b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b5c) {
            ctx->pc = 0x180BA4u;
            goto label_180ba4;
        }
    }
    ctx->pc = 0x180B64u;
label_180b64:
    // 0x180b64: 0x0  nop
    ctx->pc = 0x180b64u;
    // NOP
    // 0x180b68: 0xc6a0022c  lwc1        $f0, 0x22C($s5)
    ctx->pc = 0x180b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180b6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x180B6Cu;
    {
        const bool branch_taken_0x180b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B6Cu;
            // 0x180b70: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b6c) {
            ctx->pc = 0x180BA4u;
            goto label_180ba4;
        }
    }
    ctx->pc = 0x180B74u;
label_180b74:
    // 0x180b74: 0x0  nop
    ctx->pc = 0x180b74u;
    // NOP
    // 0x180b78: 0xc6ad0244  lwc1        $f13, 0x244($s5)
    ctx->pc = 0x180b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180b7c: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180B7Cu;
    SET_GPR_U32(ctx, 31, 0x180B84u);
    ctx->pc = 0x180B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B7Cu;
            // 0x180b80: 0xc6ac022c  lwc1        $f12, 0x22C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B84u; }
        if (ctx->pc != 0x180B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B84u; }
        if (ctx->pc != 0x180B84u) { return; }
    }
    ctx->pc = 0x180B84u;
label_180b84:
    // 0x180b84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180B84u;
    {
        const bool branch_taken_0x180b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B84u;
            // 0x180b88: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b84) {
            ctx->pc = 0x180BA4u;
            goto label_180ba4;
        }
    }
    ctx->pc = 0x180B8Cu;
label_180b8c:
    // 0x180b8c: 0x0  nop
    ctx->pc = 0x180b8cu;
    // NOP
    // 0x180b90: 0xc6ac022c  lwc1        $f12, 0x22C($s5)
    ctx->pc = 0x180b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180b94: 0xc6ad0244  lwc1        $f13, 0x244($s5)
    ctx->pc = 0x180b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180b98: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180B98u;
    SET_GPR_U32(ctx, 31, 0x180BA0u);
    ctx->pc = 0x180B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B98u;
            // 0x180b9c: 0x8ea40250  lw          $a0, 0x250($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BA0u; }
        if (ctx->pc != 0x180BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BA0u; }
        if (ctx->pc != 0x180BA0u) { return; }
    }
    ctx->pc = 0x180BA0u;
label_180ba0:
    // 0x180ba0: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x180ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_180ba4:
    // 0x180ba4: 0x0  nop
    ctx->pc = 0x180ba4u;
    // NOP
    // 0x180ba8: 0x8ea3023c  lw          $v1, 0x23C($s5)
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 572)));
    // 0x180bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180bb0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x180BB0u;
    {
        const bool branch_taken_0x180bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180bb0) {
            ctx->pc = 0x180BFCu;
            goto label_180bfc;
        }
    }
    ctx->pc = 0x180BB8u;
    // 0x180bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180bbc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180BBCu;
    {
        const bool branch_taken_0x180bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180bbc) {
            ctx->pc = 0x180BE4u;
            goto label_180be4;
        }
    }
    ctx->pc = 0x180BC4u;
    // 0x180bc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180BC4u;
    {
        const bool branch_taken_0x180bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180bc4) {
            ctx->pc = 0x180BD4u;
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180BCCu;
    // 0x180bcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x180BCCu;
    {
        const bool branch_taken_0x180bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180bcc) {
            ctx->pc = 0x180C14u;
            goto label_180c14;
        }
    }
    ctx->pc = 0x180BD4u;
label_180bd4:
    // 0x180bd4: 0x0  nop
    ctx->pc = 0x180bd4u;
    // NOP
    // 0x180bd8: 0xc6a00230  lwc1        $f0, 0x230($s5)
    ctx->pc = 0x180bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180bdc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x180BDCu;
    {
        const bool branch_taken_0x180bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180BDCu;
            // 0x180be0: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bdc) {
            ctx->pc = 0x180C14u;
            goto label_180c14;
        }
    }
    ctx->pc = 0x180BE4u;
label_180be4:
    // 0x180be4: 0x0  nop
    ctx->pc = 0x180be4u;
    // NOP
    // 0x180be8: 0xc6ad0248  lwc1        $f13, 0x248($s5)
    ctx->pc = 0x180be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180bec: 0xc05fd0c  jal         func_17F430
    ctx->pc = 0x180BECu;
    SET_GPR_U32(ctx, 31, 0x180BF4u);
    ctx->pc = 0x180BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180BECu;
            // 0x180bf0: 0xc6ac0230  lwc1        $f12, 0x230($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F430u;
    if (runtime->hasFunction(0x17F430u)) {
        auto targetFn = runtime->lookupFunction(0x17F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BF4u; }
        if (ctx->pc != 0x180BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UniformityRand__Fff_0x17f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BF4u; }
        if (ctx->pc != 0x180BF4u) { return; }
    }
    ctx->pc = 0x180BF4u;
label_180bf4:
    // 0x180bf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180BF4u;
    {
        const bool branch_taken_0x180bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180BF4u;
            // 0x180bf8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bf4) {
            ctx->pc = 0x180C14u;
            goto label_180c14;
        }
    }
    ctx->pc = 0x180BFCu;
label_180bfc:
    // 0x180bfc: 0x0  nop
    ctx->pc = 0x180bfcu;
    // NOP
    // 0x180c00: 0xc6ac0230  lwc1        $f12, 0x230($s5)
    ctx->pc = 0x180c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180c04: 0xc6ad0248  lwc1        $f13, 0x248($s5)
    ctx->pc = 0x180c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180c08: 0xc05fd28  jal         func_17F4A0
    ctx->pc = 0x180C08u;
    SET_GPR_U32(ctx, 31, 0x180C10u);
    ctx->pc = 0x180C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C08u;
            // 0x180c0c: 0x8ea40254  lw          $a0, 0x254($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 596)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (runtime->hasFunction(0x17F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x17F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C10u; }
        if (ctx->pc != 0x180C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegularityRand__Fffi_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C10u; }
        if (ctx->pc != 0x180C10u) { return; }
    }
    ctx->pc = 0x180C10u;
label_180c10:
    // 0x180c10: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x180c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_180c14:
    // 0x180c14: 0x0  nop
    ctx->pc = 0x180c14u;
    // NOP
    // 0x180c18: 0x8ea202e0  lw          $v0, 0x2E0($s5)
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 736)));
    // 0x180c1c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x180c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x180c20: 0x8ea202e0  lw          $v0, 0x2E0($s5)
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 736)));
    // 0x180c24: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x180C24u;
    {
        const bool branch_taken_0x180c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180c24) {
            ctx->pc = 0x180C88u;
            goto label_180c88;
        }
    }
    ctx->pc = 0x180C2Cu;
    // 0x180c2c: 0x8ea20258  lw          $v0, 0x258($s5)
    ctx->pc = 0x180c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x180c30: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180C30u;
    {
        const bool branch_taken_0x180c30 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x180c30) {
            ctx->pc = 0x180C40u;
            goto label_180c40;
        }
    }
    ctx->pc = 0x180C38u;
    // 0x180c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180c3c: 0xaea20258  sw          $v0, 0x258($s5)
    ctx->pc = 0x180c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 600), GPR_U32(ctx, 2));
label_180c40:
    // 0x180c40: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x180C40u;
    SET_GPR_U32(ctx, 31, 0x180C48u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C48u; }
        if (ctx->pc != 0x180C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C48u; }
        if (ctx->pc != 0x180C48u) { return; }
    }
    ctx->pc = 0x180C48u;
label_180c48:
    // 0x180c48: 0x8ea30258  lw          $v1, 0x258($s5)
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x180c4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x180C4Cu;
    {
        const bool branch_taken_0x180c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C4Cu;
            // 0x180c50: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c4c) {
            ctx->pc = 0x180C58u;
            goto label_180c58;
        }
    }
    ctx->pc = 0x180C54u;
    // 0x180c54: 0x1cd  break       0, 7
    ctx->pc = 0x180c54u;
    runtime->handleBreak(rdram, ctx);
label_180c58:
    // 0x180c58: 0x1010  mfhi        $v0
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x180c5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180c60: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x180c64: 0x8c62025c  lw          $v0, 0x25C($v1)
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x180c68: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x180c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x180c6c: 0x8c620260  lw          $v0, 0x260($v1)
    ctx->pc = 0x180c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x180c70: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x180c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x180c74: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x180c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x180c78: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x180c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x180c7c: 0x8c620268  lw          $v0, 0x268($v1)
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
    // 0x180c80: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x180C80u;
    {
        const bool branch_taken_0x180c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C80u;
            // 0x180c84: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c80) {
            ctx->pc = 0x180DA4u;
            goto label_180da4;
        }
    }
    ctx->pc = 0x180C88u;
label_180c88:
    // 0x180c88: 0x8ea3025c  lw          $v1, 0x25C($s5)
    ctx->pc = 0x180c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 604)));
    // 0x180c8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180c90: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x180c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x180c94: 0x8ea30260  lw          $v1, 0x260($s5)
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 608)));
    // 0x180c98: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x180c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x180c9c: 0x8ea30264  lw          $v1, 0x264($s5)
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 612)));
    // 0x180ca0: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x180ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x180ca4: 0x8ea30268  lw          $v1, 0x268($s5)
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 616)));
    // 0x180ca8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x180ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x180cac: 0x8ea3026c  lw          $v1, 0x26C($s5)
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 620)));
    // 0x180cb0: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x180cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x180cb4: 0x8ea30270  lw          $v1, 0x270($s5)
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x180cb8: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x180cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x180cbc: 0x8ea30274  lw          $v1, 0x274($s5)
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
    // 0x180cc0: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x180cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x180cc4: 0x8ea30278  lw          $v1, 0x278($s5)
    ctx->pc = 0x180cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x180cc8: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x180cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x180ccc: 0x8ea3027c  lw          $v1, 0x27C($s5)
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 636)));
    // 0x180cd0: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x180cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x180cd4: 0x8ea30280  lw          $v1, 0x280($s5)
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 640)));
    // 0x180cd8: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x180cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x180cdc: 0x8ea30284  lw          $v1, 0x284($s5)
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 644)));
    // 0x180ce0: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x180ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x180ce4: 0x8ea30288  lw          $v1, 0x288($s5)
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 648)));
    // 0x180ce8: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x180ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x180cec: 0x8ea3028c  lw          $v1, 0x28C($s5)
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 652)));
    // 0x180cf0: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x180cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x180cf4: 0x8ea30290  lw          $v1, 0x290($s5)
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 656)));
    // 0x180cf8: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x180cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
    // 0x180cfc: 0x8ea30294  lw          $v1, 0x294($s5)
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 660)));
    // 0x180d00: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x180d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x180d04: 0x8ea30298  lw          $v1, 0x298($s5)
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 664)));
    // 0x180d08: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x180d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x180d0c: 0x8ea3029c  lw          $v1, 0x29C($s5)
    ctx->pc = 0x180d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 668)));
    // 0x180d10: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x180d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x180d14: 0x8ea302a0  lw          $v1, 0x2A0($s5)
    ctx->pc = 0x180d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x180d18: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x180d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x180d1c: 0x8ea302a4  lw          $v1, 0x2A4($s5)
    ctx->pc = 0x180d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x180d20: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x180d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x180d24: 0x8ea302a8  lw          $v1, 0x2A8($s5)
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x180d28: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x180d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
    // 0x180d2c: 0x8ea302ac  lw          $v1, 0x2AC($s5)
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
    // 0x180d30: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x180d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
    // 0x180d34: 0x8ea302b0  lw          $v1, 0x2B0($s5)
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x180d38: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x180d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
    // 0x180d3c: 0x8ea302b4  lw          $v1, 0x2B4($s5)
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x180d40: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x180d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x180d44: 0x8ea302b8  lw          $v1, 0x2B8($s5)
    ctx->pc = 0x180d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x180d48: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x180d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
    // 0x180d4c: 0x8ea302bc  lw          $v1, 0x2BC($s5)
    ctx->pc = 0x180d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 700)));
    // 0x180d50: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x180d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
    // 0x180d54: 0x8ea302c0  lw          $v1, 0x2C0($s5)
    ctx->pc = 0x180d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
    // 0x180d58: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x180d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x180d5c: 0x8ea302c4  lw          $v1, 0x2C4($s5)
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 708)));
    // 0x180d60: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x180d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x180d64: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
    // 0x180d68: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x180d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
    // 0x180d6c: 0x8ea302cc  lw          $v1, 0x2CC($s5)
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
    // 0x180d70: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x180d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
    // 0x180d74: 0x8ea302d0  lw          $v1, 0x2D0($s5)
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 720)));
    // 0x180d78: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x180d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x180d7c: 0x8ea302d4  lw          $v1, 0x2D4($s5)
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 724)));
    // 0x180d80: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x180d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x180d84: 0x8ea302d8  lw          $v1, 0x2D8($s5)
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
    // 0x180d88: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x180d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x180d8c: 0x8ea30258  lw          $v1, 0x258($s5)
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x180d90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x180D90u;
    {
        const bool branch_taken_0x180d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D90u;
            // 0x180d94: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d90) {
            ctx->pc = 0x180D9Cu;
            goto label_180d9c;
        }
    }
    ctx->pc = 0x180D98u;
    // 0x180d98: 0x1cd  break       0, 7
    ctx->pc = 0x180d98u;
    runtime->handleBreak(rdram, ctx);
label_180d9c:
    // 0x180d9c: 0x1012  mflo        $v0
    ctx->pc = 0x180d9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x180da0: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x180da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_180da4:
    // 0x180da4: 0x0  nop
    ctx->pc = 0x180da4u;
    // NOP
    // 0x180da8: 0x8ea202e4  lw          $v0, 0x2E4($s5)
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 740)));
    // 0x180dac: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x180db0: 0x26a502f0  addiu       $a1, $s5, 0x2F0
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 752));
    // 0x180db4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x180db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180db8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x180DB8u;
    SET_GPR_U32(ctx, 31, 0x180DC0u);
    ctx->pc = 0x180DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180DB8u;
            // 0x180dbc: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DC0u; }
        if (ctx->pc != 0x180DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DC0u; }
        if (ctx->pc != 0x180DC0u) { return; }
    }
    ctx->pc = 0x180DC0u;
label_180dc0:
    // 0x180dc0: 0xc6a00300  lwc1        $f0, 0x300($s5)
    ctx->pc = 0x180dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dc4: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x180dc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x180dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dcc: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x180dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x180dd0: 0xc6a00304  lwc1        $f0, 0x304($s5)
    ctx->pc = 0x180dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dd4: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x180dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x180dd8: 0x8ea302dc  lw          $v1, 0x2DC($s5)
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x180ddc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x180DDCu;
    {
        const bool branch_taken_0x180ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DDCu;
            // 0x180de0: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ddc) {
            ctx->pc = 0x180E20u;
            goto label_180e20;
        }
    }
    ctx->pc = 0x180DE4u;
    // 0x180de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180de8:
    // 0x180de8: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x180dec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180df0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180DF0u;
    {
        const bool branch_taken_0x180df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180df0) {
            ctx->pc = 0x180E10u;
            goto label_180e10;
        }
    }
    ctx->pc = 0x180DF8u;
    // 0x180df8: 0x41240  sll         $v0, $a0, 9
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x180dfc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x180dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x180e00: 0xc05fddc  jal         func_17F770
    ctx->pc = 0x180E00u;
    SET_GPR_U32(ctx, 31, 0x180E08u);
    ctx->pc = 0x180E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E00u;
            // 0x180e04: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F770u;
    if (runtime->hasFunction(0x17F770u)) {
        auto targetFn = runtime->lookupFunction(0x17F770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E08u; }
        if (ctx->pc != 0x180E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffect__7CEffectFP12EFFECT_PARAM_0x17f770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E08u; }
        if (ctx->pc != 0x180E08u) { return; }
    }
    ctx->pc = 0x180E08u;
label_180e08:
    // 0x180e08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180E08u;
    {
        const bool branch_taken_0x180e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180e08) {
            ctx->pc = 0x180E20u;
            goto label_180e20;
        }
    }
    ctx->pc = 0x180E10u;
label_180e10:
    // 0x180e10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180e14: 0x93182a  slt         $v1, $a0, $s3
    ctx->pc = 0x180e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x180e18: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x180E18u;
    {
        const bool branch_taken_0x180e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E18u;
            // 0x180e1c: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e18) {
            ctx->pc = 0x180DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180de8;
        }
    }
    ctx->pc = 0x180E20u;
label_180e20:
    // 0x180e20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x180e24: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x180e24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x180e28: 0x1460fd48  bnez        $v1, . + 4 + (-0x2B8 << 2)
    ctx->pc = 0x180E28u;
    {
        const bool branch_taken_0x180e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180e28) {
            ctx->pc = 0x18034Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18034c;
        }
    }
    ctx->pc = 0x180E30u;
label_180e30:
    // 0x180e30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x180e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_180e34:
    // 0x180e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x180e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x180E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E4Cu;
            // 0x180e50: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180E54u;
}
