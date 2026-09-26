#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaScoreViewDraw__Fv
// Address: 0x2af680 - 0x2afc18
void SphidaScoreViewDraw__Fv_0x2af680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaScoreViewDraw__Fv_0x2af680");
#endif

    switch (ctx->pc) {
        case 0x2af6b0u: goto label_2af6b0;
        case 0x2af6f0u: goto label_2af6f0;
        case 0x2af708u: goto label_2af708;
        case 0x2af72cu: goto label_2af72c;
        case 0x2af764u: goto label_2af764;
        case 0x2af784u: goto label_2af784;
        case 0x2af7a8u: goto label_2af7a8;
        case 0x2af7b0u: goto label_2af7b0;
        case 0x2af7d4u: goto label_2af7d4;
        case 0x2af7e8u: goto label_2af7e8;
        case 0x2af808u: goto label_2af808;
        case 0x2af834u: goto label_2af834;
        case 0x2af84cu: goto label_2af84c;
        case 0x2af878u: goto label_2af878;
        case 0x2af880u: goto label_2af880;
        case 0x2af88cu: goto label_2af88c;
        case 0x2af898u: goto label_2af898;
        case 0x2af8a4u: goto label_2af8a4;
        case 0x2af8bcu: goto label_2af8bc;
        case 0x2af8e0u: goto label_2af8e0;
        case 0x2af8e8u: goto label_2af8e8;
        case 0x2af90cu: goto label_2af90c;
        case 0x2af938u: goto label_2af938;
        case 0x2af940u: goto label_2af940;
        case 0x2af94cu: goto label_2af94c;
        case 0x2af958u: goto label_2af958;
        case 0x2af964u: goto label_2af964;
        case 0x2af97cu: goto label_2af97c;
        case 0x2af9a0u: goto label_2af9a0;
        case 0x2af9a8u: goto label_2af9a8;
        case 0x2af9c4u: goto label_2af9c4;
        case 0x2af9dcu: goto label_2af9dc;
        case 0x2af9f4u: goto label_2af9f4;
        case 0x2afa20u: goto label_2afa20;
        case 0x2afa38u: goto label_2afa38;
        case 0x2afa40u: goto label_2afa40;
        case 0x2afa54u: goto label_2afa54;
        case 0x2afa6cu: goto label_2afa6c;
        case 0x2afa84u: goto label_2afa84;
        case 0x2afa8cu: goto label_2afa8c;
        case 0x2afa98u: goto label_2afa98;
        case 0x2afaa4u: goto label_2afaa4;
        case 0x2afab0u: goto label_2afab0;
        case 0x2afac8u: goto label_2afac8;
        case 0x2afaf4u: goto label_2afaf4;
        case 0x2afb1cu: goto label_2afb1c;
        case 0x2afb34u: goto label_2afb34;
        case 0x2afb58u: goto label_2afb58;
        case 0x2afb78u: goto label_2afb78;
        case 0x2afb8cu: goto label_2afb8c;
        case 0x2afbb0u: goto label_2afbb0;
        case 0x2afbc8u: goto label_2afbc8;
        case 0x2afbe8u: goto label_2afbe8;
        case 0x2afbf0u: goto label_2afbf0;
        default: break;
    }

    ctx->pc = 0x2af680u;

    // 0x2af680: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x2af680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x2af684: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2af684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2af688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2af688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2af68c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2af698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2af69c: 0x8c25ca40  lw          $a1, -0x35C0($at)
    ctx->pc = 0x2af69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2af6a0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2af6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2af6a4: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2af6a8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AF6A8u;
    SET_GPR_U32(ctx, 31, 0x2AF6B0u);
    ctx->pc = 0x2AF6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF6A8u;
            // 0x2af6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF6B0u; }
        if (ctx->pc != 0x2AF6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF6B0u; }
        if (ctx->pc != 0x2AF6B0u) { return; }
    }
    ctx->pc = 0x2AF6B0u;
label_2af6b0:
    // 0x2af6b0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x2af6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2af6b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af6b8: 0xafa3044c  sw          $v1, 0x44C($sp)
    ctx->pc = 0x2af6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 3));
    // 0x2af6bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF6BCu;
    {
        const bool branch_taken_0x2af6bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF6BCu;
            // 0x2af6c0: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6bc) {
            ctx->pc = 0x2AF6CCu;
            goto label_2af6cc;
        }
    }
    ctx->pc = 0x2AF6C4u;
    // 0x2af6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af6c8: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x2af6c8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_2af6cc:
    // 0x2af6cc: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2af6d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF6D0u;
    {
        const bool branch_taken_0x2af6d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF6D0u;
            // 0x2af6d4: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6d0) {
            ctx->pc = 0x2AF6E0u;
            goto label_2af6e0;
        }
    }
    ctx->pc = 0x2AF6D8u;
    // 0x2af6d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af6dc: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_2af6e0:
    // 0x2af6e0: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2af6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2af6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF6E8u;
    SET_GPR_U32(ctx, 31, 0x2AF6F0u);
    ctx->pc = 0x2AF6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF6E8u;
            // 0x2af6ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF6F0u; }
        if (ctx->pc != 0x2AF6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF6F0u; }
        if (ctx->pc != 0x2AF6F0u) { return; }
    }
    ctx->pc = 0x2AF6F0u;
