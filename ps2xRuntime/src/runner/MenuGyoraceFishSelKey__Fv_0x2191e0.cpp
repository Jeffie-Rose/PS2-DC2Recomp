#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGyoraceFishSelKey__Fv
// Address: 0x2191e0 - 0x2196b8
void MenuGyoraceFishSelKey__Fv_0x2191e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGyoraceFishSelKey__Fv_0x2191e0");
#endif

    switch (ctx->pc) {
        case 0x219228u: goto label_219228;
        case 0x219238u: goto label_219238;
        case 0x219264u: goto label_219264;
        case 0x21927cu: goto label_21927c;
        case 0x219284u: goto label_219284;
        case 0x219294u: goto label_219294;
        case 0x2192a4u: goto label_2192a4;
        case 0x2192b0u: goto label_2192b0;
        case 0x2192b8u: goto label_2192b8;
        case 0x2192c4u: goto label_2192c4;
        case 0x2192d4u: goto label_2192d4;
        case 0x2192fcu: goto label_2192fc;
        case 0x219308u: goto label_219308;
        case 0x219318u: goto label_219318;
        case 0x219324u: goto label_219324;
        case 0x219340u: goto label_219340;
        case 0x219348u: goto label_219348;
        case 0x219354u: goto label_219354;
        case 0x21935cu: goto label_21935c;
        case 0x219370u: goto label_219370;
        case 0x2193b8u: goto label_2193b8;
        case 0x21941cu: goto label_21941c;
        case 0x21942cu: goto label_21942c;
        case 0x21944cu: goto label_21944c;
        case 0x219484u: goto label_219484;
        case 0x21948cu: goto label_21948c;
        case 0x21949cu: goto label_21949c;
        case 0x2194acu: goto label_2194ac;
        case 0x2194e8u: goto label_2194e8;
        case 0x219504u: goto label_219504;
        case 0x219510u: goto label_219510;
        case 0x2195fcu: goto label_2195fc;
        case 0x219644u: goto label_219644;
        case 0x219650u: goto label_219650;
        default: break;
    }

    ctx->pc = 0x2191e0u;

    // 0x2191e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2191e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2191e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2191e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2191e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2191e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2191ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2191ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2191f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2191f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2191f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2191f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2191f8: 0x8383922c  lb          $v1, -0x6DD4($gp)
    ctx->pc = 0x2191f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939180)));
    // 0x2191fc: 0x10620109  beq         $v1, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x2191FCu;
    {
        const bool branch_taken_0x2191fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191FCu;
            // 0x219200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191fc) {
            ctx->pc = 0x219624u;
            goto label_219624;
        }
    }
    ctx->pc = 0x219204u;
    // 0x219204: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x219204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219208: 0x10670098  beq         $v1, $a3, . + 4 + (0x98 << 2)
    ctx->pc = 0x219208u;
    {
        const bool branch_taken_0x219208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x219208) {
            ctx->pc = 0x21946Cu;
            goto label_21946c;
        }
    }
    ctx->pc = 0x219210u;
    // 0x219210: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x219210u;
    {
        const bool branch_taken_0x219210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219210) {
            ctx->pc = 0x219220u;
            goto label_219220;
        }
    }
    ctx->pc = 0x219218u;
    // 0x219218: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x219218u;
    {
        const bool branch_taken_0x219218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219218) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x219220u;
label_219220:
    // 0x219220: 0xc05239c  jal         func_148E70
    ctx->pc = 0x219220u;
    SET_GPR_U32(ctx, 31, 0x219228u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219228u; }
        if (ctx->pc != 0x219228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219228u; }
        if (ctx->pc != 0x219228u) { return; }
    }
    ctx->pc = 0x219228u;
label_219228:
    // 0x219228: 0x14400100  bnez        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x219228u;
    {
        const bool branch_taken_0x219228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219228) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x219230u;
    // 0x219230: 0xc05231c  jal         func_148C70
    ctx->pc = 0x219230u;
    SET_GPR_U32(ctx, 31, 0x219238u);
    ctx->pc = 0x219234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219230u;
            // 0x219234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219238u; }
        if (ctx->pc != 0x219238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219238u; }
        if (ctx->pc != 0x219238u) { return; }
    }
    ctx->pc = 0x219238u;
