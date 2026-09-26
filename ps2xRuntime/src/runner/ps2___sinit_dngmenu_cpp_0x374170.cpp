#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_dngmenu.cpp
// Address: 0x374170 - 0x374200
void ps2___sinit_dngmenu_cpp_0x374170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_dngmenu_cpp_0x374170");
#endif

    switch (ctx->pc) {
        case 0x374194u: goto label_374194;
        case 0x3741b0u: goto label_3741b0;
        case 0x3741ccu: goto label_3741cc;
        case 0x3741e8u: goto label_3741e8;
        case 0x3741f4u: goto label_3741f4;
        default: break;
    }

    ctx->pc = 0x374170u;

    // 0x374170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374174: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x374174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x374178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37417c: 0x24848640  addiu       $a0, $a0, -0x79C0
    ctx->pc = 0x37417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    // 0x374180: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x374180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x374184: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x374184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x374188: 0x2407007c  addiu       $a3, $zero, 0x7C
    ctx->pc = 0x374188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x37418c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x37418Cu;
    SET_GPR_U32(ctx, 31, 0x374194u);
    ctx->pc = 0x374190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37418Cu;
            // 0x374190: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374194u; }
        if (ctx->pc != 0x374194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374194u; }
        if (ctx->pc != 0x374194u) { return; }
    }
    ctx->pc = 0x374194u;
label_374194:
    // 0x374194: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x374194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x374198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37419c: 0x24848650  addiu       $a0, $a0, -0x79B0
    ctx->pc = 0x37419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936144));
    // 0x3741a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3741a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741a4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3741a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3741a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3741A8u;
    SET_GPR_U32(ctx, 31, 0x3741B0u);
    ctx->pc = 0x3741ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741A8u;
            // 0x3741ac: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741B0u; }
        if (ctx->pc != 0x3741B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741B0u; }
        if (ctx->pc != 0x3741B0u) { return; }
    }
    ctx->pc = 0x3741B0u;
label_3741b0:
    // 0x3741b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3741b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3741b4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3741b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3741b8: 0x24848de0  addiu       $a0, $a0, -0x7220
    ctx->pc = 0x3741b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    // 0x3741bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3741bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3741c0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3741c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3741c4: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x3741C4u;
    SET_GPR_U32(ctx, 31, 0x3741CCu);
    ctx->pc = 0x3741C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741C4u;
            // 0x3741c8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741CCu; }
        if (ctx->pc != 0x3741CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741CCu; }
        if (ctx->pc != 0x3741CCu) { return; }
    }
    ctx->pc = 0x3741CCu;
label_3741cc:
    // 0x3741cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3741ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3741d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3741d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741d4: 0x24848df0  addiu       $a0, $a0, -0x7210
    ctx->pc = 0x3741d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938096));
    // 0x3741d8: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x3741d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x3741dc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3741dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3741e0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3741E0u;
    SET_GPR_U32(ctx, 31, 0x3741E8u);
    ctx->pc = 0x3741E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741E0u;
            // 0x3741e4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741E8u; }
        if (ctx->pc != 0x3741E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741E8u; }
        if (ctx->pc != 0x3741E8u) { return; }
    }
    ctx->pc = 0x3741E8u;
label_3741e8:
    // 0x3741e8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3741e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3741ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x3741ECu;
    SET_GPR_U32(ctx, 31, 0x3741F4u);
    ctx->pc = 0x3741F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741ECu;
            // 0x3741f0: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741F4u; }
        if (ctx->pc != 0x3741F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741F4u; }
        if (ctx->pc != 0x3741F4u) { return; }
    }
    ctx->pc = 0x3741F4u;
label_3741f4:
    // 0x3741f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3741f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3741f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3741F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3741FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3741F8u;
            // 0x3741fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374200u;
}
