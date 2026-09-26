#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuChapterKey__Fv
// Address: 0x2aad70 - 0x2aaf70
void MenuChapterKey__Fv_0x2aad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuChapterKey__Fv_0x2aad70");
#endif

    switch (ctx->pc) {
        case 0x2aadb4u: goto label_2aadb4;
        case 0x2aae08u: goto label_2aae08;
        case 0x2aae14u: goto label_2aae14;
        case 0x2aae34u: goto label_2aae34;
        case 0x2aae80u: goto label_2aae80;
        case 0x2aaeccu: goto label_2aaecc;
        case 0x2aaed8u: goto label_2aaed8;
        case 0x2aaf04u: goto label_2aaf04;
        case 0x2aaf44u: goto label_2aaf44;
        default: break;
    }

    ctx->pc = 0x2aad70u;

    // 0x2aad70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aad74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aad78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aad7c: 0x83829ab8  lb          $v0, -0x6548($gp)
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941368)));
    // 0x2aad80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAD80u;
    {
        const bool branch_taken_0x2aad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD80u;
            // 0x2aad84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad80) {
            ctx->pc = 0x2AAD94u;
            goto label_2aad94;
        }
    }
    ctx->pc = 0x2AAD88u;
    // 0x2aad88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aad8c: 0xaf809ab4  sw          $zero, -0x654C($gp)
    ctx->pc = 0x2aad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941364), GPR_U32(ctx, 0));
    // 0x2aad90: 0xa3829ab8  sb          $v0, -0x6548($gp)
    ctx->pc = 0x2aad90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941368), (uint8_t)GPR_U32(ctx, 2));
label_2aad94:
    // 0x2aad94: 0x83829ac0  lb          $v0, -0x6540($gp)
    ctx->pc = 0x2aad94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941376)));
    // 0x2aad98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAD98u;
    {
        const bool branch_taken_0x2aad98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD98u;
            // 0x2aad9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad98) {
            ctx->pc = 0x2AADA8u;
            goto label_2aada8;
        }
    }
    ctx->pc = 0x2AADA0u;
    // 0x2aada0: 0xaf809abc  sw          $zero, -0x6544($gp)
    ctx->pc = 0x2aada0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941372), GPR_U32(ctx, 0));
    // 0x2aada4: 0xa3829ac0  sb          $v0, -0x6540($gp)
    ctx->pc = 0x2aada4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941376), (uint8_t)GPR_U32(ctx, 2));
label_2aada8:
    // 0x2aada8: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2aada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2aadac: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2AADACu;
    SET_GPR_U32(ctx, 31, 0x2AADB4u);
    ctx->pc = 0x2AADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADACu;
            // 0x2aadb0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADB4u; }
        if (ctx->pc != 0x2AADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADB4u; }
        if (ctx->pc != 0x2AADB4u) { return; }
    }
    ctx->pc = 0x2AADB4u;
label_2aadb4:
    // 0x2aadb4: 0x8f849a90  lw          $a0, -0x6570($gp)
    ctx->pc = 0x2aadb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941328)));
    // 0x2aadb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aadbc: 0x10830064  beq         $a0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2AADBCu;
    {
        const bool branch_taken_0x2aadbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADBCu;
            // 0x2aadc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadbc) {
            ctx->pc = 0x2AAF50u;
            goto label_2aaf50;
        }
    }
    ctx->pc = 0x2AADC4u;
    // 0x2aadc4: 0x10850025  beq         $a0, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AADC4u;
    {
        const bool branch_taken_0x2aadc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2aadc4) {
            ctx->pc = 0x2AAE5Cu;
            goto label_2aae5c;
        }
    }
    ctx->pc = 0x2AADCCu;
    // 0x2aadcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AADCCu;
    {
        const bool branch_taken_0x2aadcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aadcc) {
            ctx->pc = 0x2AADDCu;
            goto label_2aaddc;
        }
    }
    ctx->pc = 0x2AADD4u;
    // 0x2aadd4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2AADD4u;
    {
        const bool branch_taken_0x2aadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADD4u;
            // 0x2aadd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadd4) {
            ctx->pc = 0x2AAF60u;
            goto label_2aaf60;
        }
    }
    ctx->pc = 0x2AADDCu;
label_2aaddc:
    // 0x2aaddc: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2AADDCu;
    {
        const bool branch_taken_0x2aaddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaddc) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AADE4u;
    // 0x2aade4: 0x8f829aac  lw          $v0, -0x6554($gp)
    ctx->pc = 0x2aade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aade8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aadec: 0xaf829aac  sw          $v0, -0x6554($gp)
    ctx->pc = 0x2aadecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941356), GPR_U32(ctx, 2));
    // 0x2aadf0: 0x8f829aac  lw          $v0, -0x6554($gp)
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aadf4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AADF4u;
    {
        const bool branch_taken_0x2aadf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADF4u;
            // 0x2aadf8: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadf4) {
            ctx->pc = 0x2AAE18u;
            goto label_2aae18;
        }
    }
    ctx->pc = 0x2AADFCu;
    // 0x2aadfc: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aae00: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x2AAE00u;
    SET_GPR_U32(ctx, 31, 0x2AAE08u);
    ctx->pc = 0x2AAE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE00u;
            // 0x2aae04: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE08u; }
        if (ctx->pc != 0x2AAE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE08u; }
        if (ctx->pc != 0x2AAE08u) { return; }
    }
    ctx->pc = 0x2AAE08u;
