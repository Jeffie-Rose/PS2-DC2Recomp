#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseLoop__Fv
// Address: 0x309de0 - 0x30a25c
void PauseLoop__Fv_0x309de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseLoop__Fv_0x309de0");
#endif

    switch (ctx->pc) {
        case 0x309e18u: goto label_309e18;
        case 0x309e28u: goto label_309e28;
        case 0x309e3cu: goto label_309e3c;
        case 0x309e54u: goto label_309e54;
        case 0x309e64u: goto label_309e64;
        case 0x309e6cu: goto label_309e6c;
        case 0x309e88u: goto label_309e88;
        case 0x309e90u: goto label_309e90;
        case 0x309e98u: goto label_309e98;
        case 0x309ea0u: goto label_309ea0;
        case 0x309ea8u: goto label_309ea8;
        case 0x309ed0u: goto label_309ed0;
        case 0x309eecu: goto label_309eec;
        case 0x309ef4u: goto label_309ef4;
        case 0x309f00u: goto label_309f00;
        case 0x309f1cu: goto label_309f1c;
        case 0x309f38u: goto label_309f38;
        case 0x309f44u: goto label_309f44;
        case 0x309f60u: goto label_309f60;
        case 0x309f88u: goto label_309f88;
        case 0x309f9cu: goto label_309f9c;
        case 0x309facu: goto label_309fac;
        case 0x309fb8u: goto label_309fb8;
        case 0x309fc4u: goto label_309fc4;
        case 0x309fd0u: goto label_309fd0;
        case 0x309fdcu: goto label_309fdc;
        case 0x309fe8u: goto label_309fe8;
        case 0x309ff4u: goto label_309ff4;
        case 0x30a000u: goto label_30a000;
        case 0x30a024u: goto label_30a024;
        case 0x30a040u: goto label_30a040;
        case 0x30a050u: goto label_30a050;
        case 0x30a064u: goto label_30a064;
        case 0x30a07cu: goto label_30a07c;
        case 0x30a090u: goto label_30a090;
        case 0x30a098u: goto label_30a098;
        case 0x30a0acu: goto label_30a0ac;
        case 0x30a124u: goto label_30a124;
        case 0x30a130u: goto label_30a130;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a154u: goto label_30a154;
        case 0x30a164u: goto label_30a164;
        case 0x30a178u: goto label_30a178;
        case 0x30a188u: goto label_30a188;
        case 0x30a19cu: goto label_30a19c;
        case 0x30a1a4u: goto label_30a1a4;
        case 0x30a1b0u: goto label_30a1b0;
        case 0x30a1bcu: goto label_30a1bc;
        case 0x30a1d0u: goto label_30a1d0;
        case 0x30a1f0u: goto label_30a1f0;
        case 0x30a218u: goto label_30a218;
        case 0x30a228u: goto label_30a228;
        case 0x30a23cu: goto label_30a23c;
        default: break;
    }

    ctx->pc = 0x309de0u;

    // 0x309de0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x309de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x309de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x309de8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x309de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x309dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x309decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x309df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x309df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309df8: 0x8f82a1a8  lw          $v0, -0x5E58($gp)
    ctx->pc = 0x309df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943144)));
    // 0x309dfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309DFCu;
    {
        const bool branch_taken_0x309dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309DFCu;
            // 0x309e00: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dfc) {
            ctx->pc = 0x309E0Cu;
            goto label_309e0c;
        }
    }
    ctx->pc = 0x309E04u;
    // 0x309e04: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x309E04u;
    {
        const bool branch_taken_0x309e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309E04u;
            // 0x309e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e04) {
            ctx->pc = 0x30A240u;
            goto label_30a240;
        }
    }
    ctx->pc = 0x309E0Cu;
label_309e0c:
    // 0x309e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x309e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e10: 0xc050878  jal         func_1421E0
    ctx->pc = 0x309E10u;
    SET_GPR_U32(ctx, 31, 0x309E18u);
    ctx->pc = 0x309E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E10u;
            // 0x309e14: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E18u; }
        if (ctx->pc != 0x309E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E18u; }
        if (ctx->pc != 0x309E18u) { return; }
    }
    ctx->pc = 0x309E18u;
label_309e18:
    // 0x309e18: 0x8f85a1b4  lw          $a1, -0x5E4C($gp)
    ctx->pc = 0x309e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943156)));
    // 0x309e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e20: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x309E20u;
    SET_GPR_U32(ctx, 31, 0x309E28u);
    ctx->pc = 0x309E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E20u;
            // 0x309e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E28u; }
        if (ctx->pc != 0x309E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E28u; }
        if (ctx->pc != 0x309E28u) { return; }
    }
    ctx->pc = 0x309E28u;
