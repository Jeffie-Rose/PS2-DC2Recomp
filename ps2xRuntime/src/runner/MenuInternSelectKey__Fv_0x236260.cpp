#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInternSelectKey__Fv
// Address: 0x236260 - 0x23684c
void MenuInternSelectKey__Fv_0x236260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInternSelectKey__Fv_0x236260");
#endif

    switch (ctx->pc) {
        case 0x236290u: goto label_236290;
        case 0x23629cu: goto label_23629c;
        case 0x2362f4u: goto label_2362f4;
        case 0x236314u: goto label_236314;
        case 0x236398u: goto label_236398;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363e8u: goto label_2363e8;
        case 0x236428u: goto label_236428;
        case 0x236434u: goto label_236434;
        case 0x236448u: goto label_236448;
        case 0x236468u: goto label_236468;
        case 0x23647cu: goto label_23647c;
        case 0x236510u: goto label_236510;
        case 0x236520u: goto label_236520;
        case 0x23655cu: goto label_23655c;
        case 0x23656cu: goto label_23656c;
        case 0x23658cu: goto label_23658c;
        case 0x23659cu: goto label_23659c;
        case 0x2365d4u: goto label_2365d4;
        case 0x236628u: goto label_236628;
        case 0x23663cu: goto label_23663c;
        case 0x236658u: goto label_236658;
        case 0x236684u: goto label_236684;
        case 0x2366acu: goto label_2366ac;
        case 0x2366ccu: goto label_2366cc;
        case 0x2366dcu: goto label_2366dc;
        case 0x2366f4u: goto label_2366f4;
        case 0x236704u: goto label_236704;
        case 0x23671cu: goto label_23671c;
        case 0x23672cu: goto label_23672c;
        case 0x23673cu: goto label_23673c;
        case 0x23674cu: goto label_23674c;
        case 0x23675cu: goto label_23675c;
        case 0x236794u: goto label_236794;
        case 0x2367d0u: goto label_2367d0;
        case 0x2367ecu: goto label_2367ec;
        case 0x2367f8u: goto label_2367f8;
        case 0x23680cu: goto label_23680c;
        case 0x236814u: goto label_236814;
        case 0x236820u: goto label_236820;
        default: break;
    }

    ctx->pc = 0x236260u;

    // 0x236260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x236264: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x236264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x236268: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x236268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23626c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x236270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x236274: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x236278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23627c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236284: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x236284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236288: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x236288u;
    SET_GPR_U32(ctx, 31, 0x236290u);
    ctx->pc = 0x23628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236288u;
            // 0x23628c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236290u; }
        if (ctx->pc != 0x236290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236290u; }
        if (ctx->pc != 0x236290u) { return; }
    }
    ctx->pc = 0x236290u;
label_236290:
    // 0x236290: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x236290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236294: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x236294u;
    SET_GPR_U32(ctx, 31, 0x23629Cu);
    ctx->pc = 0x236298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236294u;
            // 0x236298: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23629Cu; }
        if (ctx->pc != 0x23629Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23629Cu; }
        if (ctx->pc != 0x23629Cu) { return; }
    }
    ctx->pc = 0x23629Cu;
label_23629c:
    // 0x23629c: 0x8f8594cc  lw          $a1, -0x6B34($gp)
    ctx->pc = 0x23629cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2362a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2362a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2362a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2362a8: 0x84a30010  lh          $v1, 0x10($a1)
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2362ac: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2362acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2362b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2362B0u;
    {
        const bool branch_taken_0x2362b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2362B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2362B0u;
            // 0x2362b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362b0) {
            ctx->pc = 0x2362BCu;
            goto label_2362bc;
        }
    }
    ctx->pc = 0x2362B8u;
    // 0x2362b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2362b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2362bc:
    // 0x2362bc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2362bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2362c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2362C0u;
    {
        const bool branch_taken_0x2362c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2362C0u;
            // 0x2362c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362c0) {
            ctx->pc = 0x2362CCu;
            goto label_2362cc;
        }
    }
    ctx->pc = 0x2362C8u;
    // 0x2362c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2362c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2362cc:
    // 0x2362cc: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2362ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x2362d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2362D0u;
    {
        const bool branch_taken_0x2362d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362d0) {
            ctx->pc = 0x2362DCu;
            goto label_2362dc;
        }
    }
    ctx->pc = 0x2362D8u;
    // 0x2362d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2362d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2362dc:
    // 0x2362dc: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x2362dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2362e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2362e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2362e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2362e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2362ec: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2362ECu;
    SET_GPR_U32(ctx, 31, 0x2362F4u);
    ctx->pc = 0x2362F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2362ECu;
            // 0x2362f0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362F4u; }
        if (ctx->pc != 0x2362F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2362F4u; }
        if (ctx->pc != 0x2362F4u) { return; }
    }
    ctx->pc = 0x2362F4u;