label_219238:
    // 0x219238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219238u;
    {
        const bool branch_taken_0x219238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219238) {
            ctx->pc = 0x219248u;
            goto label_219248;
        }
    }
    ctx->pc = 0x219240u;
    // 0x219240: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x219240u;
    {
        const bool branch_taken_0x219240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219240u;
            // 0x219244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219240) {
            ctx->pc = 0x2196A0u;
            goto label_2196a0;
        }
    }
    ctx->pc = 0x219248u;
label_219248:
    // 0x219248: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x219248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x21924c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x21924cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x219250: 0x87869234  lh          $a2, -0x6DCC($gp)
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939188)));
    // 0x219254: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x219254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x219258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21925c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x21925Cu;
    SET_GPR_U32(ctx, 31, 0x219264u);
    ctx->pc = 0x219260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21925Cu;
            // 0x219260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219264u; }
        if (ctx->pc != 0x219264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219264u; }
        if (ctx->pc != 0x219264u) { return; }
    }
    ctx->pc = 0x219264u;
label_219264:
    // 0x219264: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x219264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x219268: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x219268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21926c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x21926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x219270: 0x24a59f58  addiu       $a1, $a1, -0x60A8
    ctx->pc = 0x219270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942552));
    // 0x219274: 0xc04b414  jal         func_12D050
    ctx->pc = 0x219274u;
    SET_GPR_U32(ctx, 31, 0x21927Cu);
    ctx->pc = 0x219278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219274u;
            // 0x219278: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21927Cu; }
        if (ctx->pc != 0x21927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21927Cu; }
        if (ctx->pc != 0x21927Cu) { return; }
    }
    ctx->pc = 0x21927Cu;
label_21927c:
    // 0x21927c: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x21927Cu;
    SET_GPR_U32(ctx, 31, 0x219284u);
    ctx->pc = 0x219280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21927Cu;
            // 0x219280: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219284u; }
        if (ctx->pc != 0x219284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219284u; }
        if (ctx->pc != 0x219284u) { return; }
    }
    ctx->pc = 0x219284u;
label_219284:
    // 0x219284: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219288: 0x8c31ca40  lw          $s1, -0x35C0($at)
    ctx->pc = 0x219288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x21928c: 0xc065a18  jal         func_196860
    ctx->pc = 0x21928Cu;
    SET_GPR_U32(ctx, 31, 0x219294u);
    ctx->pc = 0x219290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21928Cu;
            // 0x219290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219294u; }
        if (ctx->pc != 0x219294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219294u; }
        if (ctx->pc != 0x219294u) { return; }
    }
    ctx->pc = 0x219294u;
label_219294:
    // 0x219294: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21929c: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x21929Cu;
    SET_GPR_U32(ctx, 31, 0x2192A4u);
    ctx->pc = 0x2192A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21929Cu;
            // 0x2192a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192A4u; }
        if (ctx->pc != 0x2192A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192A4u; }
        if (ctx->pc != 0x2192A4u) { return; }
    }
    ctx->pc = 0x2192A4u;
label_2192a4:
    // 0x2192a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2192a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192a8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2192A8u;
    SET_GPR_U32(ctx, 31, 0x2192B0u);
    ctx->pc = 0x2192ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2192A8u;
            // 0x2192ac: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192B0u; }
        if (ctx->pc != 0x2192B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192B0u; }
        if (ctx->pc != 0x2192B0u) { return; }
    }
    ctx->pc = 0x2192B0u;
label_2192b0:
    // 0x2192b0: 0xc08660c  jal         func_219830
    ctx->pc = 0x2192B0u;
    SET_GPR_U32(ctx, 31, 0x2192B8u);
    ctx->pc = 0x219830u;
    if (runtime->hasFunction(0x219830u)) {
        auto targetFn = runtime->lookupFunction(0x219830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192B8u; }
        if (ctx->pc != 0x2192B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceNo__Fv_0x219830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192B8u; }
        if (ctx->pc != 0x2192B8u) { return; }
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0x2445076c  addiu       $a1, $v0, 0x76C
    ctx->pc = 0x2192b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1900));
    // 0x2192bc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2192BCu;
    SET_GPR_U32(ctx, 31, 0x2192C4u);
    ctx->pc = 0x2192C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2192BCu;
            // 0x2192c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192C4u; }
        if (ctx->pc != 0x2192C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192C4u; }
        if (ctx->pc != 0x2192C4u) { return; }
    }
    ctx->pc = 0x2192C4u;