label_2af6f0:
    // 0x2af6f0: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x2af6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2af6f4: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2af6f8: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x2af6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2af6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af700: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF700u;
    SET_GPR_U32(ctx, 31, 0x2AF708u);
    ctx->pc = 0x2AF704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF700u;
            // 0x2af704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF708u; }
        if (ctx->pc != 0x2AF708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF708u; }
        if (ctx->pc != 0x2AF708u) { return; }
    }
    ctx->pc = 0x2AF708u;
label_2af708:
    // 0x2af708: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2af708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af70c: 0x27a4044c  addiu       $a0, $sp, 0x44C
    ctx->pc = 0x2af70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1100));
    // 0x2af710: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x2af710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2af714: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2af718: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2af718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af71c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2af71cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af720: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2af720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af724: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x2AF724u;
    SET_GPR_U32(ctx, 31, 0x2AF72Cu);
    ctx->pc = 0x2AF728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF724u;
            // 0x2af728: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF72Cu; }
        if (ctx->pc != 0x2AF72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF72Cu; }
        if (ctx->pc != 0x2AF72Cu) { return; }
    }
    ctx->pc = 0x2AF72Cu;
label_2af72c:
    // 0x2af72c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x2af72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2af730: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF730u;
    {
        const bool branch_taken_0x2af730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF730u;
            // 0x2af734: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af730) {
            ctx->pc = 0x2AF740u;
            goto label_2af740;
        }
    }
    ctx->pc = 0x2AF738u;
    // 0x2af738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af73c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x2af73cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_2af740:
    // 0x2af740: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2af740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2af744: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF744u;
    {
        const bool branch_taken_0x2af744 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF744u;
            // 0x2af748: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af744) {
            ctx->pc = 0x2AF754u;
            goto label_2af754;
        }
    }
    ctx->pc = 0x2AF74Cu;
    // 0x2af74c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af750: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x2af750u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_2af754:
    // 0x2af754: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2af754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2af758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af75c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF75Cu;
    SET_GPR_U32(ctx, 31, 0x2AF764u);
    ctx->pc = 0x2AF760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF75Cu;
            // 0x2af760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF764u; }
        if (ctx->pc != 0x2AF764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF764u; }
        if (ctx->pc != 0x2AF764u) { return; }
    }
    ctx->pc = 0x2AF764u;
label_2af764:
    // 0x2af764: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2af764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2af768: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2af768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af76c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2af76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2af770: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x2af770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x2af774: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2af774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af778: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2af778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af77c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF77Cu;
    SET_GPR_U32(ctx, 31, 0x2AF784u);
    ctx->pc = 0x2AF780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF77Cu;
            // 0x2af780: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF784u; }
        if (ctx->pc != 0x2AF784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF784u; }
        if (ctx->pc != 0x2AF784u) { return; }
    }
    ctx->pc = 0x2AF784u;
label_2af784:
    // 0x2af784: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2af784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af788: 0x27a4044c  addiu       $a0, $sp, 0x44C
    ctx->pc = 0x2af788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1100));
    // 0x2af78c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x2af78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x2af790: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x2af790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2af794: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2af794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af798: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2af798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af79c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2af79cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7a0: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x2AF7A0u;
    SET_GPR_U32(ctx, 31, 0x2AF7A8u);
    ctx->pc = 0x2AF7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7A0u;
            // 0x2af7a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7A8u; }
        if (ctx->pc != 0x2AF7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7A8u; }
        if (ctx->pc != 0x2AF7A8u) { return; }
    }
    ctx->pc = 0x2AF7A8u;
label_2af7a8:
    // 0x2af7a8: 0xc0bdb08  jal         func_2F6C20
    ctx->pc = 0x2AF7A8u;
    SET_GPR_U32(ctx, 31, 0x2AF7B0u);
    ctx->pc = 0x2AF7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7A8u;
            // 0x2af7ac: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6C20u;
    if (runtime->hasFunction(0x2F6C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F6C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7B0u; }
        if (ctx->pc != 0x2AF7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHorl__11CSphidaDataFv_0x2f6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7B0u; }
        if (ctx->pc != 0x2AF7B0u) { return; }
    }
    ctx->pc = 0x2AF7B0u;