label_2362f4:
    // 0x2362f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2362F4u;
    {
        const bool branch_taken_0x2362f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362f4) {
            ctx->pc = 0x236320u;
            goto label_236320;
        }
    }
    ctx->pc = 0x2362FCu;
    // 0x2362fc: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2362fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236300: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x236300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x236304: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236304u;
    {
        const bool branch_taken_0x236304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236304u;
            // 0x236308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236304) {
            ctx->pc = 0x236320u;
            goto label_236320;
        }
    }
    ctx->pc = 0x23630Cu;
    // 0x23630c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23630Cu;
    SET_GPR_U32(ctx, 31, 0x236314u);
    ctx->pc = 0x236310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23630Cu;
            // 0x236310: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236314u; }
        if (ctx->pc != 0x236314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236314u; }
        if (ctx->pc != 0x236314u) { return; }
    }
    ctx->pc = 0x236314u;
label_236314:
    // 0x236314: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x236314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236318: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x236318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23631c: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x23631cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
label_236320:
    // 0x236320: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x236324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236328: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x236328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23632c: 0x8c92000c  lw          $s2, 0xC($a0)
    ctx->pc = 0x23632cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x236330: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236330u;
    {
        const bool branch_taken_0x236330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x236334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236330u;
            // 0x236334: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236330) {
            ctx->pc = 0x23633Cu;
            goto label_23633c;
        }
    }
    ctx->pc = 0x236338u;
    // 0x236338: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x236338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23633c:
    // 0x23633c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236340: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236340u;
    {
        const bool branch_taken_0x236340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236340u;
            // 0x236344: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236340) {
            ctx->pc = 0x236358u;
            goto label_236358;
        }
    }
    ctx->pc = 0x236348u;
    // 0x236348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23634c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236350: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x236350u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236354: 0x0  nop
    ctx->pc = 0x236354u;
    // NOP
label_236358:
    // 0x236358: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x236358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23635c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236360: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236360u;
    {
        const bool branch_taken_0x236360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236360u;
            // 0x236364: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236360) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x236368u;
    // 0x236368: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236368u;
    {
        const bool branch_taken_0x236368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236368u;
            // 0x23636c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236368) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x236370u;
    // 0x236370: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236370u;
    {
        const bool branch_taken_0x236370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x236374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236370u;
            // 0x236374: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236370) {
            ctx->pc = 0x236380u;
            goto label_236380;
        }
    }
    ctx->pc = 0x236378u;
label_236378:
    // 0x236378: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x236378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23637c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_236380:
    // 0x236380: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236380u;
    {
        const bool branch_taken_0x236380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236380u;
            // 0x236384: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236380) {
            ctx->pc = 0x236390u;
            goto label_236390;
        }
    }
    ctx->pc = 0x236388u;
    // 0x236388: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236388u;
    {
        const bool branch_taken_0x236388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236388) {
            ctx->pc = 0x2363A0u;
            goto label_2363a0;
        }
    }
    ctx->pc = 0x236390u;
label_236390:
    // 0x236390: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x236390u;
    SET_GPR_U32(ctx, 31, 0x236398u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236398u; }
        if (ctx->pc != 0x236398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236398u; }
        if (ctx->pc != 0x236398u) { return; }
    }
    ctx->pc = 0x236398u;
label_236398:
    // 0x236398: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236398u;
    {
        const bool branch_taken_0x236398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236398u;
            // 0x23639c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236398) {
            ctx->pc = 0x2363B8u;
            goto label_2363b8;
        }
    }
    ctx->pc = 0x2363A0u;
label_2363a0:
    // 0x2363a0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2363a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2363a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2363a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2363a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363ac: 0xc08ad64  jal         func_22B590
    ctx->pc = 0x2363ACu;
    SET_GPR_U32(ctx, 31, 0x2363B4u);
    ctx->pc = 0x2363B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2363ACu;
            // 0x2363b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363B4u; }
        if (ctx->pc != 0x2363B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363B4u; }
        if (ctx->pc != 0x2363B4u) { return; }
    }
    ctx->pc = 0x2363B4u;
label_2363b4:
    // 0x2363b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2363b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2363b8:
    // 0x2363b8: 0xc08ab80  jal         func_22AE00
    ctx->pc = 0x2363B8u;
    SET_GPR_U32(ctx, 31, 0x2363C0u);
    ctx->pc = 0x22AE00u;
    if (runtime->hasFunction(0x22AE00u)) {
        auto targetFn = runtime->lookupFunction(0x22AE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363C0u; }
        if (ctx->pc != 0x2363C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIconChar__Fi_0x22ae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363C0u; }
        if (ctx->pc != 0x2363C0u) { return; }
    }
    ctx->pc = 0x2363C0u;
label_2363c0:
    // 0x2363c0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2363c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2363c4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2363C4u;
    SET_GPR_U32(ctx, 31, 0x2363CCu);
    ctx->pc = 0x2363C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2363C4u;
            // 0x2363c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363CCu; }
        if (ctx->pc != 0x2363CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363CCu; }
        if (ctx->pc != 0x2363CCu) { return; }
    }
    ctx->pc = 0x2363CCu;