label_2192c4:
    // 0x2192c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2192c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2192c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2192c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192cc: 0xc087898  jal         func_21E260
    ctx->pc = 0x2192CCu;
    SET_GPR_U32(ctx, 31, 0x2192D4u);
    ctx->pc = 0x2192D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2192CCu;
            // 0x2192d0: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192D4u; }
        if (ctx->pc != 0x2192D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192D4u; }
        if (ctx->pc != 0x2192D4u) { return; }
    }
    ctx->pc = 0x2192D4u;
label_2192d4:
    // 0x2192d4: 0x8e231e14  lw          $v1, 0x1E14($s1)
    ctx->pc = 0x2192d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7700)));
    // 0x2192d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2192d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2192dc: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x2192dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2192e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2192e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2192e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2192e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2192ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2192f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2192f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2192f4: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x2192F4u;
    SET_GPR_U32(ctx, 31, 0x2192FCu);
    ctx->pc = 0x2192F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2192F4u;
            // 0x2192f8: 0x2445fff4  addiu       $a1, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192FCu; }
        if (ctx->pc != 0x2192FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192FCu; }
        if (ctx->pc != 0x2192FCu) { return; }
    }
    ctx->pc = 0x2192FCu;
label_2192fc:
    // 0x2192fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2192fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219300: 0xc065a18  jal         func_196860
    ctx->pc = 0x219300u;
    SET_GPR_U32(ctx, 31, 0x219308u);
    ctx->pc = 0x219304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219300u;
            // 0x219304: 0x8c31ca44  lw          $s1, -0x35BC($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219308u; }
        if (ctx->pc != 0x219308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219308u; }
        if (ctx->pc != 0x219308u) { return; }
    }
    ctx->pc = 0x219308u;
label_219308:
    // 0x219308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21930c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21930cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219310: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x219310u;
    SET_GPR_U32(ctx, 31, 0x219318u);
    ctx->pc = 0x219314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219310u;
            // 0x219314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219318u; }
        if (ctx->pc != 0x219318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219318u; }
        if (ctx->pc != 0x219318u) { return; }
    }
    ctx->pc = 0x219318u;
label_219318:
    // 0x219318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21931c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x21931Cu;
    SET_GPR_U32(ctx, 31, 0x219324u);
    ctx->pc = 0x219320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21931Cu;
            // 0x219320: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219324u; }
        if (ctx->pc != 0x219324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219324u; }
        if (ctx->pc != 0x219324u) { return; }
    }
    ctx->pc = 0x219324u;
label_219324:
    // 0x219324: 0xae2017f4  sw          $zero, 0x17F4($s1)
    ctx->pc = 0x219324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6132), GPR_U32(ctx, 0));
    // 0x219328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x219328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21932c: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x21932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    // 0x219330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219338: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x219338u;
    SET_GPR_U32(ctx, 31, 0x219340u);
    ctx->pc = 0x21933Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219338u;
            // 0x21933c: 0xae201b14  sw          $zero, 0x1B14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219340u; }
        if (ctx->pc != 0x219340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219340u; }
        if (ctx->pc != 0x219340u) { return; }
    }
    ctx->pc = 0x219340u;
label_219340:
    // 0x219340: 0xc065b18  jal         func_196C60
    ctx->pc = 0x219340u;
    SET_GPR_U32(ctx, 31, 0x219348u);
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219348u; }
        if (ctx->pc != 0x219348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219348u; }
        if (ctx->pc != 0x219348u) { return; }
    }
    ctx->pc = 0x219348u;
label_219348:
    // 0x219348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21934c: 0xc066888  jal         func_19A220
    ctx->pc = 0x21934Cu;
    SET_GPR_U32(ctx, 31, 0x219354u);
    ctx->pc = 0x219350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21934Cu;
            // 0x219350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219354u; }
        if (ctx->pc != 0x219354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219354u; }
        if (ctx->pc != 0x219354u) { return; }
    }
    ctx->pc = 0x219354u;
label_219354:
    // 0x219354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21935c:
    // 0x21935c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x21935cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x219360: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x219360u;
    {
        const bool branch_taken_0x219360 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x219364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219360u;
            // 0x219364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219360) {
            ctx->pc = 0x2193F0u;
            goto label_2193f0;
        }
    }
    ctx->pc = 0x219368u;
    // 0x219368: 0xc065dc0  jal         func_197700
    ctx->pc = 0x219368u;
    SET_GPR_U32(ctx, 31, 0x219370u);
    ctx->pc = 0x21936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219368u;
            // 0x21936c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219370u; }
        if (ctx->pc != 0x219370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219370u; }
        if (ctx->pc != 0x219370u) { return; }
    }
    ctx->pc = 0x219370u;