label_309e28:
    // 0x309e28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x309e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x309e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e30: 0x24a52488  addiu       $a1, $a1, 0x2488
    ctx->pc = 0x309e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9352));
    // 0x309e34: 0xc04b414  jal         func_12D050
    ctx->pc = 0x309E34u;
    SET_GPR_U32(ctx, 31, 0x309E3Cu);
    ctx->pc = 0x309E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E34u;
            // 0x309e38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E3Cu; }
        if (ctx->pc != 0x309E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E3Cu; }
        if (ctx->pc != 0x309E3Cu) { return; }
    }
    ctx->pc = 0x309E3Cu;
label_309e3c:
    // 0x309e3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x309e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e40: 0x8f82a1c0  lw          $v0, -0x5E40($gp)
    ctx->pc = 0x309e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309e44: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x309E44u;
    {
        const bool branch_taken_0x309e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309e44) {
            ctx->pc = 0x309F04u;
            goto label_309f04;
        }
    }
    ctx->pc = 0x309E4Cu;
    // 0x309e4c: 0xc064218  jal         func_190860
    ctx->pc = 0x309E4Cu;
    SET_GPR_U32(ctx, 31, 0x309E54u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E54u; }
        if (ctx->pc != 0x309E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E54u; }
        if (ctx->pc != 0x309E54u) { return; }
    }
    ctx->pc = 0x309E54u;
label_309e54:
    // 0x309e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x309e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x309e5c: 0xc063818  jal         func_18E060
    ctx->pc = 0x309E5Cu;
    SET_GPR_U32(ctx, 31, 0x309E64u);
    ctx->pc = 0x309E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E5Cu;
            // 0x309e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E64u; }
        if (ctx->pc != 0x309E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E64u; }
        if (ctx->pc != 0x309E64u) { return; }
    }
    ctx->pc = 0x309E64u;
label_309e64:
    // 0x309e64: 0xc06349c  jal         func_18D270
    ctx->pc = 0x309E64u;
    SET_GPR_U32(ctx, 31, 0x309E6Cu);
    ctx->pc = 0x309E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E64u;
            // 0x309e68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D270u;
    if (runtime->hasFunction(0x18D270u)) {
        auto targetFn = runtime->lookupFunction(0x18D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E6Cu; }
        if (ctx->pc != 0x309E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetMasterVol__Fi_0x18d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E6Cu; }
        if (ctx->pc != 0x309E6Cu) { return; }
    }
    ctx->pc = 0x309E6Cu;
label_309e6c:
    // 0x309e6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x309e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x309e70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309e74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x309e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309e78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x309e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x309e7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309e80: 0xc0634ac  jal         func_18D2B0
    ctx->pc = 0x309E80u;
    SET_GPR_U32(ctx, 31, 0x309E88u);
    ctx->pc = 0x309E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E80u;
            // 0x309e84: 0xe780a1c4  swc1        $f0, -0x5E3C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D2B0u;
    if (runtime->hasFunction(0x18D2B0u)) {
        auto targetFn = runtime->lookupFunction(0x18D2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E88u; }
        if (ctx->pc != 0x309E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndMasterVolFadeInOut__Fiiff_0x18d2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E88u; }
        if (ctx->pc != 0x309E88u) { return; }
    }
    ctx->pc = 0x309E88u;
label_309e88:
    // 0x309e88: 0xc063904  jal         func_18E410
    ctx->pc = 0x309E88u;
    SET_GPR_U32(ctx, 31, 0x309E90u);
    ctx->pc = 0x309E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E88u;
            // 0x309e8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E410u;
    if (runtime->hasFunction(0x18E410u)) {
        auto targetFn = runtime->lookupFunction(0x18E410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E90u; }
        if (ctx->pc != 0x309E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndPortSqPause__Fi_0x18e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E90u; }
        if (ctx->pc != 0x309E90u) { return; }
    }
    ctx->pc = 0x309E90u;
label_309e90:
    // 0x309e90: 0xc063904  jal         func_18E410
    ctx->pc = 0x309E90u;
    SET_GPR_U32(ctx, 31, 0x309E98u);
    ctx->pc = 0x309E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E90u;
            // 0x309e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E410u;
    if (runtime->hasFunction(0x18E410u)) {
        auto targetFn = runtime->lookupFunction(0x18E410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E98u; }
        if (ctx->pc != 0x309E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndPortSqPause__Fi_0x18e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309E98u; }
        if (ctx->pc != 0x309E98u) { return; }
    }
    ctx->pc = 0x309E98u;