label_2363cc:
    // 0x2363cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2363ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363d0: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2363d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2363d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2363d8: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2363D8u;
    {
        const bool branch_taken_0x2363d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2363d8) {
            ctx->pc = 0x236400u;
            goto label_236400;
        }
    }
    ctx->pc = 0x2363E0u;
    // 0x2363e0: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x2363E0u;
    SET_GPR_U32(ctx, 31, 0x2363E8u);
    ctx->pc = 0x2363E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2363E0u;
            // 0x2363e4: 0x2222023  subu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363E8u; }
        if (ctx->pc != 0x2363E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2363E8u; }
        if (ctx->pc != 0x2363E8u) { return; }
    }
    ctx->pc = 0x2363E8u;
label_2363e8:
    // 0x2363e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2363e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2363ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2363ECu;
    {
        const bool branch_taken_0x2363ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2363ec) {
            ctx->pc = 0x236400u;
            goto label_236400;
        }
    }
    ctx->pc = 0x2363F4u;
    // 0x2363f4: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2363f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2363f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2363fc: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x2363fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
label_236400:
    // 0x236400: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x236400u;
    {
        const bool branch_taken_0x236400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x236400) {
            ctx->pc = 0x236470u;
            goto label_236470;
        }
    }
    ctx->pc = 0x236408u;
    // 0x236408: 0xdf839578  ld          $v1, -0x6A88($gp)
    ctx->pc = 0x236408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940024)));
    // 0x23640c: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x23640cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x236410: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x236414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x236414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236418: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x236418u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x23641c: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x23641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236420: 0xc0a248c  jal         func_289230
    ctx->pc = 0x236420u;
    SET_GPR_U32(ctx, 31, 0x236428u);
    ctx->pc = 0x236424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236420u;
            // 0x236424: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236428u; }
        if (ctx->pc != 0x236428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236428u; }
        if (ctx->pc != 0x236428u) { return; }
    }
    ctx->pc = 0x236428u;
label_236428:
    // 0x236428: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x236428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x23642c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23642Cu;
    SET_GPR_U32(ctx, 31, 0x236434u);
    ctx->pc = 0x236430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23642Cu;
            // 0x236430: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236434u; }
        if (ctx->pc != 0x236434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236434u; }
        if (ctx->pc != 0x236434u) { return; }
    }
    ctx->pc = 0x236434u;
label_236434:
    // 0x236434: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x236434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236438: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x236438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x23643c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x23643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x236440: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x236440u;
    SET_GPR_U32(ctx, 31, 0x236448u);
    ctx->pc = 0x236444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236440u;
            // 0x236444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236448u; }
        if (ctx->pc != 0x236448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236448u; }
        if (ctx->pc != 0x236448u) { return; }
    }
    ctx->pc = 0x236448u;
label_236448:
    // 0x236448: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x23644c: 0x80420014  lb          $v0, 0x14($v0)
    ctx->pc = 0x23644cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x236450: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236450u;
    {
        const bool branch_taken_0x236450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236450) {
            ctx->pc = 0x236470u;
            goto label_236470;
        }
    }
    ctx->pc = 0x236458u;
    // 0x236458: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x236458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23645c: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x23645cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x236460: 0xc08f000  jal         func_23C000
    ctx->pc = 0x236460u;
    SET_GPR_U32(ctx, 31, 0x236468u);
    ctx->pc = 0x236464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236460u;
            // 0x236464: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236468u; }
        if (ctx->pc != 0x236468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236468u; }
        if (ctx->pc != 0x236468u) { return; }
    }
    ctx->pc = 0x236468u;
label_236468:
    // 0x236468: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x23646c: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x23646cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
label_236470:
    // 0x236470: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x236470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236474: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x236474u;
    SET_GPR_U32(ctx, 31, 0x23647Cu);
    ctx->pc = 0x236478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236474u;
            // 0x236478: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23647Cu; }
        if (ctx->pc != 0x23647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23647Cu; }
        if (ctx->pc != 0x23647Cu) { return; }
    }
    ctx->pc = 0x23647Cu;
label_23647c:
    // 0x23647c: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x23647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236480: 0x90620015  lbu         $v0, 0x15($v1)
    ctx->pc = 0x236480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x236484: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x236484u;
    {
        const bool branch_taken_0x236484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236484) {
            ctx->pc = 0x236518u;
            goto label_236518;
        }
    }
    ctx->pc = 0x23648Cu;
    // 0x23648c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236490: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x236490u;
    {
        const bool branch_taken_0x236490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236490u;
            // 0x236494: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236490) {
            ctx->pc = 0x236510u;
            goto label_236510;
        }
    }
    ctx->pc = 0x236498u;
    // 0x236498: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x236498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x23649c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2364a0: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2364a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2364a4: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2364A4u;
    {
        const bool branch_taken_0x2364a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2364A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2364A4u;
            // 0x2364a8: 0x2685000a  addiu       $a1, $s4, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a4) {
            ctx->pc = 0x2364B8u;
            goto label_2364b8;
        }
    }
    ctx->pc = 0x2364ACu;
    // 0x2364ac: 0x93829530  lbu         $v0, -0x6AD0($gp)
    ctx->pc = 0x2364acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939952)));
    // 0x2364b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2364B0u;
    {
        const bool branch_taken_0x2364b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2364b0) {
            ctx->pc = 0x236500u;
            goto label_236500;
        }
    }
    ctx->pc = 0x2364B8u;