label_219370:
    // 0x219370: 0x8384923c  lb          $a0, -0x6DC4($gp)
    ctx->pc = 0x219370u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x219374: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x219374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x219378: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x21937c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x219380: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x219380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219384: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x219384u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x219388: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x219388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21938c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21938Cu;
    {
        const bool branch_taken_0x21938c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21938c) {
            ctx->pc = 0x219398u;
            goto label_219398;
        }
    }
    ctx->pc = 0x219394u;
    // 0x219394: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x219394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_219398:
    // 0x219398: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x219398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21939c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21939Cu;
    {
        const bool branch_taken_0x21939c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21939Cu;
            // 0x2193a0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21939c) {
            ctx->pc = 0x2193F0u;
            goto label_2193f0;
        }
    }
    ctx->pc = 0x2193A4u;
    // 0x2193a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2193a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2193a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2193a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2193ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2193acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2193b0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2193B0u;
    SET_GPR_U32(ctx, 31, 0x2193B8u);
    ctx->pc = 0x2193B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2193B0u;
            // 0x2193b4: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2193B8u; }
        if (ctx->pc != 0x2193B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2193B8u; }
        if (ctx->pc != 0x2193B8u) { return; }
    }
    ctx->pc = 0x2193B8u;
label_2193b8:
    // 0x2193b8: 0x8384923c  lb          $a0, -0x6DC4($gp)
    ctx->pc = 0x2193b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x2193bc: 0x27829240  addiu       $v0, $gp, -0x6DC0
    ctx->pc = 0x2193bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939200));
    // 0x2193c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2193c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2193c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2193c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2193cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2193d0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2193d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2193d4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2193d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2193d8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x2193d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2193dc: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x2193dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x2193e0: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x2193e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2193e4: 0x8382923c  lb          $v0, -0x6DC4($gp)
    ctx->pc = 0x2193e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x2193e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2193ec: 0xa382923c  sb          $v0, -0x6DC4($gp)
    ctx->pc = 0x2193ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939196), (uint8_t)GPR_U32(ctx, 2));
label_2193f0:
    // 0x2193f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2193f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2193f4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2193f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2193f8: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2193F8u;
    {
        const bool branch_taken_0x2193f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2193FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2193F8u;
            // 0x2193fc: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193f8) {
            ctx->pc = 0x21935Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21935c;
        }
    }
    ctx->pc = 0x219400u;
    // 0x219400: 0x8386923c  lb          $a2, -0x6DC4($gp)
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x219404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219408: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21940c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21940cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x219410: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x219410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x219414: 0xc087720  jal         func_21DC80
    ctx->pc = 0x219414u;
    SET_GPR_U32(ctx, 31, 0x21941Cu);
    ctx->pc = 0x219418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219414u;
            // 0x219418: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21941Cu; }
        if (ctx->pc != 0x21941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21941Cu; }
        if (ctx->pc != 0x21941Cu) { return; }
    }
    ctx->pc = 0x21941Cu;
label_21941c:
    // 0x21941c: 0x8382923c  lb          $v0, -0x6DC4($gp)
    ctx->pc = 0x21941cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x219420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219424: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x219424u;
    SET_GPR_U32(ctx, 31, 0x21942Cu);
    ctx->pc = 0x219428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219424u;
            // 0x219428: 0x24450031  addiu       $a1, $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21942Cu; }
        if (ctx->pc != 0x21942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21942Cu; }
        if (ctx->pc != 0x21942Cu) { return; }
    }
    ctx->pc = 0x21942Cu;
label_21942c:
    // 0x21942c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x21942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x219430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219434: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x219434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x219438: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21943c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21943cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219440: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x219440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x219444: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x219444u;
    SET_GPR_U32(ctx, 31, 0x21944Cu);
    ctx->pc = 0x219448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219444u;
            // 0x219448: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21944Cu; }
        if (ctx->pc != 0x21944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21944Cu; }
        if (ctx->pc != 0x21944Cu) { return; }
    }
    ctx->pc = 0x21944Cu;