label_2af7b0:
    // 0x2af7b0: 0x8f839b24  lw          $v1, -0x64DC($gp)
    ctx->pc = 0x2af7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af7b4: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2AF7B4u;
    {
        const bool branch_taken_0x2af7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7B4u;
            // 0x2af7b8: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7b4) {
            ctx->pc = 0x2AF9A8u;
            goto label_2af9a8;
        }
    }
    ctx->pc = 0x2AF7BCu;
    // 0x2af7bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2af7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2af7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7c4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2af7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2af7c8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x2af7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2af7cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF7CCu;
    SET_GPR_U32(ctx, 31, 0x2AF7D4u);
    ctx->pc = 0x2AF7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7CCu;
            // 0x2af7d0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7D4u; }
        if (ctx->pc != 0x2AF7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7D4u; }
        if (ctx->pc != 0x2AF7D4u) { return; }
    }
    ctx->pc = 0x2AF7D4u;
label_2af7d4:
    // 0x2af7d4: 0x8f829b24  lw          $v0, -0x64DC($gp)
    ctx->pc = 0x2af7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7dc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2af7dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af7e0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AF7E0u;
    SET_GPR_U32(ctx, 31, 0x2AF7E8u);
    ctx->pc = 0x2AF7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7E0u;
            // 0x2af7e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7E8u; }
        if (ctx->pc != 0x2AF7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF7E8u; }
        if (ctx->pc != 0x2AF7E8u) { return; }
    }
    ctx->pc = 0x2AF7E8u;
label_2af7e8:
    // 0x2af7e8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2af7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2af7ec: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AF7ECu;
    {
        const bool branch_taken_0x2af7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF7ECu;
            // 0x2af7f0: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7ec) {
            ctx->pc = 0x2AF8F0u;
            goto label_2af8f0;
        }
    }
    ctx->pc = 0x2AF7F4u;
    // 0x2af7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7fc: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2af800: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF800u;
    SET_GPR_U32(ctx, 31, 0x2AF808u);
    ctx->pc = 0x2AF804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF800u;
            // 0x2af804: 0x24080026  addiu       $t0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF808u; }
        if (ctx->pc != 0x2AF808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF808u; }
        if (ctx->pc != 0x2AF808u) { return; }
    }
    ctx->pc = 0x2AF808u;
label_2af808:
    // 0x2af808: 0x8f849b24  lw          $a0, -0x64DC($gp)
    ctx->pc = 0x2af808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af80c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2af80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af810: 0x3c034228  lui         $v1, 0x4228
    ctx->pc = 0x2af810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
    // 0x2af814: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x2af814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x2af818: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2af818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af81c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2af820: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2af820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af824: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2af824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af828: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2af828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af82c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AF82Cu;
    SET_GPR_U32(ctx, 31, 0x2AF834u);
    ctx->pc = 0x2AF830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF82Cu;
            // 0x2af830: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF834u; }
        if (ctx->pc != 0x2AF834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF834u; }
        if (ctx->pc != 0x2AF834u) { return; }
    }
    ctx->pc = 0x2AF834u;
label_2af834:
    // 0x2af834: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x2af838: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2af838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2af83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af840: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x2af840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2af844: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF844u;
    SET_GPR_U32(ctx, 31, 0x2AF84Cu);
    ctx->pc = 0x2AF848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF844u;
            // 0x2af848: 0x24080026  addiu       $t0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF84Cu; }
        if (ctx->pc != 0x2AF84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF84Cu; }
        if (ctx->pc != 0x2AF84Cu) { return; }
    }
    ctx->pc = 0x2AF84Cu;
label_2af84c:
    // 0x2af84c: 0x8f849b24  lw          $a0, -0x64DC($gp)
    ctx->pc = 0x2af84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af850: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2af850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af854: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2af858: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x2af858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x2af85c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2af85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af860: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x2af864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2af864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af868: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2af868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af86c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2af86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af870: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AF870u;
    SET_GPR_U32(ctx, 31, 0x2AF878u);
    ctx->pc = 0x2AF874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF870u;
            // 0x2af874: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF878u; }
        if (ctx->pc != 0x2AF878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF878u; }
        if (ctx->pc != 0x2AF878u) { return; }
    }
    ctx->pc = 0x2AF878u;
label_2af878:
    // 0x2af878: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AF878u;
    SET_GPR_U32(ctx, 31, 0x2AF880u);
    ctx->pc = 0x2AF87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF878u;
            // 0x2af87c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF880u; }
        if (ctx->pc != 0x2AF880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF880u; }
        if (ctx->pc != 0x2AF880u) { return; }
    }
    ctx->pc = 0x2AF880u;
label_2af880:
    // 0x2af880: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2af884: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2AF884u;
    SET_GPR_U32(ctx, 31, 0x2AF88Cu);
    ctx->pc = 0x2AF888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF884u;
            // 0x2af888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF88Cu; }
        if (ctx->pc != 0x2AF88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF88Cu; }
        if (ctx->pc != 0x2AF88Cu) { return; }
    }
    ctx->pc = 0x2AF88Cu;