label_2364b8:
    // 0x2364b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2364bc: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2364BCu;
    {
        const bool branch_taken_0x2364bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2364C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2364BCu;
            // 0x2364c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364bc) {
            ctx->pc = 0x2364D4u;
            goto label_2364d4;
        }
    }
    ctx->pc = 0x2364C4u;
    // 0x2364c4: 0x93829538  lbu         $v0, -0x6AC8($gp)
    ctx->pc = 0x2364c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939960)));
    // 0x2364c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2364C8u;
    {
        const bool branch_taken_0x2364c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2364c8) {
            ctx->pc = 0x236500u;
            goto label_236500;
        }
    }
    ctx->pc = 0x2364D0u;
    // 0x2364d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2364d4:
    // 0x2364d4: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2364D4u;
    {
        const bool branch_taken_0x2364d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2364D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2364D4u;
            // 0x2364d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364d4) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2364DCu;
    // 0x2364dc: 0x93829534  lbu         $v0, -0x6ACC($gp)
    ctx->pc = 0x2364dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939956)));
    // 0x2364e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2364E0u;
    {
        const bool branch_taken_0x2364e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2364e0) {
            ctx->pc = 0x236500u;
            goto label_236500;
        }
    }
    ctx->pc = 0x2364E8u;
    // 0x2364e8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2364e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2364ec:
    // 0x2364ec: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2364ECu;
    {
        const bool branch_taken_0x2364ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2364ec) {
            ctx->pc = 0x236504u;
            goto label_236504;
        }
    }
    ctx->pc = 0x2364F4u;
    // 0x2364f4: 0x9382953c  lbu         $v0, -0x6AC4($gp)
    ctx->pc = 0x2364f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939964)));
    // 0x2364f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2364F8u;
    {
        const bool branch_taken_0x2364f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2364f8) {
            ctx->pc = 0x236504u;
            goto label_236504;
        }
    }
    ctx->pc = 0x236500u;
label_236500:
    // 0x236500: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_236504:
    // 0x236504: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x236504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x236508: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x236508u;
    SET_GPR_U32(ctx, 31, 0x236510u);
    ctx->pc = 0x23650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236508u;
            // 0x23650c: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236510u; }
        if (ctx->pc != 0x236510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236510u; }
        if (ctx->pc != 0x236510u) { return; }
    }
    ctx->pc = 0x236510u;
label_236510:
    // 0x236510: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236514: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x236514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
label_236518:
    // 0x236518: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x236518u;
    SET_GPR_U32(ctx, 31, 0x236520u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236520u; }
        if (ctx->pc != 0x236520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236520u; }
        if (ctx->pc != 0x236520u) { return; }
    }
    ctx->pc = 0x236520u;
label_236520:
    // 0x236520: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x236520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236524: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x236524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x236528: 0x84850010  lh          $a1, 0x10($a0)
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23652c: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23652Cu;
    {
        const bool branch_taken_0x23652c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x236530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23652Cu;
            // 0x236530: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23652c) {
            ctx->pc = 0x236584u;
            goto label_236584;
        }
    }
    ctx->pc = 0x236534u;
    // 0x236534: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x236534u;
    {
        const bool branch_taken_0x236534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x236538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236534u;
            // 0x236538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236534) {
            ctx->pc = 0x236574u;
            goto label_236574;
        }
    }
    ctx->pc = 0x23653Cu;
    // 0x23653c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23653Cu;
    {
        const bool branch_taken_0x23653c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x23653c) {
            ctx->pc = 0x23654Cu;
            goto label_23654c;
        }
    }
    ctx->pc = 0x236544u;
    // 0x236544: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x236544u;
    {
        const bool branch_taken_0x236544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236544) {
            ctx->pc = 0x2365C0u;
            goto label_2365c0;
        }
    }
    ctx->pc = 0x23654Cu;
label_23654c:
    // 0x23654c: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x23654Cu;
    {
        const bool branch_taken_0x23654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23654c) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x236554u;
    // 0x236554: 0xc05239c  jal         func_148E70
    ctx->pc = 0x236554u;
    SET_GPR_U32(ctx, 31, 0x23655Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23655Cu; }
        if (ctx->pc != 0x23655Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23655Cu; }
        if (ctx->pc != 0x23655Cu) { return; }
    }
    ctx->pc = 0x23655Cu;