label_21944c:
    // 0x21944c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x21944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x219450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219454: 0xa7809230  sh          $zero, -0x6DD0($gp)
    ctx->pc = 0x219454u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939184), (uint16_t)GPR_U32(ctx, 0));
    // 0x219458: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x219458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21945c: 0x8382922c  lb          $v0, -0x6DD4($gp)
    ctx->pc = 0x21945cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939180)));
    // 0x219460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219464: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x219464u;
    {
        const bool branch_taken_0x219464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219464u;
            // 0x219468: 0xa382922c  sb          $v0, -0x6DD4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939180), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219464) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x21946Cu;
label_21946c:
    // 0x21946c: 0x8382923c  lb          $v0, -0x6DC4($gp)
    ctx->pc = 0x21946cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939196)));
    // 0x219470: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219474: 0x8c24ca44  lw          $a0, -0x35BC($at)
    ctx->pc = 0x219474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x219478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21947c: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x219480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21947Cu;
            // 0x219480: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219484u; }
        if (ctx->pc != 0x219484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219484u; }
        if (ctx->pc != 0x219484u) { return; }
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x219484u;
    SET_GPR_U32(ctx, 31, 0x21948Cu);
    ctx->pc = 0x219488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219484u;
            // 0x219488: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21948Cu; }
        if (ctx->pc != 0x21948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21948Cu; }
        if (ctx->pc != 0x21948Cu) { return; }
    }
    ctx->pc = 0x21948Cu;
label_21948c:
    // 0x21948c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219490: 0x8c24ca44  lw          $a0, -0x35BC($at)
    ctx->pc = 0x219490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x219494: 0xc087690  jal         func_21DA40
    ctx->pc = 0x219494u;
    SET_GPR_U32(ctx, 31, 0x21949Cu);
    ctx->pc = 0x219498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219494u;
            // 0x219498: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21949Cu; }
        if (ctx->pc != 0x21949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21949Cu; }
        if (ctx->pc != 0x21949Cu) { return; }
    }
    ctx->pc = 0x21949Cu;
label_21949c:
    // 0x21949c: 0x8f84920c  lw          $a0, -0x6DF4($gp)
    ctx->pc = 0x21949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
    // 0x2194a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2194a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194a4: 0xc066888  jal         func_19A220
    ctx->pc = 0x2194A4u;
    SET_GPR_U32(ctx, 31, 0x2194ACu);
    ctx->pc = 0x2194A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2194A4u;
            // 0x2194a8: 0xa7829230  sh          $v0, -0x6DD0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194ACu; }
        if (ctx->pc != 0x2194ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194ACu; }
        if (ctx->pc != 0x2194ACu) { return; }
    }
    ctx->pc = 0x2194ACu;
label_2194ac:
    // 0x2194ac: 0x87859230  lh          $a1, -0x6DD0($gp)
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939184)));
    // 0x2194b0: 0x27849240  addiu       $a0, $gp, -0x6DC0
    ctx->pc = 0x2194b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939200));
    // 0x2194b4: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2194b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2194b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2194bc: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2194bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2194c0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2194c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2194c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2194cc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2194d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2194d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2194d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2194d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2194d8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2194D8u;
    {
        const bool branch_taken_0x2194d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2194D8u;
            // 0x2194dc: 0xaf829228  sw          $v0, -0x6DD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194d8) {
            ctx->pc = 0x2195E8u;
            goto label_2195e8;
        }
    }
    ctx->pc = 0x2194E0u;
    // 0x2194e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2194E0u;
    SET_GPR_U32(ctx, 31, 0x2194E8u);
    ctx->pc = 0x2194E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2194E0u;
            // 0x2194e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194E8u; }
        if (ctx->pc != 0x2194E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194E8u; }
        if (ctx->pc != 0x2194E8u) { return; }
    }
    ctx->pc = 0x2194E8u;
label_2194e8:
    // 0x2194e8: 0x87839230  lh          $v1, -0x6DD0($gp)
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939184)));
    // 0x2194ec: 0x27829240  addiu       $v0, $gp, -0x6DC0
    ctx->pc = 0x2194ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939200));
    // 0x2194f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2194f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2194f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2194f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2194f8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2194f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2194fc: 0xc065b18  jal         func_196C60
    ctx->pc = 0x2194FCu;
    SET_GPR_U32(ctx, 31, 0x219504u);
    ctx->pc = 0x219500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2194FCu;
            // 0x219500: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219504u; }
        if (ctx->pc != 0x219504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219504u; }
        if (ctx->pc != 0x219504u) { return; }
    }
    ctx->pc = 0x219504u;