label_2aae08:
    // 0x2aae08: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aae0c: 0xc062bf0  jal         func_18AFC0
    ctx->pc = 0x2AAE0Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE14u);
    ctx->pc = 0x2AAE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE0Cu;
            // 0x2aae10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFC0u;
    if (runtime->hasFunction(0x18AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE14u; }
        if (ctx->pc != 0x2AAE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPlay__6CSoundFi_0x18afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE14u; }
        if (ctx->pc != 0x2AAE14u) { return; }
    }
    ctx->pc = 0x2AAE14u;
label_2aae14:
    // 0x2aae14: 0xaf809ab4  sw          $zero, -0x654C($gp)
    ctx->pc = 0x2aae14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941364), GPR_U32(ctx, 0));
label_2aae18:
    // 0x2aae18: 0x8f839a94  lw          $v1, -0x656C($gp)
    ctx->pc = 0x2aae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aae1c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aae20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2aae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aae24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aae28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aae28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aae2c: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE34u);
    ctx->pc = 0x2AAE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE2Cu;
            // 0x2aae30: 0x2464001c  addiu       $a0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE34u; }
        if (ctx->pc != 0x2AAE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE34u; }
        if (ctx->pc != 0x2AAE34u) { return; }
    }
    ctx->pc = 0x2AAE34u;
label_2aae34:
    // 0x2aae34: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2AAE34u;
    {
        const bool branch_taken_0x2aae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aae34) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAE3Cu;
    // 0x2aae3c: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aae40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae44: 0xaf839a90  sw          $v1, -0x6570($gp)
    ctx->pc = 0x2aae44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941328), GPR_U32(ctx, 3));
    // 0x2aae48: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2aae48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2aae4c: 0xaf809aac  sw          $zero, -0x6554($gp)
    ctx->pc = 0x2aae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941356), GPR_U32(ctx, 0));
    // 0x2aae50: 0xaf809ab0  sw          $zero, -0x6550($gp)
    ctx->pc = 0x2aae50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941360), GPR_U32(ctx, 0));
    // 0x2aae54: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2AAE54u;
    {
        const bool branch_taken_0x2aae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE54u;
            // 0x2aae58: 0xaf809abc  sw          $zero, -0x6544($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae54) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAE5Cu;
label_2aae5c:
    // 0x2aae5c: 0x8f839a94  lw          $v1, -0x656C($gp)
    ctx->pc = 0x2aae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aae60: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aae64: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aae68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aae6c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2aae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2aae70: 0x8f829ab0  lw          $v0, -0x6550($gp)
    ctx->pc = 0x2aae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941360)));
    // 0x2aae74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aae78: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x2AAE78u;
    SET_GPR_U32(ctx, 31, 0x2AAE80u);
    ctx->pc = 0x2AAE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE78u;
            // 0x2aae7c: 0xaf829ab0  sw          $v0, -0x6550($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE80u; }
        if (ctx->pc != 0x2AAE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE80u; }
        if (ctx->pc != 0x2AAE80u) { return; }
    }
    ctx->pc = 0x2AAE80u;
label_2aae80:
    // 0x2aae80: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2aae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2aae84: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAE84u;
    {
        const bool branch_taken_0x2aae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AAE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE84u;
            // 0x2aae88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae84) {
            ctx->pc = 0x2AAEA0u;
            goto label_2aaea0;
        }
    }
    ctx->pc = 0x2AAE8Cu;
    // 0x2aae8c: 0x8f839ab0  lw          $v1, -0x6550($gp)
    ctx->pc = 0x2aae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941360)));
    // 0x2aae90: 0x28610709  slti        $at, $v1, 0x709
    ctx->pc = 0x2aae90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1801) ? 1 : 0);
    // 0x2aae94: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAE94u;
    {
        const bool branch_taken_0x2aae94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aae94) {
            ctx->pc = 0x2AAEA4u;
            goto label_2aaea4;
        }
    }
    ctx->pc = 0x2AAE9Cu;
    // 0x2aae9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaea0:
    // 0x2aaea0: 0xaf839abc  sw          $v1, -0x6544($gp)
    ctx->pc = 0x2aaea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941372), GPR_U32(ctx, 3));