label_309e98:
    // 0x309e98: 0xc04b120  jal         func_12C480
    ctx->pc = 0x309E98u;
    SET_GPR_U32(ctx, 31, 0x309EA0u);
    ctx->pc = 0x309E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309E98u;
            // 0x309e9c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EA0u; }
        if (ctx->pc != 0x309EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EA0u; }
        if (ctx->pc != 0x309EA0u) { return; }
    }
    ctx->pc = 0x309EA0u;
label_309ea0:
    // 0x309ea0: 0xc051100  jal         func_144400
    ctx->pc = 0x309EA0u;
    SET_GPR_U32(ctx, 31, 0x309EA8u);
    ctx->pc = 0x309EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309EA0u;
            // 0x309ea4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EA8u; }
        if (ctx->pc != 0x309EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EA8u; }
        if (ctx->pc != 0x309EA8u) { return; }
    }
    ctx->pc = 0x309EA8u;
label_309ea8:
    // 0x309ea8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x309ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x309eac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x309eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x309eb0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x309eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x309eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ebc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x309ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x309ec0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x309ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309ec4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x309ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x309ec8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x309EC8u;
    SET_GPR_U32(ctx, 31, 0x309ED0u);
    ctx->pc = 0x309ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309EC8u;
            // 0x309ecc: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309ED0u; }
        if (ctx->pc != 0x309ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309ED0u; }
        if (ctx->pc != 0x309ED0u) { return; }
    }
    ctx->pc = 0x309ED0u;
label_309ed0:
    // 0x309ed0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x309ed4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x309ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x309ed8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x309ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ee4: 0xc051158  jal         func_144560
    ctx->pc = 0x309EE4u;
    SET_GPR_U32(ctx, 31, 0x309EECu);
    ctx->pc = 0x309EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309EE4u;
            // 0x309ee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EECu; }
        if (ctx->pc != 0x309EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EECu; }
        if (ctx->pc != 0x309EECu) { return; }
    }
    ctx->pc = 0x309EECu;
label_309eec:
    // 0x309eec: 0xc0642fc  jal         func_190BF0
    ctx->pc = 0x309EECu;
    SET_GPR_U32(ctx, 31, 0x309EF4u);
    ctx->pc = 0x190BF0u;
    if (runtime->hasFunction(0x190BF0u)) {
        auto targetFn = runtime->lookupFunction(0x190BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EF4u; }
        if (ctx->pc != 0x309EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayTimeCountFlag__Fv_0x190bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309EF4u; }
        if (ctx->pc != 0x309EF4u) { return; }
    }
    ctx->pc = 0x309EF4u;
label_309ef4:
    // 0x309ef4: 0xaf82a1c8  sw          $v0, -0x5E38($gp)
    ctx->pc = 0x309ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943176), GPR_U32(ctx, 2));
    // 0x309ef8: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x309EF8u;
    SET_GPR_U32(ctx, 31, 0x309F00u);
    ctx->pc = 0x309EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309EF8u;
            // 0x309efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F00u; }
        if (ctx->pc != 0x309F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F00u; }
        if (ctx->pc != 0x309F00u) { return; }
    }
    ctx->pc = 0x309F00u;
label_309f00:
    // 0x309f00: 0xaf80a1cc  sw          $zero, -0x5E34($gp)
    ctx->pc = 0x309f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 0));
label_309f04:
    // 0x309f04: 0x8f83a1c0  lw          $v1, -0x5E40($gp)
    ctx->pc = 0x309f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309f08: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x309f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x309f0c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309F0Cu;
    {
        const bool branch_taken_0x309f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309f0c) {
            ctx->pc = 0x309F44u;
            goto label_309f44;
        }
    }
    ctx->pc = 0x309F14u;
    // 0x309f14: 0xc064164  jal         func_190590
    ctx->pc = 0x309F14u;
    SET_GPR_U32(ctx, 31, 0x309F1Cu);
    ctx->pc = 0x190590u;
    if (runtime->hasFunction(0x190590u)) {
        auto targetFn = runtime->lookupFunction(0x190590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F1Cu; }
        if (ctx->pc != 0x309F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamGetState__Fv_0x190590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F1Cu; }
        if (ctx->pc != 0x309F1Cu) { return; }
    }
    ctx->pc = 0x309F1Cu;