label_23655c:
    // 0x23655c: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x23655Cu;
    {
        const bool branch_taken_0x23655c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23655c) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x236564u;
    // 0x236564: 0xc08d630  jal         func_2358C0
    ctx->pc = 0x236564u;
    SET_GPR_U32(ctx, 31, 0x23656Cu);
    ctx->pc = 0x236568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236564u;
            // 0x236568: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2358C0u;
    if (runtime->hasFunction(0x2358C0u)) {
        auto targetFn = runtime->lookupFunction(0x2358C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23656Cu; }
        if (ctx->pc != 0x23656Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnd__10CMenuInterFv_0x2358c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23656Cu; }
        if (ctx->pc != 0x23656Cu) { return; }
    }
    ctx->pc = 0x23656Cu;
label_23656c:
    // 0x23656c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x23656Cu;
    {
        const bool branch_taken_0x23656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23656Cu;
            // 0x236570: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23656c) {
            ctx->pc = 0x236818u;
            goto label_236818;
        }
    }
    ctx->pc = 0x236574u;
label_236574:
    // 0x236574: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x236574u;
    {
        const bool branch_taken_0x236574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236574) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x23657Cu;
    // 0x23657c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x23657Cu;
    {
        const bool branch_taken_0x23657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23657Cu;
            // 0x236580: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23657c) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x236584u;
label_236584:
    // 0x236584: 0xc087898  jal         func_21E260
    ctx->pc = 0x236584u;
    SET_GPR_U32(ctx, 31, 0x23658Cu);
    ctx->pc = 0x236588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236584u;
            // 0x236588: 0x8f8494d0  lw          $a0, -0x6B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23658Cu; }
        if (ctx->pc != 0x23658Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23658Cu; }
        if (ctx->pc != 0x23658Cu) { return; }
    }
    ctx->pc = 0x23658Cu;
label_23658c:
    // 0x23658c: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x23658Cu;
    {
        const bool branch_taken_0x23658c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23658Cu;
            // 0x236590: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23658c) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x236594u;
    // 0x236594: 0xc094274  jal         func_2509D0
    ctx->pc = 0x236594u;
    SET_GPR_U32(ctx, 31, 0x23659Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23659Cu; }
        if (ctx->pc != 0x23659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23659Cu; }
        if (ctx->pc != 0x23659Cu) { return; }
    }
    ctx->pc = 0x23659Cu;
label_23659c:
    // 0x23659c: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x23659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2365a0: 0xa38094d4  sb          $zero, -0x6B2C($gp)
    ctx->pc = 0x2365a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939860), (uint8_t)GPR_U32(ctx, 0));
    // 0x2365a4: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x2365a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2365a8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2365a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2365ac: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x2365acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2365b0: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2365B0u;
    {
        const bool branch_taken_0x2365b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365B0u;
            // 0x2365b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365b0) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x2365B8u;
    // 0x2365b8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2365B8u;
    {
        const bool branch_taken_0x2365b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365B8u;
            // 0x2365bc: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365b8) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x2365C0u;
label_2365c0:
    // 0x2365c0: 0x6800033  bltz        $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x2365C0u;
    {
        const bool branch_taken_0x2365c0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2365C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365C0u;
            // 0x2365c4: 0x16363c  dsll32      $a2, $s6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365c0) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x2365C8u;
    // 0x2365c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2365c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365cc: 0xc08d840  jal         func_236100
    ctx->pc = 0x2365CCu;
    SET_GPR_U32(ctx, 31, 0x2365D4u);
    ctx->pc = 0x2365D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2365CCu;
            // 0x2365d0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236100u;
    if (runtime->hasFunction(0x236100u)) {
        auto targetFn = runtime->lookupFunction(0x236100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2365D4u; }
        if (ctx->pc != 0x2365D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGTexture__10CMenuInterFii_0x236100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2365D4u; }
        if (ctx->pc != 0x2365D4u) { return; }
    }
    ctx->pc = 0x2365D4u;
label_2365d4:
    // 0x2365d4: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2365d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2365d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2365dc: 0x460002c  bltz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2365DCu;
    {
        const bool branch_taken_0x2365dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2365dc) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x2365E4u;
    // 0x2365e4: 0x80420012  lb          $v0, 0x12($v0)
    ctx->pc = 0x2365e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2365e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2365e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2365ec: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2365ECu;
    {
        const bool branch_taken_0x2365ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2365F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365ECu;
            // 0x2365f0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365ec) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x2365F4u;
    // 0x2365f4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2365F4u;
    {
        const bool branch_taken_0x2365f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2365F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365F4u;
            // 0x2365f8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365f4) {
            ctx->pc = 0x23660Cu;
            goto label_23660c;
        }
    }
    ctx->pc = 0x2365FCu;
    // 0x2365fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2365fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236600: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236600u;
    {
        const bool branch_taken_0x236600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236600) {
            ctx->pc = 0x236630u;
            goto label_236630;
        }
    }
    ctx->pc = 0x236608u;
    // 0x236608: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x236608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_23660c:
    // 0x23660c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23660Cu;
    {
        const bool branch_taken_0x23660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23660Cu;
            // 0x236610: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23660c) {
            ctx->pc = 0x23661Cu;
            goto label_23661c;
        }
    }
    ctx->pc = 0x236614u;
    // 0x236614: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x236614u;
    {
        const bool branch_taken_0x236614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236614) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x23661Cu;
label_23661c:
    // 0x23661c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x236620: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x236620u;
    SET_GPR_U32(ctx, 31, 0x236628u);
    ctx->pc = 0x236624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236620u;
            // 0x236624: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236628u; }
        if (ctx->pc != 0x236628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236628u; }
        if (ctx->pc != 0x236628u) { return; }
    }
    ctx->pc = 0x236628u;