label_219504:
    // 0x219504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219508: 0xc066888  jal         func_19A220
    ctx->pc = 0x219508u;
    SET_GPR_U32(ctx, 31, 0x219510u);
    ctx->pc = 0x21950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219508u;
            // 0x21950c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219510u; }
        if (ctx->pc != 0x219510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219510u; }
        if (ctx->pc != 0x219510u) { return; }
    }
    ctx->pc = 0x219510u;
label_219510:
    // 0x219510: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219514: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x219514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
    // 0x219518: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21951c: 0xac20d638  sw          $zero, -0x29C8($at)
    ctx->pc = 0x21951cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
    // 0x219520: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219524: 0x8c24d630  lw          $a0, -0x29D0($at)
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x219528: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x219528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21952c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x219530: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x219530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x219534: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x219534u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x219538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21953c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219540: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x219540u;
    {
        const bool branch_taken_0x219540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219540) {
            ctx->pc = 0x2195D8u;
            goto label_2195d8;
        }
    }
    ctx->pc = 0x219548u;
    // 0x219548: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x219548u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21954c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x219550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219550u;
    {
        const bool branch_taken_0x219550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219550u;
            // 0x219554: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219550) {
            ctx->pc = 0x219568u;
            goto label_219568;
        }
    }
    ctx->pc = 0x219558u;
    // 0x219558: 0x8c22d634  lw          $v0, -0x29CC($at)
    ctx->pc = 0x219558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x21955c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219560: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219564: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x219564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_219568:
    // 0x219568: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x219568u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21956c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x219570: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219570u;
    {
        const bool branch_taken_0x219570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219570u;
            // 0x219574: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219570) {
            ctx->pc = 0x219588u;
            goto label_219588;
        }
    }
    ctx->pc = 0x219578u;
    // 0x219578: 0x8c22d634  lw          $v0, -0x29CC($at)
    ctx->pc = 0x219578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x21957c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x21957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x219580: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219584: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x219584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_219588:
    // 0x219588: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x219588u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21958c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x219590: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219590u;
    {
        const bool branch_taken_0x219590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219590) {
            ctx->pc = 0x2195ACu;
            goto label_2195ac;
        }
    }
    ctx->pc = 0x219598u;
    // 0x219598: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21959c: 0x8c22d634  lw          $v0, -0x29CC($at)
    ctx->pc = 0x21959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x2195a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2195a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2195a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2195a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2195a8: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2195a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_2195ac:
    // 0x2195ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2195acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2195b0: 0x8c22d634  lw          $v0, -0x29CC($at)
    ctx->pc = 0x2195b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x2195b4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2195b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2195b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2195bc: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2195bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x2195c0: 0x9062004d  lbu         $v0, 0x4D($v1)
    ctx->pc = 0x2195c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 77)));
    // 0x2195c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2195c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2195c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2195C8u;
    {
        const bool branch_taken_0x2195c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195C8u;
            // 0x2195cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195c8) {
            ctx->pc = 0x2195D8u;
            goto label_2195d8;
        }
    }
    ctx->pc = 0x2195D0u;
    // 0x2195d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2195d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2195d4: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x2195d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
label_2195d8:
    // 0x2195d8: 0x8382922c  lb          $v0, -0x6DD4($gp)
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939180)));
    // 0x2195dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2195dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2195e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2195E0u;
    {
        const bool branch_taken_0x2195e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195E0u;
            // 0x2195e4: 0xa382922c  sb          $v0, -0x6DD4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939180), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195e0) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x2195E8u;
label_2195e8:
    // 0x2195e8: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2195e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x2195ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2195ECu;
    {
        const bool branch_taken_0x2195ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2195ec) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x2195F4u;
    // 0x2195f4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2195F4u;
    SET_GPR_U32(ctx, 31, 0x2195FCu);
    ctx->pc = 0x2195F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2195F4u;
            // 0x2195f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195FCu; }
        if (ctx->pc != 0x2195FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195FCu; }
        if (ctx->pc != 0x2195FCu) { return; }
    }
    ctx->pc = 0x2195FCu;