label_309f1c:
    // 0x309f1c: 0xaf82a1cc  sw          $v0, -0x5E34($gp)
    ctx->pc = 0x309f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943180), GPR_U32(ctx, 2));
    // 0x309f20: 0x8f82a1cc  lw          $v0, -0x5E34($gp)
    ctx->pc = 0x309f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x309f24: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x309f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x309f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309F28u;
    {
        const bool branch_taken_0x309f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f28) {
            ctx->pc = 0x309F44u;
            goto label_309f44;
        }
    }
    ctx->pc = 0x309F30u;
    // 0x309f30: 0xc06414c  jal         func_190530
    ctx->pc = 0x309F30u;
    SET_GPR_U32(ctx, 31, 0x309F38u);
    ctx->pc = 0x190530u;
    if (runtime->hasFunction(0x190530u)) {
        auto targetFn = runtime->lookupFunction(0x190530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F38u; }
        if (ctx->pc != 0x309F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamPause__Fv_0x190530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F38u; }
        if (ctx->pc != 0x309F38u) { return; }
    }
    ctx->pc = 0x309F38u;
label_309f38:
    // 0x309f38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x309f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309f3c: 0xc063478  jal         func_18D1E0
    ctx->pc = 0x309F3Cu;
    SET_GPR_U32(ctx, 31, 0x309F44u);
    ctx->pc = 0x309F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309F3Cu;
            // 0x309f40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D1E0u;
    if (runtime->hasFunction(0x18D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F44u; }
        if (ctx->pc != 0x309F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMasterVol__Fif_0x18d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F44u; }
        if (ctx->pc != 0x309F44u) { return; }
    }
    ctx->pc = 0x309F44u;
label_309f44:
    // 0x309f44: 0x8f82a1c0  lw          $v0, -0x5E40($gp)
    ctx->pc = 0x309f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309f48: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x309f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x309f4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x309F4Cu;
    {
        const bool branch_taken_0x309f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309F4Cu;
            // 0x309f50: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f4c) {
            ctx->pc = 0x309F60u;
            goto label_309f60;
        }
    }
    ctx->pc = 0x309F54u;
    // 0x309f54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x309f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309f58: 0xc063594  jal         func_18D650
    ctx->pc = 0x309F58u;
    SET_GPR_U32(ctx, 31, 0x309F60u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F60u; }
        if (ctx->pc != 0x309F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F60u; }
        if (ctx->pc != 0x309F60u) { return; }
    }
    ctx->pc = 0x309F60u;
label_309f60:
    // 0x309f60: 0x8f82a1c0  lw          $v0, -0x5E40($gp)
    ctx->pc = 0x309f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309f68: 0xaf82a1c0  sw          $v0, -0x5E40($gp)
    ctx->pc = 0x309f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943168), GPR_U32(ctx, 2));
    // 0x309f6c: 0x8f82a1c0  lw          $v0, -0x5E40($gp)
    ctx->pc = 0x309f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309f70: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x309f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x309f74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x309F74u;
    {
        const bool branch_taken_0x309f74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309F74u;
            // 0x309f78: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f74) {
            ctx->pc = 0x309F80u;
            goto label_309f80;
        }
    }
    ctx->pc = 0x309F7Cu;
    // 0x309f7c: 0xaf82a1c0  sw          $v0, -0x5E40($gp)
    ctx->pc = 0x309f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943168), GPR_U32(ctx, 2));
label_309f80:
    // 0x309f80: 0xc064220  jal         func_190880
    ctx->pc = 0x309F80u;
    SET_GPR_U32(ctx, 31, 0x309F88u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F88u; }
        if (ctx->pc != 0x309F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F88u; }
        if (ctx->pc != 0x309F88u) { return; }
    }
    ctx->pc = 0x309F88u;
label_309f88:
    // 0x309f88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x309f8c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309f90: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x309f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x309f94: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x309F94u;
    SET_GPR_U32(ctx, 31, 0x309F9Cu);
    ctx->pc = 0x309F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309F94u;
            // 0x309f98: 0x419021  addu        $s2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F9Cu; }
        if (ctx->pc != 0x309F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309F9Cu; }
        if (ctx->pc != 0x309F9Cu) { return; }
    }
    ctx->pc = 0x309F9Cu;
label_309f9c:
    // 0x309f9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309fa4: 0xc04d104  jal         func_134410
    ctx->pc = 0x309FA4u;
    SET_GPR_U32(ctx, 31, 0x309FACu);
    ctx->pc = 0x309FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FA4u;
            // 0x309fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FACu; }
        if (ctx->pc != 0x309FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FACu; }
        if (ctx->pc != 0x309FACu) { return; }
    }
    ctx->pc = 0x309FACu;
label_309fac:
    // 0x309fac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fb0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x309FB0u;
    SET_GPR_U32(ctx, 31, 0x309FB8u);
    ctx->pc = 0x309FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FB0u;
            // 0x309fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FB8u; }
        if (ctx->pc != 0x309FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FB8u; }
        if (ctx->pc != 0x309FB8u) { return; }
    }
    ctx->pc = 0x309FB8u;