label_2af88c:
    // 0x2af88c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2af88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2af890: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AF890u;
    SET_GPR_U32(ctx, 31, 0x2AF898u);
    ctx->pc = 0x2AF894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF890u;
            // 0x2af894: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF898u; }
        if (ctx->pc != 0x2AF898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF898u; }
        if (ctx->pc != 0x2AF898u) { return; }
    }
    ctx->pc = 0x2AF898u;
label_2af898:
    // 0x2af898: 0x8f859b24  lw          $a1, -0x64DC($gp)
    ctx->pc = 0x2af898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af89c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AF89Cu;
    SET_GPR_U32(ctx, 31, 0x2AF8A4u);
    ctx->pc = 0x2AF8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF89Cu;
            // 0x2af8a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A4u; }
        if (ctx->pc != 0x2AF8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A4u; }
        if (ctx->pc != 0x2AF8A4u) { return; }
    }
    ctx->pc = 0x2AF8A4u;
label_2af8a4:
    // 0x2af8a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2af8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af8a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2af8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2af8ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2af8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2af8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8b4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AF8B4u;
    SET_GPR_U32(ctx, 31, 0x2AF8BCu);
    ctx->pc = 0x2AF8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8B4u;
            // 0x2af8b8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8BCu; }
        if (ctx->pc != 0x2AF8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8BCu; }
        if (ctx->pc != 0x2AF8BCu) { return; }
    }
    ctx->pc = 0x2AF8BCu;
label_2af8bc:
    // 0x2af8bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2af8c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8c8: 0x2407006a  addiu       $a3, $zero, 0x6A
    ctx->pc = 0x2af8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x2af8cc: 0x24080156  addiu       $t0, $zero, 0x156
    ctx->pc = 0x2af8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x2af8d0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2af8d4: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af8d8: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AF8D8u;
    SET_GPR_U32(ctx, 31, 0x2AF8E0u);
    ctx->pc = 0x2AF8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8D8u;
            // 0x2af8dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8E0u; }
        if (ctx->pc != 0x2AF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8E0u; }
        if (ctx->pc != 0x2AF8E0u) { return; }
    }
    ctx->pc = 0x2AF8E0u;
label_2af8e0:
    // 0x2af8e0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AF8E0u;
    SET_GPR_U32(ctx, 31, 0x2AF8E8u);
    ctx->pc = 0x2AF8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8E0u;
            // 0x2af8e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8E8u; }
        if (ctx->pc != 0x2AF8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8E8u; }
        if (ctx->pc != 0x2AF8E8u) { return; }
    }
    ctx->pc = 0x2AF8E8u;
label_2af8e8:
    // 0x2af8e8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2AF8E8u;
    {
        const bool branch_taken_0x2af8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8E8u;
            // 0x2af8ec: 0x8f839b1c  lw          $v1, -0x64E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8e8) {
            ctx->pc = 0x2AF9ACu;
            goto label_2af9ac;
        }
    }
    ctx->pc = 0x2AF8F0u;
label_2af8f0:
    // 0x2af8f0: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AF8F0u;
    {
        const bool branch_taken_0x2af8f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AF8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8F0u;
            // 0x2af8f4: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8f0) {
            ctx->pc = 0x2AF9A8u;
            goto label_2af9a8;
        }
    }
    ctx->pc = 0x2AF8F8u;
    // 0x2af8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af900: 0x24070088  addiu       $a3, $zero, 0x88
    ctx->pc = 0x2af900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2af904: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF904u;
    SET_GPR_U32(ctx, 31, 0x2AF90Cu);
    ctx->pc = 0x2AF908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF904u;
            // 0x2af908: 0x24080026  addiu       $t0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF90Cu; }
        if (ctx->pc != 0x2AF90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF90Cu; }
        if (ctx->pc != 0x2AF90Cu) { return; }
    }
    ctx->pc = 0x2AF90Cu;
label_2af90c:
    // 0x2af90c: 0x8f849b24  lw          $a0, -0x64DC($gp)
    ctx->pc = 0x2af90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af910: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2af910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af914: 0x3c034228  lui         $v1, 0x4228
    ctx->pc = 0x2af914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
    // 0x2af918: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x2af91c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2af91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af920: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x2af920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2af924: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2af924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af928: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2af928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af92c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2af92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af930: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AF930u;
    SET_GPR_U32(ctx, 31, 0x2AF938u);
    ctx->pc = 0x2AF934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF930u;
            // 0x2af934: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF938u; }
        if (ctx->pc != 0x2AF938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF938u; }
        if (ctx->pc != 0x2AF938u) { return; }
    }
    ctx->pc = 0x2AF938u;
label_2af938:
    // 0x2af938: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AF938u;
    SET_GPR_U32(ctx, 31, 0x2AF940u);
    ctx->pc = 0x2AF93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF938u;
            // 0x2af93c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF940u; }
        if (ctx->pc != 0x2AF940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF940u; }
        if (ctx->pc != 0x2AF940u) { return; }
    }
    ctx->pc = 0x2AF940u;