label_2195fc:
    // 0x2195fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2195fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219604: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x219604u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
    // 0x219608: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21960c: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x21960cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
    // 0x219610: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x219610u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x219614: 0x8382922c  lb          $v0, -0x6DD4($gp)
    ctx->pc = 0x219614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939180)));
    // 0x219618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21961c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21961Cu;
    {
        const bool branch_taken_0x21961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21961Cu;
            // 0x219620: 0xa382922c  sb          $v0, -0x6DD4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939180), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21961c) {
            ctx->pc = 0x21962Cu;
            goto label_21962c;
        }
    }
    ctx->pc = 0x219624u;
label_219624:
    // 0x219624: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x219624u;
    {
        const bool branch_taken_0x219624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219624u;
            // 0x219628: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219624) {
            ctx->pc = 0x2196A4u;
            goto label_2196a4;
        }
    }
    ctx->pc = 0x21962Cu;
label_21962c:
    // 0x21962c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219630: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x219630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x219634: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219634u;
    {
        const bool branch_taken_0x219634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x219634) {
            ctx->pc = 0x219650u;
            goto label_219650;
        }
    }
    ctx->pc = 0x21963Cu;
    // 0x21963c: 0xc087898  jal         func_21E260
    ctx->pc = 0x21963Cu;
    SET_GPR_U32(ctx, 31, 0x219644u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219644u; }
        if (ctx->pc != 0x219644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219644u; }
        if (ctx->pc != 0x219644u) { return; }
    }
    ctx->pc = 0x219644u;
label_219644:
    // 0x219644: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219648: 0xc087898  jal         func_21E260
    ctx->pc = 0x219648u;
    SET_GPR_U32(ctx, 31, 0x219650u);
    ctx->pc = 0x21964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219648u;
            // 0x21964c: 0x8c24ca44  lw          $a0, -0x35BC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219650u; }
        if (ctx->pc != 0x219650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219650u; }
        if (ctx->pc != 0x219650u) { return; }
    }
    ctx->pc = 0x219650u;
label_219650:
    // 0x219650: 0x83839248  lb          $v1, -0x6DB8($gp)
    ctx->pc = 0x219650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939208)));
    // 0x219654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219658: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x219658u;
    {
        const bool branch_taken_0x219658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219658u;
            // 0x21965c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219658) {
            ctx->pc = 0x219698u;
            goto label_219698;
        }
    }
    ctx->pc = 0x219660u;
    // 0x219660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219664: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219664u;
    {
        const bool branch_taken_0x219664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219664u;
            // 0x219668: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219664) {
            ctx->pc = 0x219690u;
            goto label_219690;
        }
    }
    ctx->pc = 0x21966Cu;
    // 0x21966c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21966Cu;
    {
        const bool branch_taken_0x21966c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21966Cu;
            // 0x219670: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21966c) {
            ctx->pc = 0x219688u;
            goto label_219688;
        }
    }
    ctx->pc = 0x219674u;
    // 0x219674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219678: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x219678u;
    {
        const bool branch_taken_0x219678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219678u;
            // 0x21967c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219678) {
            ctx->pc = 0x2196A0u;
            goto label_2196a0;
        }
    }
    ctx->pc = 0x219680u;
    // 0x219680: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219680u;
    {
        const bool branch_taken_0x219680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219680) {
            ctx->pc = 0x21969Cu;
            goto label_21969c;
        }
    }
    ctx->pc = 0x219688u;
label_219688:
    // 0x219688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x219688u;
    {
        const bool branch_taken_0x219688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21968Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219688u;
            // 0x21968c: 0xa3829248  sb          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219688) {
            ctx->pc = 0x21969Cu;
            goto label_21969c;
        }
    }
    ctx->pc = 0x219690u;
label_219690:
    // 0x219690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x219690u;
    {
        const bool branch_taken_0x219690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219690u;
            // 0x219694: 0xa3829248  sb          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219690) {
            ctx->pc = 0x21969Cu;
            goto label_21969c;
        }
    }
    ctx->pc = 0x219698u;
label_219698:
    // 0x219698: 0xa3829248  sb          $v0, -0x6DB8($gp)
    ctx->pc = 0x219698u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939208), (uint8_t)GPR_U32(ctx, 2));
label_21969c:
    // 0x21969c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21969cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2196a0:
    // 0x2196a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2196a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2196a4:
    // 0x2196a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2196a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2196a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2196a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2196ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2196acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2196b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2196B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2196B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2196B0u;
            // 0x2196b4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2196B8u;
}