label_309fb8:
    // 0x309fb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fbc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x309FBCu;
    SET_GPR_U32(ctx, 31, 0x309FC4u);
    ctx->pc = 0x309FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FBCu;
            // 0x309fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FC4u; }
        if (ctx->pc != 0x309FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FC4u; }
        if (ctx->pc != 0x309FC4u) { return; }
    }
    ctx->pc = 0x309FC4u;
label_309fc4:
    // 0x309fc4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fc8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x309FC8u;
    SET_GPR_U32(ctx, 31, 0x309FD0u);
    ctx->pc = 0x309FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FC8u;
            // 0x309fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FD0u; }
        if (ctx->pc != 0x309FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FD0u; }
        if (ctx->pc != 0x309FD0u) { return; }
    }
    ctx->pc = 0x309FD0u;
label_309fd0:
    // 0x309fd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fd4: 0xc04d424  jal         func_135090
    ctx->pc = 0x309FD4u;
    SET_GPR_U32(ctx, 31, 0x309FDCu);
    ctx->pc = 0x309FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FD4u;
            // 0x309fd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FDCu; }
        if (ctx->pc != 0x309FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FDCu; }
        if (ctx->pc != 0x309FDCu) { return; }
    }
    ctx->pc = 0x309FDCu;
label_309fdc:
    // 0x309fdc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fe0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x309FE0u;
    SET_GPR_U32(ctx, 31, 0x309FE8u);
    ctx->pc = 0x309FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FE0u;
            // 0x309fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FE8u; }
        if (ctx->pc != 0x309FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FE8u; }
        if (ctx->pc != 0x309FE8u) { return; }
    }
    ctx->pc = 0x309FE8u;
label_309fe8:
    // 0x309fe8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309fec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x309FECu;
    SET_GPR_U32(ctx, 31, 0x309FF4u);
    ctx->pc = 0x309FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FECu;
            // 0x309ff0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FF4u; }
        if (ctx->pc != 0x309FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309FF4u; }
        if (ctx->pc != 0x309FF4u) { return; }
    }
    ctx->pc = 0x309FF4u;
label_309ff4:
    // 0x309ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ff8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x309FF8u;
    SET_GPR_U32(ctx, 31, 0x30A000u);
    ctx->pc = 0x309FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309FF8u;
            // 0x309ffc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A000u; }
        if (ctx->pc != 0x30A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A000u; }
        if (ctx->pc != 0x30A000u) { return; }
    }
    ctx->pc = 0x30A000u;
label_30a000:
    // 0x30a000: 0x82420035  lb          $v0, 0x35($s2)
    ctx->pc = 0x30a000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x30a004: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A004u;
    {
        const bool branch_taken_0x30a004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A004u;
            // 0x30a008: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a004) {
            ctx->pc = 0x30A02Cu;
            goto label_30a02c;
        }
    }
    ctx->pc = 0x30A00Cu;
    // 0x30a00c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30a010: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a014: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a018: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30a018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a01c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30A01Cu;
    SET_GPR_U32(ctx, 31, 0x30A024u);
    ctx->pc = 0x30A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A01Cu;
            // 0x30a020: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A024u; }
        if (ctx->pc != 0x30A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A024u; }
        if (ctx->pc != 0x30A024u) { return; }
    }
    ctx->pc = 0x30A024u;
label_30a024:
    // 0x30a024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A024u;
    {
        const bool branch_taken_0x30a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A024u;
            // 0x30a028: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a024) {
            ctx->pc = 0x30A044u;
            goto label_30a044;
        }
    }
    ctx->pc = 0x30A02Cu;
label_30a02c:
    // 0x30a02c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a030: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a034: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30a034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a038: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30A038u;
    SET_GPR_U32(ctx, 31, 0x30A040u);
    ctx->pc = 0x30A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A038u;
            // 0x30a03c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A040u; }
        if (ctx->pc != 0x30A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A040u; }
        if (ctx->pc != 0x30A040u) { return; }
    }
    ctx->pc = 0x30A040u;
label_30a040:
    // 0x30a040: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30a044:
    // 0x30a044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a048: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A048u;
    SET_GPR_U32(ctx, 31, 0x30A050u);
    ctx->pc = 0x30A04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A048u;
            // 0x30a04c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A050u; }
        if (ctx->pc != 0x30A050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A050u; }
        if (ctx->pc != 0x30A050u) { return; }
    }
    ctx->pc = 0x30A050u;
label_30a050:
    // 0x30a050: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a05c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A05Cu;
    SET_GPR_U32(ctx, 31, 0x30A064u);
    ctx->pc = 0x30A060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A05Cu;
            // 0x30a060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A064u; }
        if (ctx->pc != 0x30A064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A064u; }
        if (ctx->pc != 0x30A064u) { return; }
    }
    ctx->pc = 0x30A064u;