label_2af940:
    // 0x2af940: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2af944: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2AF944u;
    SET_GPR_U32(ctx, 31, 0x2AF94Cu);
    ctx->pc = 0x2AF948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF944u;
            // 0x2af948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF94Cu; }
        if (ctx->pc != 0x2AF94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF94Cu; }
        if (ctx->pc != 0x2AF94Cu) { return; }
    }
    ctx->pc = 0x2AF94Cu;
label_2af94c:
    // 0x2af94c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2af94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2af950: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AF950u;
    SET_GPR_U32(ctx, 31, 0x2AF958u);
    ctx->pc = 0x2AF954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF950u;
            // 0x2af954: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF958u; }
        if (ctx->pc != 0x2AF958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF958u; }
        if (ctx->pc != 0x2AF958u) { return; }
    }
    ctx->pc = 0x2AF958u;
label_2af958:
    // 0x2af958: 0x8f859b24  lw          $a1, -0x64DC($gp)
    ctx->pc = 0x2af958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x2af95c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AF95Cu;
    SET_GPR_U32(ctx, 31, 0x2AF964u);
    ctx->pc = 0x2AF960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF95Cu;
            // 0x2af960: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF964u; }
        if (ctx->pc != 0x2AF964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF964u; }
        if (ctx->pc != 0x2AF964u) { return; }
    }
    ctx->pc = 0x2AF964u;
label_2af964:
    // 0x2af964: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af968: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2af96c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2af96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af970: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2af970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af974: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AF974u;
    SET_GPR_U32(ctx, 31, 0x2AF97Cu);
    ctx->pc = 0x2AF978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF974u;
            // 0x2af978: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF97Cu; }
        if (ctx->pc != 0x2AF97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF97Cu; }
        if (ctx->pc != 0x2AF97Cu) { return; }
    }
    ctx->pc = 0x2AF97Cu;
label_2af97c:
    // 0x2af97c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2af97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2af980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af988: 0x240700ce  addiu       $a3, $zero, 0xCE
    ctx->pc = 0x2af988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x2af98c: 0x24080156  addiu       $t0, $zero, 0x156
    ctx->pc = 0x2af98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x2af990: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2af994: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af998: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AF998u;
    SET_GPR_U32(ctx, 31, 0x2AF9A0u);
    ctx->pc = 0x2AF99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF998u;
            // 0x2af99c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9A0u; }
        if (ctx->pc != 0x2AF9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9A0u; }
        if (ctx->pc != 0x2AF9A0u) { return; }
    }
    ctx->pc = 0x2AF9A0u;
label_2af9a0:
    // 0x2af9a0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AF9A0u;
    SET_GPR_U32(ctx, 31, 0x2AF9A8u);
    ctx->pc = 0x2AF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9A0u;
            // 0x2af9a4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9A8u; }
        if (ctx->pc != 0x2AF9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9A8u; }
        if (ctx->pc != 0x2AF9A8u) { return; }
    }
    ctx->pc = 0x2AF9A8u;
label_2af9a8:
    // 0x2af9a8: 0x8f839b1c  lw          $v1, -0x64E4($gp)
    ctx->pc = 0x2af9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
label_2af9ac:
    // 0x2af9ac: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2AF9ACu;
    {
        const bool branch_taken_0x2af9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9ac) {
            ctx->pc = 0x2AFC00u;
            goto label_2afc00;
        }
    }
    ctx->pc = 0x2AF9B4u;
    // 0x2af9b4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2af9b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9bc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AF9BCu;
    SET_GPR_U32(ctx, 31, 0x2AF9C4u);
    ctx->pc = 0x2AF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9BCu;
            // 0x2af9c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9C4u; }
        if (ctx->pc != 0x2AF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9C4u; }
        if (ctx->pc != 0x2AF9C4u) { return; }
    }
    ctx->pc = 0x2AF9C4u;
label_2af9c4:
    // 0x2af9c4: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2af9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2af9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9cc: 0x24060152  addiu       $a2, $zero, 0x152
    ctx->pc = 0x2af9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    // 0x2af9d0: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x2af9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2af9d4: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x2AF9D4u;
    SET_GPR_U32(ctx, 31, 0x2AF9DCu);
    ctx->pc = 0x2AF9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9D4u;
            // 0x2af9d8: 0x24080078  addiu       $t0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9DCu; }
        if (ctx->pc != 0x2AF9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9DCu; }
        if (ctx->pc != 0x2AF9DCu) { return; }
    }
    ctx->pc = 0x2AF9DCu;