label_2aaea4:
    // 0x2aaea4: 0x8f839abc  lw          $v1, -0x6544($gp)
    ctx->pc = 0x2aaea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941372)));
    // 0x2aaea8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AAEA8u;
    {
        const bool branch_taken_0x2aaea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaea8) {
            ctx->pc = 0x2AAEE4u;
            goto label_2aaee4;
        }
    }
    ctx->pc = 0x2AAEB0u;
    // 0x2aaeb0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AAEB0u;
    {
        const bool branch_taken_0x2aaeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaeb0) {
            ctx->pc = 0x2AAEE4u;
            goto label_2aaee4;
        }
    }
    ctx->pc = 0x2AAEB8u;
    // 0x2aaeb8: 0x8f829aac  lw          $v0, -0x6554($gp)
    ctx->pc = 0x2aaeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aaebc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAEBCu;
    {
        const bool branch_taken_0x2aaebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAEBCu;
            // 0x2aaec0: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaebc) {
            ctx->pc = 0x2AAED8u;
            goto label_2aaed8;
        }
    }
    ctx->pc = 0x2AAEC4u;
    // 0x2aaec4: 0xc062bf4  jal         func_18AFD0
    ctx->pc = 0x2AAEC4u;
    SET_GPR_U32(ctx, 31, 0x2AAECCu);
    ctx->pc = 0x2AAEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAEC4u;
            // 0x2aaec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFD0u;
    if (runtime->hasFunction(0x18AFD0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAECCu; }
        if (ctx->pc != 0x2AAECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStop__6CSoundFi_0x18afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAECCu; }
        if (ctx->pc != 0x2AAECCu) { return; }
    }
    ctx->pc = 0x2AAECCu;
label_2aaecc:
    // 0x2aaecc: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aaeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aaed0: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x2AAED0u;
    SET_GPR_U32(ctx, 31, 0x2AAED8u);
    ctx->pc = 0x2AAED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAED0u;
            // 0x2aaed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAED8u; }
        if (ctx->pc != 0x2AAED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAED8u; }
        if (ctx->pc != 0x2AAED8u) { return; }
    }
    ctx->pc = 0x2AAED8u;
label_2aaed8:
    // 0x2aaed8: 0x8f829aac  lw          $v0, -0x6554($gp)
    ctx->pc = 0x2aaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aaedc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aaedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aaee0: 0xaf829aac  sw          $v0, -0x6554($gp)
    ctx->pc = 0x2aaee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941356), GPR_U32(ctx, 2));
label_2aaee4:
    // 0x2aaee4: 0x8f839aac  lw          $v1, -0x6554($gp)
    ctx->pc = 0x2aaee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aaee8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2aaee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2aaeec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAEECu;
    {
        const bool branch_taken_0x2aaeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aaeec) {
            ctx->pc = 0x2AAF04u;
            goto label_2aaf04;
        }
    }
    ctx->pc = 0x2AAEF4u;
    // 0x2aaef4: 0x8f849aa8  lw          $a0, -0x6558($gp)
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941352)));
    // 0x2aaef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaefc: 0xc063818  jal         func_18E060
    ctx->pc = 0x2AAEFCu;
    SET_GPR_U32(ctx, 31, 0x2AAF04u);
    ctx->pc = 0x2AAF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAEFCu;
            // 0x2aaf00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF04u; }
        if (ctx->pc != 0x2AAF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF04u; }
        if (ctx->pc != 0x2AAF04u) { return; }
    }
    ctx->pc = 0x2AAF04u;
label_2aaf04:
    // 0x2aaf04: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aaf08: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2aaf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2aaf0c: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x2aaf0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2aaf10: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAF10u;
    {
        const bool branch_taken_0x2aaf10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf10) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAF18u;
    // 0x2aaf18: 0x8f829aac  lw          $v0, -0x6554($gp)
    ctx->pc = 0x2aaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x2aaf1c: 0x28420196  slti        $v0, $v0, 0x196
    ctx->pc = 0x2aaf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)406) ? 1 : 0);
    // 0x2aaf20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AAF20u;
    {
        const bool branch_taken_0x2aaf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf20) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAF28u;
    // 0x2aaf28: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2aaf2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aaf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aaf30: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2aaf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2aaf34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2aaf34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2aaf38: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2aaf38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2aaf3c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2AAF3Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF44u);
    ctx->pc = 0x2AAF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF3Cu;
            // 0x2aaf40: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF44u; }
        if (ctx->pc != 0x2AAF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF44u; }
        if (ctx->pc != 0x2AAF44u) { return; }
    }
    ctx->pc = 0x2AAF44u;
label_2aaf44:
    // 0x2aaf44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aaf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aaf48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF48u;
    {
        const bool branch_taken_0x2aaf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF48u;
            // 0x2aaf4c: 0xaf829a90  sw          $v0, -0x6570($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf48) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAF50u;
label_2aaf50:
    // 0x2aaf50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAF50u;
    {
        const bool branch_taken_0x2aaf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf50) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAF58u;
    // 0x2aaf58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2aaf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaf5c:
    // 0x2aaf5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aaf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf60:
    // 0x2aaf60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aaf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aaf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aaf68: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF68u;
            // 0x2aaf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAF70u;
}