label_30a064:
    // 0x30a064: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x30a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30a068: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a06c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30a070: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30a070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a074: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A074u;
    SET_GPR_U32(ctx, 31, 0x30A07Cu);
    ctx->pc = 0x30A078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A074u;
            // 0x30a078: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A07Cu; }
        if (ctx->pc != 0x30A07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A07Cu; }
        if (ctx->pc != 0x30A07Cu) { return; }
    }
    ctx->pc = 0x30A07Cu;
label_30a07c:
    // 0x30a07c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x30a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30a080: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a084: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x30a084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30a088: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A088u;
    SET_GPR_U32(ctx, 31, 0x30A090u);
    ctx->pc = 0x30A08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A088u;
            // 0x30a08c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A090u; }
        if (ctx->pc != 0x30A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A090u; }
        if (ctx->pc != 0x30A090u) { return; }
    }
    ctx->pc = 0x30A090u;
label_30a090:
    // 0x30a090: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30A090u;
    SET_GPR_U32(ctx, 31, 0x30A098u);
    ctx->pc = 0x30A094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A090u;
            // 0x30a094: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A098u; }
        if (ctx->pc != 0x30A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A098u; }
        if (ctx->pc != 0x30A098u) { return; }
    }
    ctx->pc = 0x30A098u;
label_30a098:
    // 0x30a098: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30a098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30a09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0a0: 0x24a52498  addiu       $a1, $a1, 0x2498
    ctx->pc = 0x30a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x30a0a4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30A0A4u;
    SET_GPR_U32(ctx, 31, 0x30A0ACu);
    ctx->pc = 0x30A0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0A4u;
            // 0x30a0a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A0ACu; }
        if (ctx->pc != 0x30A0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A0ACu; }
        if (ctx->pc != 0x30A0ACu) { return; }
    }
    ctx->pc = 0x30A0ACu;
label_30a0ac:
    // 0x30a0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0b0: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x30A0B0u;
    {
        const bool branch_taken_0x30a0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0B0u;
            // 0x30a0b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0b0) {
            ctx->pc = 0x30A1A8u;
            goto label_30a1a8;
        }
    }
    ctx->pc = 0x30A0B8u;
    // 0x30a0b8: 0x82420035  lb          $v0, 0x35($s2)
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x30a0bc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x30A0BCu;
    {
        const bool branch_taken_0x30a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a0bc) {
            ctx->pc = 0x30A1A4u;
            goto label_30a1a4;
        }
    }
    ctx->pc = 0x30A0C4u;
    // 0x30a0c4: 0x8f83a1b8  lw          $v1, -0x5E48($gp)
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943160)));
    // 0x30a0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a0cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A0CCu;
    {
        const bool branch_taken_0x30a0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0CCu;
            // 0x30a0d0: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0cc) {
            ctx->pc = 0x30A0D8u;
            goto label_30a0d8;
        }
    }
    ctx->pc = 0x30A0D4u;
    // 0x30a0d4: 0x2411002e  addiu       $s1, $zero, 0x2E
    ctx->pc = 0x30a0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_30a0d8:
    // 0x30a0d8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x30a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30a0dc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A0DCu;
    {
        const bool branch_taken_0x30a0dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0DCu;
            // 0x30a0e0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0dc) {
            ctx->pc = 0x30A0ECu;
            goto label_30a0ec;
        }
    }
    ctx->pc = 0x30A0E4u;
    // 0x30a0e4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a0e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30a0ec:
    // 0x30a0ec: 0x2452ffd7  addiu       $s2, $v0, -0x29
    ctx->pc = 0x30a0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967255));
    // 0x30a0f0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30a0f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A0F4u;
    {
        const bool branch_taken_0x30a0f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0F4u;
            // 0x30a0f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f4) {
            ctx->pc = 0x30A104u;
            goto label_30a104;
        }
    }
    ctx->pc = 0x30A0FCu;
    // 0x30a0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a100: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_30a104:
    // 0x30a104: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A104u;
    {
        const bool branch_taken_0x30a104 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x30A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A104u;
            // 0x30a108: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a104) {
            ctx->pc = 0x30A114u;
            goto label_30a114;
        }
    }
    ctx->pc = 0x30A10Cu;
    // 0x30a10c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x30a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a110: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30a114:
    // 0x30a114: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a118: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a11c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x30A11Cu;
    SET_GPR_U32(ctx, 31, 0x30A124u);
    ctx->pc = 0x30A120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A11Cu;
            // 0x30a120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A124u; }
        if (ctx->pc != 0x30A124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A124u; }
        if (ctx->pc != 0x30A124u) { return; }
    }
    ctx->pc = 0x30A124u;