label_236628:
    // 0x236628: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x236628u;
    {
        const bool branch_taken_0x236628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236628) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x236630u;
label_236630:
    // 0x236630: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x236630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x236634: 0xc04e780  jal         func_139E00
    ctx->pc = 0x236634u;
    SET_GPR_U32(ctx, 31, 0x23663Cu);
    ctx->pc = 0x236638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236634u;
            // 0x236638: 0x2484d520  addiu       $a0, $a0, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23663Cu; }
        if (ctx->pc != 0x23663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23663Cu; }
        if (ctx->pc != 0x23663Cu) { return; }
    }
    ctx->pc = 0x23663Cu;
label_23663c:
    // 0x23663c: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x23663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236640: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x236640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x236644: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x236644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236648: 0x24a5d520  addiu       $a1, $a1, -0x2AE0
    ctx->pc = 0x236648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
    // 0x23664c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x23664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x236650: 0xc08d0d0  jal         func_234340
    ctx->pc = 0x236650u;
    SET_GPR_U32(ctx, 31, 0x236658u);
    ctx->pc = 0x236654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236650u;
            // 0x236654: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234340u;
    if (runtime->hasFunction(0x234340u)) {
        auto targetFn = runtime->lookupFunction(0x234340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236658u; }
        if (ctx->pc != 0x236658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMenuInit__FiP9mgCMemoryPi_0x234340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236658u; }
        if (ctx->pc != 0x236658u) { return; }
    }
    ctx->pc = 0x236658u;
label_236658:
    // 0x236658: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236658u;
    {
        const bool branch_taken_0x236658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236658) {
            ctx->pc = 0x236684u;
            goto label_236684;
        }
    }
    ctx->pc = 0x236660u;
    // 0x236660: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x236660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236664: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x236668: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23666c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23666Cu;
    {
        const bool branch_taken_0x23666c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23666Cu;
            // 0x236670: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23666c) {
            ctx->pc = 0x236684u;
            goto label_236684;
        }
    }
    ctx->pc = 0x236674u;
    // 0x236674: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236674u;
    {
        const bool branch_taken_0x236674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236674u;
            // 0x236678: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236674) {
            ctx->pc = 0x236684u;
            goto label_236684;
        }
    }
    ctx->pc = 0x23667Cu;
    // 0x23667c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23667Cu;
    SET_GPR_U32(ctx, 31, 0x236684u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236684u; }
        if (ctx->pc != 0x236684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236684u; }
        if (ctx->pc != 0x236684u) { return; }
    }
    ctx->pc = 0x236684u;
label_236684:
    // 0x236684: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x236684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x236688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23668c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x23668cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_236690:
    // 0x236690: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x236690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x236694: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x236694u;
    {
        const bool branch_taken_0x236694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236694u;
            // 0x236698: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236694) {
            ctx->pc = 0x236764u;
            goto label_236764;
        }
    }
    ctx->pc = 0x23669Cu;
    // 0x23669c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2366a0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2366a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2366a4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2366A4u;
    SET_GPR_U32(ctx, 31, 0x2366ACu);
    ctx->pc = 0x2366A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2366A4u;
            // 0x2366a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366ACu; }
        if (ctx->pc != 0x2366ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366ACu; }
        if (ctx->pc != 0x2366ACu) { return; }
    }
    ctx->pc = 0x2366ACu;
label_2366ac:
    // 0x2366ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2366ACu;
    {
        const bool branch_taken_0x2366ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2366ac) {
            ctx->pc = 0x2366CCu;
            goto label_2366cc;
        }
    }
    ctx->pc = 0x2366B4u;
    // 0x2366b4: 0x8f8394a8  lw          $v1, -0x6B58($gp)
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x2366b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2366b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2366bc: 0x8c621a14  lw          $v0, 0x1A14($v1)
    ctx->pc = 0x2366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6676)));
    // 0x2366c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2366c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2366C4u;
    SET_GPR_U32(ctx, 31, 0x2366CCu);
    ctx->pc = 0x2366C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2366C4u;
            // 0x2366c8: 0xac621a14  sw          $v0, 0x1A14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366CCu; }
        if (ctx->pc != 0x2366CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366CCu; }
        if (ctx->pc != 0x2366CCu) { return; }
    }
    ctx->pc = 0x2366CCu;
label_2366cc:
    // 0x2366cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2366d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2366d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2366d4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2366D4u;
    SET_GPR_U32(ctx, 31, 0x2366DCu);
    ctx->pc = 0x2366D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2366D4u;
            // 0x2366d8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366DCu; }
        if (ctx->pc != 0x2366DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366DCu; }
        if (ctx->pc != 0x2366DCu) { return; }
    }
    ctx->pc = 0x2366DCu;