label_2af9dc:
    // 0x2af9dc: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x2af9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9e4: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2af9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2af9e8: 0x2407004a  addiu       $a3, $zero, 0x4A
    ctx->pc = 0x2af9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2af9ec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF9ECu;
    SET_GPR_U32(ctx, 31, 0x2AF9F4u);
    ctx->pc = 0x2AF9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9ECu;
            // 0x2af9f0: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9F4u; }
        if (ctx->pc != 0x2AF9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9F4u; }
        if (ctx->pc != 0x2AF9F4u) { return; }
    }
    ctx->pc = 0x2AF9F4u;
label_2af9f4:
    // 0x2af9f4: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2af9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2af9f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2af9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af9fc: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2af9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x2afa00: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x2afa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x2afa04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2afa04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2afa08: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x2afa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x2afa0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2afa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2afa10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2afa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa14: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2afa14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa18: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AFA18u;
    SET_GPR_U32(ctx, 31, 0x2AFA20u);
    ctx->pc = 0x2AFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA18u;
            // 0x2afa1c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA20u; }
        if (ctx->pc != 0x2AFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA20u; }
        if (ctx->pc != 0x2AFA20u) { return; }
    }
    ctx->pc = 0x2AFA20u;
label_2afa20:
    // 0x2afa20: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2afa24: 0x2405014a  addiu       $a1, $zero, 0x14A
    ctx->pc = 0x2afa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2afa28: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2afa2c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2afa30: 0xc087220  jal         func_21C880
    ctx->pc = 0x2AFA30u;
    SET_GPR_U32(ctx, 31, 0x2AFA38u);
    ctx->pc = 0x2AFA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA30u;
            // 0x2afa34: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C880u;
    if (runtime->hasFunction(0x21C880u)) {
        auto targetFn = runtime->lookupFunction(0x21C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA38u; }
        if (ctx->pc != 0x2AFA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameListFix__FP10mgCTextureiiii_0x21c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA38u; }
        if (ctx->pc != 0x2AFA38u) { return; }
    }
    ctx->pc = 0x2AFA38u;
label_2afa38:
    // 0x2afa38: 0x24100084  addiu       $s0, $zero, 0x84
    ctx->pc = 0x2afa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2afa3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2afa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afa40:
    // 0x2afa40: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2afa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2afa44: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x2afa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x2afa48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2afa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa4c: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x2AFA4Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA54u);
    ctx->pc = 0x2AFA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA4Cu;
            // 0x2afa50: 0x2407006e  addiu       $a3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (runtime->hasFunction(0x21CD30u)) {
        auto targetFn = runtime->lookupFunction(0x21CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA54u; }
        if (ctx->pc != 0x2AFA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA54u; }
        if (ctx->pc != 0x2AFA54u) { return; }
    }
    ctx->pc = 0x2AFA54u;
label_2afa54:
    // 0x2afa54: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2afa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2afa58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa5c: 0x240600ec  addiu       $a2, $zero, 0xEC
    ctx->pc = 0x2afa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x2afa60: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2afa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2afa64: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AFA64u;
    SET_GPR_U32(ctx, 31, 0x2AFA6Cu);
    ctx->pc = 0x2AFA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA64u;
            // 0x2afa68: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA6Cu; }
        if (ctx->pc != 0x2AFA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA6Cu; }
        if (ctx->pc != 0x2AFA6Cu) { return; }
    }
    ctx->pc = 0x2AFA6Cu;
label_2afa6c:
    // 0x2afa6c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2afa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2afa70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa74: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x2afa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2afa78: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2afa78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2afa7c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AFA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA84u);
    ctx->pc = 0x2AFA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA7Cu;
            // 0x2afa80: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA84u; }
        if (ctx->pc != 0x2AFA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA84u; }
        if (ctx->pc != 0x2AFA84u) { return; }
    }
    ctx->pc = 0x2AFA84u;
label_2afa84:
    // 0x2afa84: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AFA84u;
    SET_GPR_U32(ctx, 31, 0x2AFA8Cu);
    ctx->pc = 0x2AFA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA84u;
            // 0x2afa88: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA8Cu; }
        if (ctx->pc != 0x2AFA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA8Cu; }
        if (ctx->pc != 0x2AFA8Cu) { return; }
    }
    ctx->pc = 0x2AFA8Cu;
label_2afa8c:
    // 0x2afa8c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afa90: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2AFA90u;
    SET_GPR_U32(ctx, 31, 0x2AFA98u);
    ctx->pc = 0x2AFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA90u;
            // 0x2afa94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA98u; }
        if (ctx->pc != 0x2AFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA98u; }
        if (ctx->pc != 0x2AFA98u) { return; }
    }
    ctx->pc = 0x2AFA98u;
label_2afa98:
    // 0x2afa98: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afa9c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AFA9Cu;
    SET_GPR_U32(ctx, 31, 0x2AFAA4u);
    ctx->pc = 0x2AFAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA9Cu;
            // 0x2afaa0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAA4u; }
        if (ctx->pc != 0x2AFAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAA4u; }
        if (ctx->pc != 0x2AFAA4u) { return; }
    }
    ctx->pc = 0x2AFAA4u;