label_30a124:
    // 0x30a124: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a128: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30A128u;
    SET_GPR_U32(ctx, 31, 0x30A130u);
    ctx->pc = 0x30A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A128u;
            // 0x30a12c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A130u; }
        if (ctx->pc != 0x30A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A130u; }
        if (ctx->pc != 0x30A130u) { return; }
    }
    ctx->pc = 0x30A130u;
label_30a130:
    // 0x30a130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a134: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30A134u;
    SET_GPR_U32(ctx, 31, 0x30A13Cu);
    ctx->pc = 0x30A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A134u;
            // 0x30a138: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A13Cu; }
        if (ctx->pc != 0x30A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A13Cu; }
        if (ctx->pc != 0x30A13Cu) { return; }
    }
    ctx->pc = 0x30A13Cu;
label_30a13c:
    // 0x30a13c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30a140: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a144: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a148: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30a148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a14c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30A14Cu;
    SET_GPR_U32(ctx, 31, 0x30A154u);
    ctx->pc = 0x30A150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A14Cu;
            // 0x30a150: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A154u; }
        if (ctx->pc != 0x30A154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A154u; }
        if (ctx->pc != 0x30A154u) { return; }
    }
    ctx->pc = 0x30A154u;
label_30a154:
    // 0x30a154: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a15c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A15Cu;
    SET_GPR_U32(ctx, 31, 0x30A164u);
    ctx->pc = 0x30A160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A15Cu;
            // 0x30a160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A164u; }
        if (ctx->pc != 0x30A164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A164u; }
        if (ctx->pc != 0x30A164u) { return; }
    }
    ctx->pc = 0x30A164u;
label_30a164:
    // 0x30a164: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a168: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a16c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30a16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a170: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A170u;
    SET_GPR_U32(ctx, 31, 0x30A178u);
    ctx->pc = 0x30A174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A170u;
            // 0x30a174: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A178u; }
        if (ctx->pc != 0x30A178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A178u; }
        if (ctx->pc != 0x30A178u) { return; }
    }
    ctx->pc = 0x30A178u;
label_30a178:
    // 0x30a178: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a17c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x30a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x30a180: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A180u;
    SET_GPR_U32(ctx, 31, 0x30A188u);
    ctx->pc = 0x30A184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A180u;
            // 0x30a184: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A188u; }
        if (ctx->pc != 0x30A188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A188u; }
        if (ctx->pc != 0x30A188u) { return; }
    }
    ctx->pc = 0x30A188u;
label_30a188:
    // 0x30a188: 0x2713021  addu        $a2, $s3, $s1
    ctx->pc = 0x30a188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x30a18c: 0x26450052  addiu       $a1, $s2, 0x52
    ctx->pc = 0x30a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 82));
    // 0x30a190: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a194: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A194u;
    SET_GPR_U32(ctx, 31, 0x30A19Cu);
    ctx->pc = 0x30A198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A194u;
            // 0x30a198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A19Cu; }
        if (ctx->pc != 0x30A19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A19Cu; }
        if (ctx->pc != 0x30A19Cu) { return; }
    }
    ctx->pc = 0x30A19Cu;
label_30a19c:
    // 0x30a19c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30A19Cu;
    SET_GPR_U32(ctx, 31, 0x30A1A4u);
    ctx->pc = 0x30A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A19Cu;
            // 0x30a1a0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1A4u; }
        if (ctx->pc != 0x30A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1A4u; }
        if (ctx->pc != 0x30A1A4u) { return; }
    }
    ctx->pc = 0x30A1A4u;
label_30a1a4:
    // 0x30a1a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a1a8:
    // 0x30a1a8: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x30A1A8u;
    SET_GPR_U32(ctx, 31, 0x30A1B0u);
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1B0u; }
        if (ctx->pc != 0x30A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1B0u; }
        if (ctx->pc != 0x30A1B0u) { return; }
    }
    ctx->pc = 0x30A1B0u;
label_30a1b0:
    // 0x30a1b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x30a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x30a1b4: 0xc052a4c  jal         func_14A930
    ctx->pc = 0x30A1B4u;
    SET_GPR_U32(ctx, 31, 0x30A1BCu);
    ctx->pc = 0x30A1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1B4u;
            // 0x30a1b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1BCu; }
        if (ctx->pc != 0x30A1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1BCu; }
        if (ctx->pc != 0x30A1BCu) { return; }
    }
    ctx->pc = 0x30A1BCu;