label_2366dc:
    // 0x2366dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2366DCu;
    {
        const bool branch_taken_0x2366dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2366dc) {
            ctx->pc = 0x2366F4u;
            goto label_2366f4;
        }
    }
    ctx->pc = 0x2366E4u;
    // 0x2366e4: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x2366e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x2366e8: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2366e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2366ec: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x2366ECu;
    SET_GPR_U32(ctx, 31, 0x2366F4u);
    ctx->pc = 0x2366F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2366ECu;
            // 0x2366f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366F4u; }
        if (ctx->pc != 0x2366F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366F4u; }
        if (ctx->pc != 0x2366F4u) { return; }
    }
    ctx->pc = 0x2366F4u;
label_2366f4:
    // 0x2366f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2366f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2366f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2366fc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2366FCu;
    SET_GPR_U32(ctx, 31, 0x236704u);
    ctx->pc = 0x236700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2366FCu;
            // 0x236700: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236704u; }
        if (ctx->pc != 0x236704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236704u; }
        if (ctx->pc != 0x236704u) { return; }
    }
    ctx->pc = 0x236704u;
label_236704:
    // 0x236704: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236704u;
    {
        const bool branch_taken_0x236704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236704) {
            ctx->pc = 0x23674Cu;
            goto label_23674c;
        }
    }
    ctx->pc = 0x23670Cu;
    // 0x23670c: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x23670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x236710: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x236710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x236714: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x236714u;
    SET_GPR_U32(ctx, 31, 0x23671Cu);
    ctx->pc = 0x236718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236714u;
            // 0x236718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23671Cu; }
        if (ctx->pc != 0x23671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23671Cu; }
        if (ctx->pc != 0x23671Cu) { return; }
    }
    ctx->pc = 0x23671Cu;
label_23671c:
    // 0x23671c: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x23671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x236720: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x236724: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x236724u;
    SET_GPR_U32(ctx, 31, 0x23672Cu);
    ctx->pc = 0x236728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236724u;
            // 0x236728: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23672Cu; }
        if (ctx->pc != 0x23672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23672Cu; }
        if (ctx->pc != 0x23672Cu) { return; }
    }
    ctx->pc = 0x23672Cu;
label_23672c:
    // 0x23672c: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x23672cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x236730: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x236730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x236734: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x236734u;
    SET_GPR_U32(ctx, 31, 0x23673Cu);
    ctx->pc = 0x236738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236734u;
            // 0x236738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23673Cu; }
        if (ctx->pc != 0x23673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23673Cu; }
        if (ctx->pc != 0x23673Cu) { return; }
    }
    ctx->pc = 0x23673Cu;
label_23673c:
    // 0x23673c: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x23673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x236740: 0x8c851a14  lw          $a1, 0x1A14($a0)
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6676)));
    // 0x236744: 0xc0bda08  jal         func_2F6820
    ctx->pc = 0x236744u;
    SET_GPR_U32(ctx, 31, 0x23674Cu);
    ctx->pc = 0x236748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236744u;
            // 0x236748: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6820u;
    if (runtime->hasFunction(0x2F6820u)) {
        auto targetFn = runtime->lookupFunction(0x2F6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23674Cu; }
        if (ctx->pc != 0x23674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ForceBootTour__9CSaveDataFii_0x2f6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23674Cu; }
        if (ctx->pc != 0x23674Cu) { return; }
    }
    ctx->pc = 0x23674Cu;
label_23674c:
    // 0x23674c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23674cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x236750: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x236750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236754: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x236754u;
    SET_GPR_U32(ctx, 31, 0x23675Cu);
    ctx->pc = 0x236758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236754u;
            // 0x236758: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23675Cu; }
        if (ctx->pc != 0x23675Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23675Cu; }
        if (ctx->pc != 0x23675Cu) { return; }
    }
    ctx->pc = 0x23675Cu;
label_23675c:
    // 0x23675c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x23675Cu;
    {
        const bool branch_taken_0x23675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23675Cu;
            // 0x236760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23675c) {
            ctx->pc = 0x236824u;
            goto label_236824;
        }
    }
    ctx->pc = 0x236764u;
label_236764:
    // 0x236764: 0x1204000d  beq         $s0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x236764u;
    {
        const bool branch_taken_0x236764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x236768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236764u;
            // 0x236768: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236764) {
            ctx->pc = 0x23679Cu;
            goto label_23679c;
        }
    }
    ctx->pc = 0x23676Cu;
    // 0x23676c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23676Cu;
    {
        const bool branch_taken_0x23676c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x236770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23676Cu;
            // 0x236770: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23676c) {
            ctx->pc = 0x23678Cu;
            goto label_23678c;
        }
    }
    ctx->pc = 0x236774u;
    // 0x236774: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236774u;
    {
        const bool branch_taken_0x236774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x236778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236774u;
            // 0x236778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236774) {
            ctx->pc = 0x23678Cu;
            goto label_23678c;
        }
    }
    ctx->pc = 0x23677Cu;
    // 0x23677c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23677Cu;
    {
        const bool branch_taken_0x23677c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23677c) {
            ctx->pc = 0x23678Cu;
            goto label_23678c;
        }
    }
    ctx->pc = 0x236784u;
    // 0x236784: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x236784u;
    {
        const bool branch_taken_0x236784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236784) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x23678Cu;