label_2afaa4:
    // 0x2afaa4: 0x8f859b1c  lw          $a1, -0x64E4($gp)
    ctx->pc = 0x2afaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2afaa8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AFAA8u;
    SET_GPR_U32(ctx, 31, 0x2AFAB0u);
    ctx->pc = 0x2AFAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAA8u;
            // 0x2afaac: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAB0u; }
        if (ctx->pc != 0x2AFAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAB0u; }
        if (ctx->pc != 0x2AFAB0u) { return; }
    }
    ctx->pc = 0x2AFAB0u;
label_2afab0:
    // 0x2afab0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2afab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2afab4: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afab8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2afab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afabc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2afabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afac0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AFAC0u;
    SET_GPR_U32(ctx, 31, 0x2AFAC8u);
    ctx->pc = 0x2AFAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAC0u;
            // 0x2afac4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAC8u; }
        if (ctx->pc != 0x2AFAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAC8u; }
        if (ctx->pc != 0x2AFAC8u) { return; }
    }
    ctx->pc = 0x2AFAC8u;
label_2afac8:
    // 0x2afac8: 0x87829b68  lh          $v0, -0x6498($gp)
    ctx->pc = 0x2afac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941544)));
    // 0x2afacc: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x2afaccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2afad0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFAD0u;
    {
        const bool branch_taken_0x2afad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAD0u;
            // 0x2afad4: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad0) {
            ctx->pc = 0x2AFAF4u;
            goto label_2afaf4;
        }
    }
    ctx->pc = 0x2AFAD8u;
    // 0x2afad8: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFAD8u;
    {
        const bool branch_taken_0x2afad8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAD8u;
            // 0x2afadc: 0x240500d2  addiu       $a1, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad8) {
            ctx->pc = 0x2AFAF4u;
            goto label_2afaf4;
        }
    }
    ctx->pc = 0x2AFAE0u;
    // 0x2afae0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afae4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2afae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afae8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2afae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2afaec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AFAECu;
    SET_GPR_U32(ctx, 31, 0x2AFAF4u);
    ctx->pc = 0x2AFAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAECu;
            // 0x2afaf0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAF4u; }
        if (ctx->pc != 0x2AFAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFAF4u; }
        if (ctx->pc != 0x2AFAF4u) { return; }
    }
    ctx->pc = 0x2AFAF4u;
label_2afaf4:
    // 0x2afaf4: 0x0  nop
    ctx->pc = 0x2afaf4u;
    // NOP
    // 0x2afaf8: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x2afaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2afafc: 0x2608ffee  addiu       $t0, $s0, -0x12
    ctx->pc = 0x2afafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967278));
    // 0x2afb00: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2afb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb08: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x2afb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x2afb0c: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x2afb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2afb10: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2afb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2afb14: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AFB14u;
    SET_GPR_U32(ctx, 31, 0x2AFB1Cu);
    ctx->pc = 0x2AFB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB14u;
            // 0x2afb18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB1Cu; }
        if (ctx->pc != 0x2AFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB1Cu; }
        if (ctx->pc != 0x2AFB1Cu) { return; }
    }
    ctx->pc = 0x2AFB1Cu;
label_2afb1c:
    // 0x2afb1c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2afb20: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afb24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2afb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2afb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb2c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AFB2Cu;
    SET_GPR_U32(ctx, 31, 0x2AFB34u);
    ctx->pc = 0x2AFB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB2Cu;
            // 0x2afb30: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB34u; }
        if (ctx->pc != 0x2AFB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB34u; }
        if (ctx->pc != 0x2AFB34u) { return; }
    }
    ctx->pc = 0x2AFB34u;
label_2afb34:
    // 0x2afb34: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2afb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2afb38: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2afb38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2afb3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AFB3Cu;
    {
        const bool branch_taken_0x2afb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB3Cu;
            // 0x2afb40: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb3c) {
            ctx->pc = 0x2AFB80u;
            goto label_2afb80;
        }
    }
    ctx->pc = 0x2AFB44u;
    // 0x2afb44: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2afb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2afb48: 0x240600ec  addiu       $a2, $zero, 0xEC
    ctx->pc = 0x2afb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x2afb4c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2afb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2afb50: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AFB50u;
    SET_GPR_U32(ctx, 31, 0x2AFB58u);
    ctx->pc = 0x2AFB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB50u;
            // 0x2afb54: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB58u; }
        if (ctx->pc != 0x2AFB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB58u; }
        if (ctx->pc != 0x2AFB58u) { return; }
    }
    ctx->pc = 0x2AFB58u;