label_30a1bc:
    // 0x30a1bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x30a1c0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x30a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x30a1c4: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
    // 0x30a1c8: 0xc0bb554  jal         func_2ED550
    ctx->pc = 0x30A1C8u;
    SET_GPR_U32(ctx, 31, 0x30A1D0u);
    ctx->pc = 0x30A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1C8u;
            // 0x30a1cc: 0x24a576e0  addiu       $a1, $a1, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED550u;
    if (runtime->hasFunction(0x2ED550u)) {
        auto targetFn = runtime->lookupFunction(0x2ED550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1D0u; }
        if (ctx->pc != 0x30A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Update__11CPadControlFP8CGamePad_0x2ed550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1D0u; }
        if (ctx->pc != 0x30A1D0u) { return; }
    }
    ctx->pc = 0x30A1D0u;
label_30a1d0:
    // 0x30a1d0: 0x8f82a1c0  lw          $v0, -0x5E40($gp)
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x30a1d4: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x30a1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x30a1d8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A1D8u;
    {
        const bool branch_taken_0x30a1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1D8u;
            // 0x30a1dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1d8) {
            ctx->pc = 0x30A1FCu;
            goto label_30a1fc;
        }
    }
    ctx->pc = 0x30A1E0u;
    // 0x30a1e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x30a1e4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x30a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30a1e8: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x30A1E8u;
    SET_GPR_U32(ctx, 31, 0x30A1F0u);
    ctx->pc = 0x30A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1E8u;
            // 0x30a1ec: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1F0u; }
        if (ctx->pc != 0x30A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1F0u; }
        if (ctx->pc != 0x30A1F0u) { return; }
    }
    ctx->pc = 0x30A1F0u;
label_30a1f0:
    // 0x30a1f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A1F0u;
    {
        const bool branch_taken_0x30a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1f0) {
            ctx->pc = 0x30A1FCu;
            goto label_30a1fc;
        }
    }
    ctx->pc = 0x30A1F8u;
    // 0x30a1f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a1fc:
    // 0x30a1fc: 0x8f83a1b8  lw          $v1, -0x5E48($gp)
    ctx->pc = 0x30a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943160)));
    // 0x30a200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a204: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A204u;
    {
        const bool branch_taken_0x30a204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A204u;
            // 0x30a208: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a204) {
            ctx->pc = 0x30A22Cu;
            goto label_30a22c;
        }
    }
    ctx->pc = 0x30A20Cu;
    // 0x30a20c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x30a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30a210: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x30A210u;
    SET_GPR_U32(ctx, 31, 0x30A218u);
    ctx->pc = 0x30A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A210u;
            // 0x30a214: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A218u; }
        if (ctx->pc != 0x30A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A218u; }
        if (ctx->pc != 0x30A218u) { return; }
    }
    ctx->pc = 0x30A218u;
label_30a218:
    // 0x30a218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A218u;
    {
        const bool branch_taken_0x30a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a218) {
            ctx->pc = 0x30A22Cu;
            goto label_30a22c;
        }
    }
    ctx->pc = 0x30A220u;
    // 0x30a220: 0xc095530  jal         func_2554C0
    ctx->pc = 0x30A220u;
    SET_GPR_U32(ctx, 31, 0x30A228u);
    ctx->pc = 0x2554C0u;
    if (runtime->hasFunction(0x2554C0u)) {
        auto targetFn = runtime->lookupFunction(0x2554C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A228u; }
        if (ctx->pc != 0x30A228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipEventStart__Fv_0x2554c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A228u; }
        if (ctx->pc != 0x30A228u) { return; }
    }
    ctx->pc = 0x30A228u;
label_30a228:
    // 0x30a228: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30a228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a22c:
    // 0x30a22c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A22Cu;
    {
        const bool branch_taken_0x30a22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A22Cu;
            // 0x30a230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a22c) {
            ctx->pc = 0x30A240u;
            goto label_30a240;
        }
    }
    ctx->pc = 0x30A234u;
    // 0x30a234: 0xc0c2744  jal         func_309D10
    ctx->pc = 0x30A234u;
    SET_GPR_U32(ctx, 31, 0x30A23Cu);
    ctx->pc = 0x309D10u;
    if (runtime->hasFunction(0x309D10u)) {
        auto targetFn = runtime->lookupFunction(0x309D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A23Cu; }
        if (ctx->pc != 0x30A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseEnd__Fv_0x309d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A23Cu; }
        if (ctx->pc != 0x30A23Cu) { return; }
    }
    ctx->pc = 0x30A23Cu;
label_30a23c:
    // 0x30a23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a240:
    // 0x30a240: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30a240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30a244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a254: 0x3e00008  jr          $ra
    ctx->pc = 0x30A254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A254u;
            // 0x30a258: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A25Cu;
}
