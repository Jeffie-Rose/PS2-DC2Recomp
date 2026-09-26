#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Switch__20CStartupEpisodeTitleFi
// Address: 0x28b1f0 - 0x28b34c
void Switch__20CStartupEpisodeTitleFi_0x28b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Switch__20CStartupEpisodeTitleFi_0x28b1f0");
#endif

    switch (ctx->pc) {
        case 0x28b258u: goto label_28b258;
        case 0x28b270u: goto label_28b270;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b310u: goto label_28b310;
        default: break;
    }

    ctx->pc = 0x28b1f0u;

    // 0x28b1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28b1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b1fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b208: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28b20c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28b20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b210: 0x8f858da8  lw          $a1, -0x7258($gp)
    ctx->pc = 0x28b210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x28b214: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x28b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x28b218: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x28b21c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b224: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28b228: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28B228u;
    {
        const bool branch_taken_0x28b228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B228u;
            // 0x28b22c: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b228) {
            ctx->pc = 0x28B2F8u;
            goto label_28b2f8;
        }
    }
    ctx->pc = 0x28B230u;
    // 0x28b230: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b234: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x28b234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x28b238: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x28b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x28b23c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x28b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28b240: 0xac470190  sw          $a3, 0x190($v0)
    ctx->pc = 0x28b240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 7));
    // 0x28b244: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x28b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b248: 0xac460194  sw          $a2, 0x194($v0)
    ctx->pc = 0x28b248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 6));
    // 0x28b24c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x28b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b250: 0xc0be9a0  jal         func_2FA680
    ctx->pc = 0x28B250u;
    SET_GPR_U32(ctx, 31, 0x28B258u);
    ctx->pc = 0x28B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B250u;
            // 0x28b254: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA680u;
    if (runtime->hasFunction(0x2FA680u)) {
        auto targetFn = runtime->lookupFunction(0x2FA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B258u; }
        if (ctx->pc != 0x28B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorTitle__16CDngFloorManagerFi_0x2fa680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B258u; }
        if (ctx->pc != 0x28B258u) { return; }
    }
    ctx->pc = 0x28B258u;
label_28b258:
    // 0x28b258: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b25c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28b25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b264: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b268: 0xc05638c  jal         func_158E30
    ctx->pc = 0x28B268u;
    SET_GPR_U32(ctx, 31, 0x28B270u);
    ctx->pc = 0x28B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B268u;
            // 0x28b26c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B270u; }
        if (ctx->pc != 0x28B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B270u; }
        if (ctx->pc != 0x28B270u) { return; }
    }
    ctx->pc = 0x28B270u;
label_28b270:
    // 0x28b270: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b274: 0xc05484c  jal         func_152130
    ctx->pc = 0x28B274u;
    SET_GPR_U32(ctx, 31, 0x28B27Cu);
    ctx->pc = 0x28B278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B274u;
            // 0x28b278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B27Cu; }
        if (ctx->pc != 0x28B27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B27Cu; }
        if (ctx->pc != 0x28B27Cu) { return; }
    }
    ctx->pc = 0x28B27Cu;
label_28b27c:
    // 0x28b27c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x28b27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28b280: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x28b280u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x28b284: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x28b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x28b288: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x28b288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b28c: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x28b28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28b290: 0x2861009a  slti        $at, $v1, 0x9A
    ctx->pc = 0x28b290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)154) ? 1 : 0);
    // 0x28b294: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B294u;
    {
        const bool branch_taken_0x28b294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B294u;
            // 0x28b298: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b294) {
            ctx->pc = 0x28B2A0u;
            goto label_28b2a0;
        }
    }
    ctx->pc = 0x28B29Cu;
    // 0x28b29c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x28b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_28b2a0:
    // 0x28b2a0: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x28b2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28b2a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B2A4u;
    {
        const bool branch_taken_0x28b2a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2A4u;
            // 0x28b2a8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2a4) {
            ctx->pc = 0x28B2B4u;
            goto label_28b2b4;
        }
    }
    ctx->pc = 0x28B2ACu;
    // 0x28b2ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28b2b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_28b2b4:
    // 0x28b2b4: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x28b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x28b2b8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B2B8u;
    {
        const bool branch_taken_0x28b2b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2B8u;
            // 0x28b2bc: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2b8) {
            ctx->pc = 0x28B2C8u;
            goto label_28b2c8;
        }
    }
    ctx->pc = 0x28B2C0u;
    // 0x28b2c0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28b2c4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x28b2c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_28b2c8:
    // 0x28b2c8: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x28b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28b2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2d0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b2d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x28b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28b2d8: 0xac860190  sw          $a2, 0x190($a0)
    ctx->pc = 0x28b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 6));
    // 0x28b2dc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b2e0: 0xac85018c  sw          $a1, 0x18C($a0)
    ctx->pc = 0x28b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 5));
    // 0x28b2e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x28b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x28b2e8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b2ec: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x28b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x28b2f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28B2F0u;
    {
        const bool branch_taken_0x28b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2F0u;
            // 0x28b2f4: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2f0) {
            ctx->pc = 0x28B330u;
            goto label_28b330;
        }
    }
    ctx->pc = 0x28B2F8u;
label_28b2f8:
    // 0x28b2f8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x28b2f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b2fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28B2FCu;
    {
        const bool branch_taken_0x28b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2fc) {
            ctx->pc = 0x28B330u;
            goto label_28b330;
        }
    }
    ctx->pc = 0x28B304u;
    // 0x28b304: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x28b304u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28b308: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x28B308u;
    SET_GPR_U32(ctx, 31, 0x28B310u);
    ctx->pc = 0x28B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B308u;
            // 0x28b30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B310u; }
        if (ctx->pc != 0x28B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B310u; }
        if (ctx->pc != 0x28B310u) { return; }
    }
    ctx->pc = 0x28B310u;
label_28b310:
    // 0x28b310: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x28b310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x28b314: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b318: 0xae4317e4  sw          $v1, 0x17E4($s2)
    ctx->pc = 0x28b318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 3));
    // 0x28b31c: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x28b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
    // 0x28b320: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x28b320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
    // 0x28b324: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x28b324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x28b328: 0xae430134  sw          $v1, 0x134($s2)
    ctx->pc = 0x28b328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 3));
    // 0x28b32c: 0xae430138  sw          $v1, 0x138($s2)
    ctx->pc = 0x28b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 3));
label_28b330:
    // 0x28b330: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x28b330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x28b334: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28b334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b344: 0x3e00008  jr          $ra
    ctx->pc = 0x28B344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B344u;
            // 0x28b348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B34Cu;
}