label_2afb58:
    // 0x2afb58: 0x2603ffee  addiu       $v1, $s0, -0x12
    ctx->pc = 0x2afb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967278));
    // 0x2afb5c: 0x3c0243cb  lui         $v0, 0x43CB
    ctx->pc = 0x2afb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17355 << 16));
    // 0x2afb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb64: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afb68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2afb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2afb6c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2afb70: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AFB70u;
    SET_GPR_U32(ctx, 31, 0x2AFB78u);
    ctx->pc = 0x2AFB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB70u;
            // 0x2afb74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB78u; }
        if (ctx->pc != 0x2AFB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB78u; }
        if (ctx->pc != 0x2AFB78u) { return; }
    }
    ctx->pc = 0x2AFB78u;
label_2afb78:
    // 0x2afb78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AFB78u;
    {
        const bool branch_taken_0x2afb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afb78) {
            ctx->pc = 0x2AFBE8u;
            goto label_2afbe8;
        }
    }
    ctx->pc = 0x2AFB80u;
label_2afb80:
    // 0x2afb80: 0x8f849b08  lw          $a0, -0x64F8($gp)
    ctx->pc = 0x2afb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2afb84: 0xc0bdb0c  jal         func_2F6C30
    ctx->pc = 0x2AFB84u;
    SET_GPR_U32(ctx, 31, 0x2AFB8Cu);
    ctx->pc = 0x2AFB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB84u;
            // 0x2afb88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6C30u;
    if (runtime->hasFunction(0x2F6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2F6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB8Cu; }
        if (ctx->pc != 0x2AFB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHorlScore__11CSphidaDataFi_0x2f6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB8Cu; }
        if (ctx->pc != 0x2AFB8Cu) { return; }
    }
    ctx->pc = 0x2AFB8Cu;
label_2afb8c:
    // 0x2afb8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2afb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb90: 0x2608ffed  addiu       $t0, $s0, -0x13
    ctx->pc = 0x2afb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967277));
    // 0x2afb94: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afb98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2afb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb9c: 0x240701a6  addiu       $a3, $zero, 0x1A6
    ctx->pc = 0x2afb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x2afba0: 0x27a90270  addiu       $t1, $sp, 0x270
    ctx->pc = 0x2afba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2afba4: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2afba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2afba8: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AFBA8u;
    SET_GPR_U32(ctx, 31, 0x2AFBB0u);
    ctx->pc = 0x2AFBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFBA8u;
            // 0x2afbac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBB0u; }
        if (ctx->pc != 0x2AFBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBB0u; }
        if (ctx->pc != 0x2AFBB0u) { return; }
    }
    ctx->pc = 0x2AFBB0u;
label_2afbb0:
    // 0x2afbb0: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x2afbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x2afbb4: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2afbb8: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2afbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2afbbc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2afbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2afbc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AFBC0u;
    SET_GPR_U32(ctx, 31, 0x2AFBC8u);
    ctx->pc = 0x2AFBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFBC0u;
            // 0x2afbc4: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBC8u; }
        if (ctx->pc != 0x2AFBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBC8u; }
        if (ctx->pc != 0x2AFBC8u) { return; }
    }
    ctx->pc = 0x2AFBC8u;
label_2afbc8:
    // 0x2afbc8: 0x2602ffee  addiu       $v0, $s0, -0x12
    ctx->pc = 0x2afbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967278));
    // 0x2afbcc: 0x3c0343d7  lui         $v1, 0x43D7
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17367 << 16));
    // 0x2afbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2afbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbd4: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2afbd8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2afbd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2afbdc: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x2afbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x2afbe0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AFBE0u;
    SET_GPR_U32(ctx, 31, 0x2AFBE8u);
    ctx->pc = 0x2AFBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFBE0u;
            // 0x2afbe4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBE8u; }
        if (ctx->pc != 0x2AFBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBE8u; }
        if (ctx->pc != 0x2AFBE8u) { return; }
    }
    ctx->pc = 0x2AFBE8u;
label_2afbe8:
    // 0x2afbe8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AFBE8u;
    SET_GPR_U32(ctx, 31, 0x2AFBF0u);
    ctx->pc = 0x2AFBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFBE8u;
            // 0x2afbec: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBF0u; }
        if (ctx->pc != 0x2AFBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFBF0u; }
        if (ctx->pc != 0x2AFBF0u) { return; }
    }
    ctx->pc = 0x2AFBF0u;
label_2afbf0:
    // 0x2afbf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2afbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2afbf4: 0x2a430009  slti        $v1, $s2, 0x9
    ctx->pc = 0x2afbf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2afbf8: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x2AFBF8u;
    {
        const bool branch_taken_0x2afbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFBF8u;
            // 0x2afbfc: 0x26100016  addiu       $s0, $s0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbf8) {
            ctx->pc = 0x2AFA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afa40;
        }
    }
    ctx->pc = 0x2AFC00u;
label_2afc00:
    // 0x2afc00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2afc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afc04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2afc04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2afc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afc10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFC10u;
            // 0x2afc14: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFC18u;
}