label_23678c:
    // 0x23678c: 0xc08d6d4  jal         func_235B50
    ctx->pc = 0x23678Cu;
    SET_GPR_U32(ctx, 31, 0x236794u);
    ctx->pc = 0x236790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23678Cu;
            // 0x236790: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235B50u;
    if (runtime->hasFunction(0x235B50u)) {
        auto targetFn = runtime->lookupFunction(0x235B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236794u; }
        if (ctx->pc != 0x236794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PushOk__10CMenuInterFv_0x235b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236794u; }
        if (ctx->pc != 0x236794u) { return; }
    }
    ctx->pc = 0x236794u;
label_236794:
    // 0x236794: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x236794u;
    {
        const bool branch_taken_0x236794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236794) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x23679Cu;
label_23679c:
    // 0x23679c: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2367a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2367a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2367a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2367a8: 0xa4640010  sh          $a0, 0x10($v1)
    ctx->pc = 0x2367a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x2367ac: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x2367acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2367b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2367b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2367b4: 0xa7829524  sh          $v0, -0x6ADC($gp)
    ctx->pc = 0x2367b4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939940), (uint16_t)GPR_U32(ctx, 2));
    // 0x2367b8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2367bc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2367bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2367c0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2367c4: 0xac450070  sw          $a1, 0x70($v0)
    ctx->pc = 0x2367c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 5));
    // 0x2367c8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2367C8u;
    SET_GPR_U32(ctx, 31, 0x2367D0u);
    ctx->pc = 0x2367CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2367C8u;
            // 0x2367cc: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367D0u; }
        if (ctx->pc != 0x2367D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367D0u; }
        if (ctx->pc != 0x2367D0u) { return; }
    }
    ctx->pc = 0x2367D0u;
label_2367d0:
    // 0x2367d0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2367d4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x2367d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2367d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2367D8u;
    {
        const bool branch_taken_0x2367d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2367D8u;
            // 0x2367dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d8) {
            ctx->pc = 0x2367E4u;
            goto label_2367e4;
        }
    }
    ctx->pc = 0x2367E0u;
    // 0x2367e0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2367e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2367e4:
    // 0x2367e4: 0xc08d220  jal         func_234880
    ctx->pc = 0x2367E4u;
    SET_GPR_U32(ctx, 31, 0x2367ECu);
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367ECu; }
        if (ctx->pc != 0x2367ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367ECu; }
        if (ctx->pc != 0x2367ECu) { return; }
    }
    ctx->pc = 0x2367ECu;
label_2367ec:
    // 0x2367ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2367ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2367f0: 0xc08900c  jal         func_224030
    ctx->pc = 0x2367F0u;
    SET_GPR_U32(ctx, 31, 0x2367F8u);
    ctx->pc = 0x2367F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2367F0u;
            // 0x2367f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367F8u; }
        if (ctx->pc != 0x2367F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367F8u; }
        if (ctx->pc != 0x2367F8u) { return; }
    }
    ctx->pc = 0x2367F8u;
label_2367f8:
    // 0x2367f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2367fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2367fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236800: 0x8c24cb30  lw          $a0, -0x34D0($at)
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
    // 0x236804: 0xc08a240  jal         func_228900
    ctx->pc = 0x236804u;
    SET_GPR_U32(ctx, 31, 0x23680Cu);
    ctx->pc = 0x236808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236804u;
            // 0x236808: 0x24a5a850  addiu       $a1, $a1, -0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23680Cu; }
        if (ctx->pc != 0x23680Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23680Cu; }
        if (ctx->pc != 0x23680Cu) { return; }
    }
    ctx->pc = 0x23680Cu;
label_23680c:
    // 0x23680c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23680Cu;
    SET_GPR_U32(ctx, 31, 0x236814u);
    ctx->pc = 0x236810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23680Cu;
            // 0x236810: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236814u; }
        if (ctx->pc != 0x236814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236814u; }
        if (ctx->pc != 0x236814u) { return; }
    }
    ctx->pc = 0x236814u;
label_236814:
    // 0x236814: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x236814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_236818:
    // 0x236818: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x236818u;
    SET_GPR_U32(ctx, 31, 0x236820u);
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236820u; }
        if (ctx->pc != 0x236820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236820u; }
        if (ctx->pc != 0x236820u) { return; }
    }
    ctx->pc = 0x236820u;
label_236820:
    // 0x236820: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x236820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_236824:
    // 0x236824: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x236824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236828: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x236828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23682c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23682cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x236830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236834: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x236834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23683c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23683cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236844: 0x3e00008  jr          $ra
    ctx->pc = 0x236844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236844u;
            // 0x236848: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23684Cu;
}
