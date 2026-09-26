#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveDataConvertLoop__Fv
// Address: 0x321070 - 0x321be4
void SaveDataConvertLoop__Fv_0x321070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveDataConvertLoop__Fv_0x321070");
#endif

    switch (ctx->pc) {
        case 0x3210d4u: goto label_3210d4;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210fcu: goto label_3210fc;
        case 0x321158u: goto label_321158;
        case 0x321168u: goto label_321168;
        case 0x321184u: goto label_321184;
        case 0x321194u: goto label_321194;
        case 0x3211a0u: goto label_3211a0;
        case 0x3211c0u: goto label_3211c0;
        case 0x3211dcu: goto label_3211dc;
        case 0x3211ecu: goto label_3211ec;
        case 0x321200u: goto label_321200;
        case 0x321210u: goto label_321210;
        case 0x321238u: goto label_321238;
        case 0x321258u: goto label_321258;
        case 0x321270u: goto label_321270;
        case 0x321280u: goto label_321280;
        case 0x321288u: goto label_321288;
        case 0x321298u: goto label_321298;
        case 0x3212a8u: goto label_3212a8;
        case 0x3212dcu: goto label_3212dc;
        case 0x3212e8u: goto label_3212e8;
        case 0x321304u: goto label_321304;
        case 0x321360u: goto label_321360;
        case 0x321370u: goto label_321370;
        case 0x32138cu: goto label_32138c;
        case 0x32139cu: goto label_32139c;
        case 0x3213a8u: goto label_3213a8;
        case 0x3213c4u: goto label_3213c4;
        case 0x321420u: goto label_321420;
        case 0x321450u: goto label_321450;
        case 0x321480u: goto label_321480;
        case 0x3214b4u: goto label_3214b4;
        case 0x3214c0u: goto label_3214c0;
        case 0x3214d0u: goto label_3214d0;
        case 0x3214ecu: goto label_3214ec;
        case 0x321500u: goto label_321500;
        case 0x321510u: goto label_321510;
        case 0x321588u: goto label_321588;
        case 0x3215a0u: goto label_3215a0;
        case 0x3215a8u: goto label_3215a8;
        case 0x3215e4u: goto label_3215e4;
        case 0x321610u: goto label_321610;
        case 0x321634u: goto label_321634;
        case 0x32165cu: goto label_32165c;
        case 0x321684u: goto label_321684;
        case 0x3216b0u: goto label_3216b0;
        case 0x3216f8u: goto label_3216f8;
        case 0x321714u: goto label_321714;
        case 0x321764u: goto label_321764;
        case 0x321778u: goto label_321778;
        case 0x3217b4u: goto label_3217b4;
        case 0x3217dcu: goto label_3217dc;
        case 0x3217ecu: goto label_3217ec;
        case 0x321808u: goto label_321808;
        case 0x321824u: goto label_321824;
        case 0x321834u: goto label_321834;
        case 0x321850u: goto label_321850;
        case 0x321864u: goto label_321864;
        case 0x321874u: goto label_321874;
        case 0x32188cu: goto label_32188c;
        case 0x32189cu: goto label_32189c;
        case 0x3218b0u: goto label_3218b0;
        case 0x3218c0u: goto label_3218c0;
        case 0x3218ecu: goto label_3218ec;
        case 0x321900u: goto label_321900;
        case 0x321910u: goto label_321910;
        case 0x321928u: goto label_321928;
        case 0x321948u: goto label_321948;
        case 0x32195cu: goto label_32195c;
        case 0x32196cu: goto label_32196c;
        case 0x32197cu: goto label_32197c;
        case 0x321984u: goto label_321984;
        case 0x321994u: goto label_321994;
        case 0x3219a4u: goto label_3219a4;
        case 0x3219b4u: goto label_3219b4;
        case 0x3219c8u: goto label_3219c8;
        case 0x3219d8u: goto label_3219d8;
        case 0x3219f4u: goto label_3219f4;
        case 0x321a10u: goto label_321a10;
        case 0x321a20u: goto label_321a20;
        case 0x321a38u: goto label_321a38;
        case 0x321a40u: goto label_321a40;
        case 0x321a50u: goto label_321a50;
        case 0x321a6cu: goto label_321a6c;
        case 0x321a9cu: goto label_321a9c;
        case 0x321ab8u: goto label_321ab8;
        case 0x321ac8u: goto label_321ac8;
        case 0x321adcu: goto label_321adc;
        case 0x321aecu: goto label_321aec;
        case 0x321b04u: goto label_321b04;
        case 0x321b14u: goto label_321b14;
        case 0x321b28u: goto label_321b28;
        case 0x321b38u: goto label_321b38;
        case 0x321b60u: goto label_321b60;
        case 0x321b70u: goto label_321b70;
        default: break;
    }

    ctx->pc = 0x321070u;

    // 0x321070: 0x27bdc210  addiu       $sp, $sp, -0x3DF0
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294951440));
    // 0x321074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x321078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32107c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x321080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x321080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x321084: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x321084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x321088: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x321088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32108c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x321090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x321090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x321094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32109c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3210a0: 0x8f83a400  lw          $v1, -0x5C00($gp)
    ctx->pc = 0x3210a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943744)));
    // 0x3210a4: 0x106200db  beq         $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x3210A4u;
    {
        const bool branch_taken_0x3210a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3210A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210A4u;
            // 0x3210a8: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210a4) {
            ctx->pc = 0x321414u;
            goto label_321414;
        }
    }
    ctx->pc = 0x3210ACu;
    // 0x3210ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3210acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3210b0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3210B0u;
    {
        const bool branch_taken_0x3210b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3210B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210B0u;
            // 0x3210b4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210b0) {
            ctx->pc = 0x32114Cu;
            goto label_32114c;
        }
    }
    ctx->pc = 0x3210B8u;
    // 0x3210b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3210B8u;
    {
        const bool branch_taken_0x3210b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210B8u;
            // 0x3210bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210b8) {
            ctx->pc = 0x3210C8u;
            goto label_3210c8;
        }
    }
    ctx->pc = 0x3210C0u;
    // 0x3210c0: 0x100002bc  b           . + 4 + (0x2BC << 2)
    ctx->pc = 0x3210C0u;
    {
        const bool branch_taken_0x3210c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210C0u;
            // 0x3210c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210c0) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x3210C8u;
label_3210c8:
    // 0x3210c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3210c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3210cc: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3210CCu;
    SET_GPR_U32(ctx, 31, 0x3210D4u);
    ctx->pc = 0x3210D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210CCu;
            // 0x3210d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210D4u; }
        if (ctx->pc != 0x3210D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210D4u; }
        if (ctx->pc != 0x3210D4u) { return; }
    }
    ctx->pc = 0x3210D4u;
label_3210d4:
    // 0x3210d4: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3210d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3210d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3210d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3210dc: 0x27a63dc8  addiu       $a2, $sp, 0x3DC8
    ctx->pc = 0x3210dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15816));
    // 0x3210e0: 0x27a73dcc  addiu       $a3, $sp, 0x3DCC
    ctx->pc = 0x3210e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 15820));
    // 0x3210e4: 0xc048bc8  jal         func_122F20
    ctx->pc = 0x3210E4u;
    SET_GPR_U32(ctx, 31, 0x3210ECu);
    ctx->pc = 0x3210E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210E4u;
            // 0x3210e8: 0x27a83dd0  addiu       $t0, $sp, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 15824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F20u;
    if (runtime->hasFunction(0x122F20u)) {
        auto targetFn = runtime->lookupFunction(0x122F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210ECu; }
        if (ctx->pc != 0x3210ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x122f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210ECu; }
        if (ctx->pc != 0x3210ECu) { return; }
    }
    ctx->pc = 0x3210ECu;
label_3210ec:
    // 0x3210ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3210ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3210f0: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x3210f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x3210f4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3210F4u;
    SET_GPR_U32(ctx, 31, 0x3210FCu);
    ctx->pc = 0x3210F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210F4u;
            // 0x3210f8: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210FCu; }
        if (ctx->pc != 0x3210FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210FCu; }
        if (ctx->pc != 0x3210FCu) { return; }
    }
    ctx->pc = 0x3210FCu;
label_3210fc:
    // 0x3210fc: 0x8fa33dc8  lw          $v1, 0x3DC8($sp)
    ctx->pc = 0x3210fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15816)));
    // 0x321100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321104: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x321104u;
    {
        const bool branch_taken_0x321104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x321108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321104u;
            // 0x321108: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321104) {
            ctx->pc = 0x321120u;
            goto label_321120;
        }
    }
    ctx->pc = 0x32110Cu;
    // 0x32110c: 0x8fa33dd0  lw          $v1, 0x3DD0($sp)
    ctx->pc = 0x32110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15824)));
    // 0x321110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321114: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x321114u;
    {
        const bool branch_taken_0x321114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321114) {
            ctx->pc = 0x32112Cu;
            goto label_32112c;
        }
    }
    ctx->pc = 0x32111Cu;
    // 0x32111c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x32111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_321120:
    // 0x321120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321124: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x321124u;
    {
        const bool branch_taken_0x321124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321124u;
            // 0x321128: 0xaf83a408  sw          $v1, -0x5BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321124) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x32112Cu;
label_32112c:
    // 0x32112c: 0x8fa33dd8  lw          $v1, 0x3DD8($sp)
    ctx->pc = 0x32112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15832)));
    // 0x321130: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x321130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x321134: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x321134u;
    {
        const bool branch_taken_0x321134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x321138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321134u;
            // 0x321138: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321134) {
            ctx->pc = 0x321144u;
            goto label_321144;
        }
    }
    ctx->pc = 0x32113Cu;
    // 0x32113c: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x32113Cu;
    {
        const bool branch_taken_0x32113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32113Cu;
            // 0x321140: 0xaf83a408  sw          $v1, -0x5BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32113c) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x321144u;
label_321144:
    // 0x321144: 0x1000029a  b           . + 4 + (0x29A << 2)
    ctx->pc = 0x321144u;
    {
        const bool branch_taken_0x321144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321144u;
            // 0x321148: 0xaf82a400  sw          $v0, -0x5C00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321144) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x32114Cu;
label_32114c:
    // 0x32114c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321150: 0xc049c86  jal         func_127218
    ctx->pc = 0x321150u;
    SET_GPR_U32(ctx, 31, 0x321158u);
    ctx->pc = 0x321154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321150u;
            // 0x321154: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321158u; }
        if (ctx->pc != 0x321158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321158u; }
        if (ctx->pc != 0x321158u) { return; }
    }
    ctx->pc = 0x321158u;
label_321158:
    // 0x321158: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x321158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x32115c: 0x27a418c0  addiu       $a0, $sp, 0x18C0
    ctx->pc = 0x32115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321160: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x321160u;
    SET_GPR_U32(ctx, 31, 0x321168u);
    ctx->pc = 0x321164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321160u;
            // 0x321164: 0x24a53210  addiu       $a1, $a1, 0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321168u; }
        if (ctx->pc != 0x321168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321168u; }
        if (ctx->pc != 0x321168u) { return; }
    }
    ctx->pc = 0x321168u;
label_321168:
    // 0x321168: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x32116c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321170: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321178: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x321178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32117c: 0xc048c46  jal         func_123118
    ctx->pc = 0x32117Cu;
    SET_GPR_U32(ctx, 31, 0x321184u);
    ctx->pc = 0x321180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32117Cu;
            // 0x321180: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321184u; }
        if (ctx->pc != 0x321184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321184u; }
        if (ctx->pc != 0x321184u) { return; }
    }
    ctx->pc = 0x321184u;
label_321184:
    // 0x321184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321188: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x321188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x32118c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x32118Cu;
    SET_GPR_U32(ctx, 31, 0x321194u);
    ctx->pc = 0x321190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32118Cu;
            // 0x321190: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321194u; }
        if (ctx->pc != 0x321194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321194u; }
        if (ctx->pc != 0x321194u) { return; }
    }
    ctx->pc = 0x321194u;
label_321194:
    // 0x321194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x321194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321198: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x321198u;
    {
        const bool branch_taken_0x321198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32119Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321198u;
            // 0x32119c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321198) {
            ctx->pc = 0x321340u;
            goto label_321340;
        }
    }
    ctx->pc = 0x3211A0u;
label_3211a0:
    // 0x3211a0: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x3211a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x3211a4: 0x245200b0  addiu       $s2, $v0, 0xB0
    ctx->pc = 0x3211a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3211a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3211a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3211ac: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3211acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3211b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3211b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3211b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3211b8: 0xc049c18  jal         func_127060
    ctx->pc = 0x3211B8u;
    SET_GPR_U32(ctx, 31, 0x3211C0u);
    ctx->pc = 0x3211BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211B8u;
            // 0x3211bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211C0u; }
        if (ctx->pc != 0x3211C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211C0u; }
        if (ctx->pc != 0x3211C0u) { return; }
    }
    ctx->pc = 0x3211C0u;
label_3211c0:
    // 0x3211c0: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x3211c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3211c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3211c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3211c8: 0x27a41940  addiu       $a0, $sp, 0x1940
    ctx->pc = 0x3211c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6464));
    // 0x3211cc: 0x24a53220  addiu       $a1, $a1, 0x3220
    ctx->pc = 0x3211ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12832));
    // 0x3211d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3211d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211d4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x3211D4u;
    SET_GPR_U32(ctx, 31, 0x3211DCu);
    ctx->pc = 0x3211D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211D4u;
            // 0x3211d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211DCu; }
        if (ctx->pc != 0x3211DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211DCu; }
        if (ctx->pc != 0x3211DCu) { return; }
    }
    ctx->pc = 0x3211DCu;
label_3211dc:
    // 0x3211dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3211dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3211e0: 0x27a51940  addiu       $a1, $sp, 0x1940
    ctx->pc = 0x3211e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6464));
    // 0x3211e4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3211E4u;
    SET_GPR_U32(ctx, 31, 0x3211ECu);
    ctx->pc = 0x3211E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211E4u;
            // 0x3211e8: 0x24843230  addiu       $a0, $a0, 0x3230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211ECu; }
        if (ctx->pc != 0x3211ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211ECu; }
        if (ctx->pc != 0x3211ECu) { return; }
    }
    ctx->pc = 0x3211ECu;
label_3211ec:
    // 0x3211ec: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3211ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3211f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3211f4: 0x27a61940  addiu       $a2, $sp, 0x1940
    ctx->pc = 0x3211f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6464));
    // 0x3211f8: 0xc0489d2  jal         func_122748
    ctx->pc = 0x3211F8u;
    SET_GPR_U32(ctx, 31, 0x321200u);
    ctx->pc = 0x3211FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211F8u;
            // 0x3211fc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321200u; }
        if (ctx->pc != 0x321200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321200u; }
        if (ctx->pc != 0x321200u) { return; }
    }
    ctx->pc = 0x321200u;
label_321200:
    // 0x321200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321208: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321208u;
    SET_GPR_U32(ctx, 31, 0x321210u);
    ctx->pc = 0x32120Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321208u;
            // 0x32120c: 0x27a63ddc  addiu       $a2, $sp, 0x3DDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15836));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321210u; }
        if (ctx->pc != 0x321210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321210u; }
        if (ctx->pc != 0x321210u) { return; }
    }
    ctx->pc = 0x321210u;
label_321210:
    // 0x321210: 0x8fa23ddc  lw          $v0, 0x3DDC($sp)
    ctx->pc = 0x321210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15836)));
    // 0x321214: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x321214u;
    {
        const bool branch_taken_0x321214 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x321214) {
            ctx->pc = 0x321240u;
            goto label_321240;
        }
    }
    ctx->pc = 0x32121Cu;
    // 0x32121c: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x32121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x321220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321224: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x321228: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x321228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32122c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x32122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x321230: 0xc049c86  jal         func_127218
    ctx->pc = 0x321230u;
    SET_GPR_U32(ctx, 31, 0x321238u);
    ctx->pc = 0x321234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321230u;
            // 0x321234: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321238u; }
        if (ctx->pc != 0x321238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321238u; }
        if (ctx->pc != 0x321238u) { return; }
    }
    ctx->pc = 0x321238u;
label_321238:
    // 0x321238: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x321238u;
    {
        const bool branch_taken_0x321238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321238) {
            ctx->pc = 0x321334u;
            goto label_321334;
        }
    }
    ctx->pc = 0x321240u;
label_321240:
    // 0x321240: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x321240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x321244: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x321244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x321248: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x321248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32124c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x32124cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321250: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x321250u;
    SET_GPR_U32(ctx, 31, 0x321258u);
    ctx->pc = 0x321254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321250u;
            // 0x321254: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321258u; }
        if (ctx->pc != 0x321258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321258u; }
        if (ctx->pc != 0x321258u) { return; }
    }
    ctx->pc = 0x321258u;
label_321258:
    // 0x321258: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x321258u;
    {
        const bool branch_taken_0x321258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321258) {
            ctx->pc = 0x3212F0u;
            goto label_3212f0;
        }
    }
    ctx->pc = 0x321260u;
    // 0x321260: 0x8f85a414  lw          $a1, -0x5BEC($gp)
    ctx->pc = 0x321260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943764)));
    // 0x321264: 0x8fa43ddc  lw          $a0, 0x3DDC($sp)
    ctx->pc = 0x321264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15836)));
    // 0x321268: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x321268u;
    SET_GPR_U32(ctx, 31, 0x321270u);
    ctx->pc = 0x32126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321268u;
            // 0x32126c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321270u; }
        if (ctx->pc != 0x321270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321270u; }
        if (ctx->pc != 0x321270u) { return; }
    }
    ctx->pc = 0x321270u;
label_321270:
    // 0x321270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321278: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321278u;
    SET_GPR_U32(ctx, 31, 0x321280u);
    ctx->pc = 0x32127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321278u;
            // 0x32127c: 0x27a63de0  addiu       $a2, $sp, 0x3DE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321280u; }
        if (ctx->pc != 0x321280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321280u; }
        if (ctx->pc != 0x321280u) { return; }
    }
    ctx->pc = 0x321280u;
label_321280:
    // 0x321280: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x321280u;
    SET_GPR_U32(ctx, 31, 0x321288u);
    ctx->pc = 0x321284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321280u;
            // 0x321284: 0x8fa43ddc  lw          $a0, 0x3DDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321288u; }
        if (ctx->pc != 0x321288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321288u; }
        if (ctx->pc != 0x321288u) { return; }
    }
    ctx->pc = 0x321288u;
label_321288:
    // 0x321288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32128c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321290: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321290u;
    SET_GPR_U32(ctx, 31, 0x321298u);
    ctx->pc = 0x321294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321290u;
            // 0x321294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321298u; }
        if (ctx->pc != 0x321298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321298u; }
        if (ctx->pc != 0x321298u) { return; }
    }
    ctx->pc = 0x321298u;
label_321298:
    // 0x321298: 0x8f84a414  lw          $a0, -0x5BEC($gp)
    ctx->pc = 0x321298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943764)));
    // 0x32129c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x32129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3212a0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x3212A0u;
    SET_GPR_U32(ctx, 31, 0x3212A8u);
    ctx->pc = 0x3212A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212A0u;
            // 0x3212a4: 0x24a53258  addiu       $a1, $a1, 0x3258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212A8u; }
        if (ctx->pc != 0x3212A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212A8u; }
        if (ctx->pc != 0x3212A8u) { return; }
    }
    ctx->pc = 0x3212A8u;
label_3212a8:
    // 0x3212a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3212A8u;
    {
        const bool branch_taken_0x3212a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212a8) {
            ctx->pc = 0x3212B4u;
            goto label_3212b4;
        }
    }
    ctx->pc = 0x3212B0u;
    // 0x3212b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3212b4:
    // 0x3212b4: 0x0  nop
    ctx->pc = 0x3212b4u;
    // NOP
    // 0x3212b8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3212B8u;
    {
        const bool branch_taken_0x3212b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212b8) {
            ctx->pc = 0x3212F0u;
            goto label_3212f0;
        }
    }
    ctx->pc = 0x3212C0u;
    // 0x3212c0: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x3212c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x3212c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3212c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212c8: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3212c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3212cc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3212ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3212d0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3212d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3212d4: 0xc049c86  jal         func_127218
    ctx->pc = 0x3212D4u;
    SET_GPR_U32(ctx, 31, 0x3212DCu);
    ctx->pc = 0x3212D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212D4u;
            // 0x3212d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212DCu; }
        if (ctx->pc != 0x3212DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212DCu; }
        if (ctx->pc != 0x3212DCu) { return; }
    }
    ctx->pc = 0x3212DCu;
label_3212dc:
    // 0x3212dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3212dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3212e0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3212E0u;
    SET_GPR_U32(ctx, 31, 0x3212E8u);
    ctx->pc = 0x3212E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212E0u;
            // 0x3212e4: 0x24843260  addiu       $a0, $a0, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212E8u; }
        if (ctx->pc != 0x3212E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212E8u; }
        if (ctx->pc != 0x3212E8u) { return; }
    }
    ctx->pc = 0x3212E8u;
label_3212e8:
    // 0x3212e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3212E8u;
    {
        const bool branch_taken_0x3212e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212e8) {
            ctx->pc = 0x321334u;
            goto label_321334;
        }
    }
    ctx->pc = 0x3212F0u;
label_3212f0:
    // 0x3212f0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3212f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3212f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212f8: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x3212f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x3212fc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x3212FCu;
    SET_GPR_U32(ctx, 31, 0x321304u);
    ctx->pc = 0x321300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212FCu;
            // 0x321300: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321304u; }
        if (ctx->pc != 0x321304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321304u; }
        if (ctx->pc != 0x321304u) { return; }
    }
    ctx->pc = 0x321304u;
label_321304:
    // 0x321304: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x321304u;
    {
        const bool branch_taken_0x321304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321304) {
            ctx->pc = 0x321328u;
            goto label_321328;
        }
    }
    ctx->pc = 0x32130Cu;
    // 0x32130c: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x32130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x321310: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x321310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x321314: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x321314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x321318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32131c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32131cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x321320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321324: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x321324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_321328:
    // 0x321328: 0x8f82a3fc  lw          $v0, -0x5C04($gp)
    ctx->pc = 0x321328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x32132c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321330: 0xaf82a3fc  sw          $v0, -0x5C04($gp)
    ctx->pc = 0x321330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943740), GPR_U32(ctx, 2));
label_321334:
    // 0x321334: 0x0  nop
    ctx->pc = 0x321334u;
    // NOP
    // 0x321338: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x321338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x32133c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32133cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_321340:
    // 0x321340: 0x8fa23dd8  lw          $v0, 0x3DD8($sp)
    ctx->pc = 0x321340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15832)));
    // 0x321344: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x321344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x321348: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x321348u;
    {
        const bool branch_taken_0x321348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321348u;
            // 0x32134c: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321348) {
            ctx->pc = 0x3211A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3211a0;
        }
    }
    ctx->pc = 0x321350u;
    // 0x321350: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x321350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x321354: 0x27a418c0  addiu       $a0, $sp, 0x18C0
    ctx->pc = 0x321354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321358: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x321358u;
    SET_GPR_U32(ctx, 31, 0x321360u);
    ctx->pc = 0x32135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321358u;
            // 0x32135c: 0x24a53278  addiu       $a1, $a1, 0x3278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321360u; }
        if (ctx->pc != 0x321360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321360u; }
        if (ctx->pc != 0x321360u) { return; }
    }
    ctx->pc = 0x321360u;
label_321360:
    // 0x321360: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x321360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x321364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321368: 0xc049c86  jal         func_127218
    ctx->pc = 0x321368u;
    SET_GPR_U32(ctx, 31, 0x321370u);
    ctx->pc = 0x32136Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321368u;
            // 0x32136c: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321370u; }
        if (ctx->pc != 0x321370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321370u; }
        if (ctx->pc != 0x321370u) { return; }
    }
    ctx->pc = 0x321370u;
label_321370:
    // 0x321370: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321378: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x32137c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32137cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321380: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x321380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x321384: 0xc048c46  jal         func_123118
    ctx->pc = 0x321384u;
    SET_GPR_U32(ctx, 31, 0x32138Cu);
    ctx->pc = 0x321388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321384u;
            // 0x321388: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32138Cu; }
        if (ctx->pc != 0x32138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32138Cu; }
        if (ctx->pc != 0x32138Cu) { return; }
    }
    ctx->pc = 0x32138Cu;
label_32138c:
    // 0x32138c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321390: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x321390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x321394: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321394u;
    SET_GPR_U32(ctx, 31, 0x32139Cu);
    ctx->pc = 0x321398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321394u;
            // 0x321398: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32139Cu; }
        if (ctx->pc != 0x32139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32139Cu; }
        if (ctx->pc != 0x32139Cu) { return; }
    }
    ctx->pc = 0x32139Cu;
label_32139c:
    // 0x32139c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32139cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3213A0u;
    {
        const bool branch_taken_0x3213a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3213A0u;
            // 0x3213a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213a0) {
            ctx->pc = 0x3213D8u;
            goto label_3213d8;
        }
    }
    ctx->pc = 0x3213A8u;
label_3213a8:
    // 0x3213a8: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x3213a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x3213ac: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x3213acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3213b0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3213b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3213b4: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3213b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3213b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3213bc: 0xc049c18  jal         func_127060
    ctx->pc = 0x3213BCu;
    SET_GPR_U32(ctx, 31, 0x3213C4u);
    ctx->pc = 0x3213C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213BCu;
            // 0x3213c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213C4u; }
        if (ctx->pc != 0x3213C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213C4u; }
        if (ctx->pc != 0x3213C4u) { return; }
    }
    ctx->pc = 0x3213C4u;
label_3213c4:
    // 0x3213c4: 0x8f82a3fc  lw          $v0, -0x5C04($gp)
    ctx->pc = 0x3213c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x3213c8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3213c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3213cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3213ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3213d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3213d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3213d4: 0xaf82a3fc  sw          $v0, -0x5C04($gp)
    ctx->pc = 0x3213d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943740), GPR_U32(ctx, 2));
label_3213d8:
    // 0x3213d8: 0x8fa23dd8  lw          $v0, 0x3DD8($sp)
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15832)));
    // 0x3213dc: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3213dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3213e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3213E0u;
    {
        const bool branch_taken_0x3213e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3213E0u;
            // 0x3213e4: 0x2a020040  slti        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213e0) {
            ctx->pc = 0x3213F0u;
            goto label_3213f0;
        }
    }
    ctx->pc = 0x3213E8u;
    // 0x3213e8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3213E8u;
    {
        const bool branch_taken_0x3213e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3213ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3213E8u;
            // 0x3213ec: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213e8) {
            ctx->pc = 0x3213A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3213a8;
        }
    }
    ctx->pc = 0x3213F0u;
label_3213f0:
    // 0x3213f0: 0x8f82a3fc  lw          $v0, -0x5C04($gp)
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x3213f4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3213F4u;
    {
        const bool branch_taken_0x3213f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3213F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3213F4u;
            // 0x3213f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213f4) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3213FCu;
    // 0x3213fc: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x3213fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x321400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321404: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x321404u;
    {
        const bool branch_taken_0x321404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321404u;
            // 0x321408: 0xaf83a408  sw          $v1, -0x5BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321404) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x32140Cu;
label_32140c:
    // 0x32140c: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x32140Cu;
    {
        const bool branch_taken_0x32140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32140Cu;
            // 0x321410: 0xaf82a400  sw          $v0, -0x5C00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32140c) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321414u;
label_321414:
    // 0x321414: 0x27a519c0  addiu       $a1, $sp, 0x19C0
    ctx->pc = 0x321414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6592));
    // 0x321418: 0x24c6eb00  addiu       $a2, $a2, -0x1500
    ctx->pc = 0x321418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961920));
    // 0x32141c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321420:
    // 0x321420: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x321420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321424: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x321424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x321428: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x321428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32142c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32142cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x321430: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x321430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x321434: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x321434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x321438: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x321438u;
    {
        const bool branch_taken_0x321438 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x32143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321438u;
            // 0x32143c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321438) {
            ctx->pc = 0x321420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321420;
        }
    }
    ctx->pc = 0x321440u;
    // 0x321440: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x321444: 0x27a51a40  addiu       $a1, $sp, 0x1A40
    ctx->pc = 0x321444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6720));
    // 0x321448: 0x24c6eb80  addiu       $a2, $a2, -0x1480
    ctx->pc = 0x321448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962048));
    // 0x32144c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321450:
    // 0x321450: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x321450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321454: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x321454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x321458: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x321458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32145c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32145cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x321460: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x321464: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x321464u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x321468: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x321468u;
    {
        const bool branch_taken_0x321468 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x32146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321468u;
            // 0x32146c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321468) {
            ctx->pc = 0x321450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321450;
        }
    }
    ctx->pc = 0x321470u;
    // 0x321470: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x321474: 0x27a51ac0  addiu       $a1, $sp, 0x1AC0
    ctx->pc = 0x321474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6848));
    // 0x321478: 0x24c6ec00  addiu       $a2, $a2, -0x1400
    ctx->pc = 0x321478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962176));
    // 0x32147c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321480:
    // 0x321480: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x321480u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321484: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x321488: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x321488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32148c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32148cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x321490: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x321494: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x321494u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x321498: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x321498u;
    {
        const bool branch_taken_0x321498 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x32149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321498u;
            // 0x32149c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321498) {
            ctx->pc = 0x321480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321480;
        }
    }
    ctx->pc = 0x3214A0u;
    // 0x3214a0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x3214a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x3214a4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3214a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3214a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214ac: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x3214ACu;
    {
        const bool branch_taken_0x3214ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3214B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3214ACu;
            // 0x3214b0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214ac) {
            ctx->pc = 0x321B88u;
            goto label_321b88;
        }
    }
    ctx->pc = 0x3214B4u;
label_3214b4:
    // 0x3214b4: 0x27a418c0  addiu       $a0, $sp, 0x18C0
    ctx->pc = 0x3214b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x3214b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x3214B8u;
    SET_GPR_U32(ctx, 31, 0x3214C0u);
    ctx->pc = 0x3214BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3214B8u;
            // 0x3214bc: 0x24a53288  addiu       $a1, $a1, 0x3288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214C0u; }
        if (ctx->pc != 0x3214C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214C0u; }
        if (ctx->pc != 0x3214C0u) { return; }
    }
    ctx->pc = 0x3214C0u;
label_3214c0:
    // 0x3214c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3214c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3214c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3214c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214c8: 0xc049c86  jal         func_127218
    ctx->pc = 0x3214C8u;
    SET_GPR_U32(ctx, 31, 0x3214D0u);
    ctx->pc = 0x3214CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3214C8u;
            // 0x3214cc: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214D0u; }
        if (ctx->pc != 0x3214D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214D0u; }
        if (ctx->pc != 0x3214D0u) { return; }
    }
    ctx->pc = 0x3214D0u;
label_3214d0:
    // 0x3214d0: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3214d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3214d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3214d8: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x3214d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x3214dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3214dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214e0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3214e4: 0xc048c46  jal         func_123118
    ctx->pc = 0x3214E4u;
    SET_GPR_U32(ctx, 31, 0x3214ECu);
    ctx->pc = 0x3214E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3214E4u;
            // 0x3214e8: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214ECu; }
        if (ctx->pc != 0x3214ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3214ECu; }
        if (ctx->pc != 0x3214ECu) { return; }
    }
    ctx->pc = 0x3214ECu;
label_3214ec:
    // 0x3214ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3214ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214f0: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x3214f4: 0x27a63de4  addiu       $a2, $sp, 0x3DE4
    ctx->pc = 0x3214f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15844));
    // 0x3214f8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3214F8u;
    SET_GPR_U32(ctx, 31, 0x321500u);
    ctx->pc = 0x3214FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3214F8u;
            // 0x3214fc: 0xafa03de4  sw          $zero, 0x3DE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 15844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321500u; }
        if (ctx->pc != 0x321500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321500u; }
        if (ctx->pc != 0x321500u) { return; }
    }
    ctx->pc = 0x321500u;
label_321500:
    // 0x321500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32150c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321510:
    // 0x321510: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x321514: 0x24473b40  addiu       $a3, $v0, 0x3B40
    ctx->pc = 0x321514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15168));
    // 0x321518: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x321518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x32151c: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x32151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x321520: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x321520u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x321524: 0x24481b40  addiu       $t0, $v0, 0x1B40
    ctx->pc = 0x321524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x321528: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x321528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x32152c: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x32152cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x321530: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x321530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x321534: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x321534u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x321538: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x321538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x32153c: 0xa1000080  sb          $zero, 0x80($t0)
    ctx->pc = 0x32153cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x321540: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x321540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x321544: 0xa1000100  sb          $zero, 0x100($t0)
    ctx->pc = 0x321544u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x321548: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x321548u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x32154c: 0xa1000180  sb          $zero, 0x180($t0)
    ctx->pc = 0x32154cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x321550: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x321550u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x321554: 0xa1000200  sb          $zero, 0x200($t0)
    ctx->pc = 0x321554u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 512), (uint8_t)GPR_U32(ctx, 0));
    // 0x321558: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x321558u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x32155c: 0xa1000280  sb          $zero, 0x280($t0)
    ctx->pc = 0x32155cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x321560: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x321560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x321564: 0xa1000300  sb          $zero, 0x300($t0)
    ctx->pc = 0x321564u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x321568: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x321568u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x32156c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x32156Cu;
    {
        const bool branch_taken_0x32156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32156Cu;
            // 0x321570: 0xa1000380  sb          $zero, 0x380($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 896), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32156c) {
            ctx->pc = 0x321510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321510;
        }
    }
    ctx->pc = 0x321574u;
    // 0x321574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x321574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x321578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32157c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32157cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321580: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x321580u;
    {
        const bool branch_taken_0x321580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321580u;
            // 0x321584: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321580) {
            ctx->pc = 0x3215F4u;
            goto label_3215f4;
        }
    }
    ctx->pc = 0x321588u;
label_321588:
    // 0x321588: 0x3dd1021  addu        $v0, $fp, $sp
    ctx->pc = 0x321588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x32158c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x32158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x321590: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x321590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x321594: 0x245400b0  addiu       $s4, $v0, 0xB0
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x321598: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x321598u;
    SET_GPR_U32(ctx, 31, 0x3215A0u);
    ctx->pc = 0x32159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321598u;
            // 0x32159c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215A0u; }
        if (ctx->pc != 0x3215A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215A0u; }
        if (ctx->pc != 0x3215A0u) { return; }
    }
    ctx->pc = 0x3215A0u;
label_3215a0:
    // 0x3215a0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x3215A0u;
    SET_GPR_U32(ctx, 31, 0x3215A8u);
    ctx->pc = 0x3215A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3215A0u;
            // 0x3215a4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215A8u; }
        if (ctx->pc != 0x3215A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215A8u; }
        if (ctx->pc != 0x3215A8u) { return; }
    }
    ctx->pc = 0x3215A8u;
label_3215a8:
    // 0x3215a8: 0x92830030  lbu         $v1, 0x30($s4)
    ctx->pc = 0x3215a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3215ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3215ACu;
    {
        const bool branch_taken_0x3215ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3215ACu;
            // 0x3215b0: 0x27d1821  addu        $v1, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215ac) {
            ctx->pc = 0x3215BCu;
            goto label_3215bc;
        }
    }
    ctx->pc = 0x3215B4u;
    // 0x3215b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3215B4u;
    {
        const bool branch_taken_0x3215b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3215B4u;
            // 0x3215b8: 0xac623b40  sw          $v0, 0x3B40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215b4) {
            ctx->pc = 0x3215CCu;
            goto label_3215cc;
        }
    }
    ctx->pc = 0x3215BCu;
label_3215bc:
    // 0x3215bc: 0x0  nop
    ctx->pc = 0x3215bcu;
    // NOP
    // 0x3215c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3215c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3215c4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x3215c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x3215c8: 0xac643b40  sw          $a0, 0x3B40($v1)
    ctx->pc = 0x3215c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 4));
label_3215cc:
    // 0x3215cc: 0x0  nop
    ctx->pc = 0x3215ccu;
    // NOP
    // 0x3215d0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3215d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3215d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3215d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215d8: 0x24843298  addiu       $a0, $a0, 0x3298
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12952));
    // 0x3215dc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3215DCu;
    SET_GPR_U32(ctx, 31, 0x3215E4u);
    ctx->pc = 0x3215E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3215DCu;
            // 0x3215e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215E4u; }
        if (ctx->pc != 0x3215E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3215E4u; }
        if (ctx->pc != 0x3215E4u) { return; }
    }
    ctx->pc = 0x3215E4u;
label_3215e4:
    // 0x3215e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3215e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3215e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3215ec: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3215f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3215f4:
    // 0x3215f4: 0x0  nop
    ctx->pc = 0x3215f4u;
    // NOP
    // 0x3215f8: 0x8fa23de4  lw          $v0, 0x3DE4($sp)
    ctx->pc = 0x3215f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15844)));
    // 0x3215fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3215fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x321600: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x321600u;
    {
        const bool branch_taken_0x321600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321600u;
            // 0x321604: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321600) {
            ctx->pc = 0x321588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321588;
        }
    }
    ctx->pc = 0x321608u;
    // 0x321608: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x321608u;
    SET_GPR_U32(ctx, 31, 0x321610u);
    ctx->pc = 0x32160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321608u;
            // 0x32160c: 0x248432a8  addiu       $a0, $a0, 0x32A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321610u; }
        if (ctx->pc != 0x321610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321610u; }
        if (ctx->pc != 0x321610u) { return; }
    }
    ctx->pc = 0x321610u;
label_321610:
    // 0x321610: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x321614: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x321614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x321618: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x321618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32161c: 0x24a532b0  addiu       $a1, $a1, 0x32B0
    ctx->pc = 0x32161cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12976));
    // 0x321620: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x321620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321624: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x321624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321628: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x321628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x32162c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x32162Cu;
    SET_GPR_U32(ctx, 31, 0x321634u);
    ctx->pc = 0x321630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32162Cu;
            // 0x321630: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321634u; }
        if (ctx->pc != 0x321634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321634u; }
        if (ctx->pc != 0x321634u) { return; }
    }
    ctx->pc = 0x321634u;
label_321634:
    // 0x321634: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321634u;
    {
        const bool branch_taken_0x321634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321634) {
            ctx->pc = 0x321640u;
            goto label_321640;
        }
    }
    ctx->pc = 0x32163Cu;
    // 0x32163c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32163cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321640:
    // 0x321640: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x321644: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x321644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x321648: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x321648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32164c: 0x24a532b8  addiu       $a1, $a1, 0x32B8
    ctx->pc = 0x32164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12984));
    // 0x321650: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x321650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x321654: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x321654u;
    SET_GPR_U32(ctx, 31, 0x32165Cu);
    ctx->pc = 0x321658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321654u;
            // 0x321658: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32165Cu; }
        if (ctx->pc != 0x32165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32165Cu; }
        if (ctx->pc != 0x32165Cu) { return; }
    }
    ctx->pc = 0x32165Cu;
label_32165c:
    // 0x32165c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32165Cu;
    {
        const bool branch_taken_0x32165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32165c) {
            ctx->pc = 0x321668u;
            goto label_321668;
        }
    }
    ctx->pc = 0x321664u;
    // 0x321664: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x321664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321668:
    // 0x321668: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32166c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x32166cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x321670: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x321670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x321674: 0x24a532c8  addiu       $a1, $a1, 0x32C8
    ctx->pc = 0x321674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13000));
    // 0x321678: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x321678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x32167c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x32167Cu;
    SET_GPR_U32(ctx, 31, 0x321684u);
    ctx->pc = 0x321680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32167Cu;
            // 0x321680: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321684u; }
        if (ctx->pc != 0x321684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321684u; }
        if (ctx->pc != 0x321684u) { return; }
    }
    ctx->pc = 0x321684u;
label_321684:
    // 0x321684: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321684u;
    {
        const bool branch_taken_0x321684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321684) {
            ctx->pc = 0x321690u;
            goto label_321690;
        }
    }
    ctx->pc = 0x32168Cu;
    // 0x32168c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x32168cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321690:
    // 0x321690: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x321690u;
    {
        const bool branch_taken_0x321690 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x321690) {
            ctx->pc = 0x3216B8u;
            goto label_3216b8;
        }
    }
    ctx->pc = 0x321698u;
    // 0x321698: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32169c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x32169cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3216a0: 0x248432e0  addiu       $a0, $a0, 0x32E0
    ctx->pc = 0x3216a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13024));
    // 0x3216a4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3216a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3216a8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3216A8u;
    SET_GPR_U32(ctx, 31, 0x3216B0u);
    ctx->pc = 0x3216ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3216A8u;
            // 0x3216ac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3216B0u; }
        if (ctx->pc != 0x3216B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3216B0u; }
        if (ctx->pc != 0x3216B0u) { return; }
    }
    ctx->pc = 0x3216B0u;
label_3216b0:
    // 0x3216b0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x3216B0u;
    {
        const bool branch_taken_0x3216b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216b0) {
            ctx->pc = 0x321B70u;
            goto label_321b70;
        }
    }
    ctx->pc = 0x3216B8u;
label_3216b8:
    // 0x3216b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3216b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3216bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3216bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216c0: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3216C0u;
    {
        const bool branch_taken_0x3216c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3216C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3216C0u;
            // 0x3216c4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216c0) {
            ctx->pc = 0x3216CCu;
            goto label_3216cc;
        }
    }
    ctx->pc = 0x3216C8u;
    // 0x3216c8: 0x27b61a40  addiu       $s6, $sp, 0x1A40
    ctx->pc = 0x3216c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 6720));
label_3216cc:
    // 0x3216cc: 0x0  nop
    ctx->pc = 0x3216ccu;
    // NOP
    // 0x3216d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3216d4: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3216D4u;
    {
        const bool branch_taken_0x3216d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3216d4) {
            ctx->pc = 0x3216E0u;
            goto label_3216e0;
        }
    }
    ctx->pc = 0x3216DCu;
    // 0x3216dc: 0x27b61ac0  addiu       $s6, $sp, 0x1AC0
    ctx->pc = 0x3216dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 6848));
label_3216e0:
    // 0x3216e0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3216E0u;
    {
        const bool branch_taken_0x3216e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3216e0) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x3216E8u;
    // 0x3216e8: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3216ec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3216ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3216f0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x3216F0u;
    SET_GPR_U32(ctx, 31, 0x3216F8u);
    ctx->pc = 0x3216F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3216F0u;
            // 0x3216f4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3216F8u; }
        if (ctx->pc != 0x3216F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3216F8u; }
        if (ctx->pc != 0x3216F8u) { return; }
    }
    ctx->pc = 0x3216F8u;
label_3216f8:
    // 0x3216f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3216f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216fc: 0x280082a  slt         $at, $s4, $zero
    ctx->pc = 0x3216fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x321700: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x321700u;
    {
        const bool branch_taken_0x321700 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x321704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321700u;
            // 0x321704: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321700) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x321708u;
    // 0x321708: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x321708u;
    {
        const bool branch_taken_0x321708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321708u;
            // 0x32170c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321708) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x321710u;
    // 0x321710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321714:
    // 0x321714: 0x0  nop
    ctx->pc = 0x321714u;
    // NOP
    // 0x321718: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x32171c: 0x8c423b40  lw          $v0, 0x3B40($v0)
    ctx->pc = 0x32171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15168)));
    // 0x321720: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321720u;
    {
        const bool branch_taken_0x321720 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x321720) {
            ctx->pc = 0x321730u;
            goto label_321730;
        }
    }
    ctx->pc = 0x321728u;
    // 0x321728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x321728u;
    {
        const bool branch_taken_0x321728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321728u;
            // 0x32172c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321728) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x321730u;
label_321730:
    // 0x321730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321734: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x321734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x321738: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x321738u;
    {
        const bool branch_taken_0x321738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321738u;
            // 0x32173c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321738) {
            ctx->pc = 0x321714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321714;
        }
    }
    ctx->pc = 0x321740u;
label_321740:
    // 0x321740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321744: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321744u;
    {
        const bool branch_taken_0x321744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x321748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321744u;
            // 0x321748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321744) {
            ctx->pc = 0x321754u;
            goto label_321754;
        }
    }
    ctx->pc = 0x32174Cu;
    // 0x32174c: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32174Cu;
    {
        const bool branch_taken_0x32174c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x32174c) {
            ctx->pc = 0x3217A0u;
            goto label_3217a0;
        }
    }
    ctx->pc = 0x321754u;
label_321754:
    // 0x321754: 0x0  nop
    ctx->pc = 0x321754u;
    // NOP
    // 0x321758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x321758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32175c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32175Cu;
    {
        const bool branch_taken_0x32175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32175Cu;
            // 0x321760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32175c) {
            ctx->pc = 0x321790u;
            goto label_321790;
        }
    }
    ctx->pc = 0x321764u;
label_321764:
    // 0x321764: 0x0  nop
    ctx->pc = 0x321764u;
    // NOP
    // 0x321768: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x321768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x32176c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x321770: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x321770u;
    SET_GPR_U32(ctx, 31, 0x321778u);
    ctx->pc = 0x321774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321770u;
            // 0x321774: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321778u; }
        if (ctx->pc != 0x321778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321778u; }
        if (ctx->pc != 0x321778u) { return; }
    }
    ctx->pc = 0x321778u;
label_321778:
    // 0x321778: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321778u;
    {
        const bool branch_taken_0x321778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321778) {
            ctx->pc = 0x321784u;
            goto label_321784;
        }
    }
    ctx->pc = 0x321780u;
    // 0x321780: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x321780u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_321784:
    // 0x321784: 0x0  nop
    ctx->pc = 0x321784u;
    // NOP
    // 0x321788: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x321788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x32178c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32178cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_321790:
    // 0x321790: 0x8fa23de4  lw          $v0, 0x3DE4($sp)
    ctx->pc = 0x321790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15844)));
    // 0x321794: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x321794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x321798: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x321798u;
    {
        const bool branch_taken_0x321798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321798) {
            ctx->pc = 0x321764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321764;
        }
    }
    ctx->pc = 0x3217A0u;
label_3217a0:
    // 0x3217a0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3217A0u;
    {
        const bool branch_taken_0x3217a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3217A0u;
            // 0x3217a4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217a0) {
            ctx->pc = 0x3217BCu;
            goto label_3217bc;
        }
    }
    ctx->pc = 0x3217A8u;
    // 0x3217a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3217a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3217ac: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3217ACu;
    SET_GPR_U32(ctx, 31, 0x3217B4u);
    ctx->pc = 0x3217B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3217ACu;
            // 0x3217b0: 0x24843300  addiu       $a0, $a0, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217B4u; }
        if (ctx->pc != 0x3217B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217B4u; }
        if (ctx->pc != 0x3217B4u) { return; }
    }
    ctx->pc = 0x3217B4u;
label_3217b4:
    // 0x3217b4: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3217B4u;
    {
        const bool branch_taken_0x3217b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3217b4) {
            ctx->pc = 0x321B70u;
            goto label_321b70;
        }
    }
    ctx->pc = 0x3217BCu;
label_3217bc:
    // 0x3217bc: 0x0  nop
    ctx->pc = 0x3217bcu;
    // NOP
    // 0x3217c0: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3217c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3217c4: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3217c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3217cc: 0x27a73c40  addiu       $a3, $sp, 0x3C40
    ctx->pc = 0x3217ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 15424));
    // 0x3217d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3217d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3217d4: 0xc048cbe  jal         func_1232F8
    ctx->pc = 0x3217D4u;
    SET_GPR_U32(ctx, 31, 0x3217DCu);
    ctx->pc = 0x3217D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3217D4u;
            // 0x3217d8: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232F8u;
    if (runtime->hasFunction(0x1232F8u)) {
        auto targetFn = runtime->lookupFunction(0x1232F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217DCu; }
        if (ctx->pc != 0x3217DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x1232f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217DCu; }
        if (ctx->pc != 0x3217DCu) { return; }
    }
    ctx->pc = 0x3217DCu;
label_3217dc:
    // 0x3217dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3217dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3217e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3217e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3217e4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3217E4u;
    SET_GPR_U32(ctx, 31, 0x3217ECu);
    ctx->pc = 0x3217E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3217E4u;
            // 0x3217e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217ECu; }
        if (ctx->pc != 0x3217ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3217ECu; }
        if (ctx->pc != 0x3217ECu) { return; }
    }
    ctx->pc = 0x3217ECu;
label_3217ec:
    // 0x3217ec: 0x1620009f  bnez        $s1, . + 4 + (0x9F << 2)
    ctx->pc = 0x3217ECu;
    {
        const bool branch_taken_0x3217ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3217ec) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x3217F4u;
    // 0x3217f4: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x3217f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x3217f8: 0x27a418c0  addiu       $a0, $sp, 0x18C0
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x3217fc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x321800: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x321800u;
    SET_GPR_U32(ctx, 31, 0x321808u);
    ctx->pc = 0x321804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321800u;
            // 0x321804: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321808u; }
        if (ctx->pc != 0x321808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321808u; }
        if (ctx->pc != 0x321808u) { return; }
    }
    ctx->pc = 0x321808u;
label_321808:
    // 0x321808: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x32180c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321810: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321818: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x321818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32181c: 0xc048c46  jal         func_123118
    ctx->pc = 0x32181Cu;
    SET_GPR_U32(ctx, 31, 0x321824u);
    ctx->pc = 0x321820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32181Cu;
            // 0x321820: 0x27a910b0  addiu       $t1, $sp, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321824u; }
        if (ctx->pc != 0x321824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321824u; }
        if (ctx->pc != 0x321824u) { return; }
    }
    ctx->pc = 0x321824u;
label_321824:
    // 0x321824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321828: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x32182c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x32182Cu;
    SET_GPR_U32(ctx, 31, 0x321834u);
    ctx->pc = 0x321830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32182Cu;
            // 0x321830: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321834u; }
        if (ctx->pc != 0x321834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321834u; }
        if (ctx->pc != 0x321834u) { return; }
    }
    ctx->pc = 0x321834u;
label_321834:
    // 0x321834: 0x8fa23dd8  lw          $v0, 0x3DD8($sp)
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15832)));
    // 0x321838: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x321838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32183c: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x32183Cu;
    {
        const bool branch_taken_0x32183c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x321840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32183Cu;
            // 0x321840: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32183c) {
            ctx->pc = 0x321A60u;
            goto label_321a60;
        }
    }
    ctx->pc = 0x321844u;
    // 0x321844: 0x27a43cc0  addiu       $a0, $sp, 0x3CC0
    ctx->pc = 0x321844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 15552));
    // 0x321848: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x321848u;
    SET_GPR_U32(ctx, 31, 0x321850u);
    ctx->pc = 0x32184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321848u;
            // 0x32184c: 0x27a519c0  addiu       $a1, $sp, 0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321850u; }
        if (ctx->pc != 0x321850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321850u; }
        if (ctx->pc != 0x321850u) { return; }
    }
    ctx->pc = 0x321850u;
label_321850:
    // 0x321850: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321858: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x32185c: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x32185Cu;
    SET_GPR_U32(ctx, 31, 0x321864u);
    ctx->pc = 0x321860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32185Cu;
            // 0x321860: 0x27a73cc0  addiu       $a3, $sp, 0x3CC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 15552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238C8u;
    if (runtime->hasFunction(0x1238C8u)) {
        auto targetFn = runtime->lookupFunction(0x1238C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321864u; }
        if (ctx->pc != 0x321864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRename_0x1238c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321864u; }
        if (ctx->pc != 0x321864u) { return; }
    }
    ctx->pc = 0x321864u;
label_321864:
    // 0x321864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32186c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x32186Cu;
    SET_GPR_U32(ctx, 31, 0x321874u);
    ctx->pc = 0x321870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32186Cu;
            // 0x321870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321874u; }
        if (ctx->pc != 0x321874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321874u; }
        if (ctx->pc != 0x321874u) { return; }
    }
    ctx->pc = 0x321874u;
label_321874:
    // 0x321874: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321878: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x32187c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321880: 0x24c63330  addiu       $a2, $a2, 0x3330
    ctx->pc = 0x321880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13104));
    // 0x321884: 0xc048cbe  jal         func_1232F8
    ctx->pc = 0x321884u;
    SET_GPR_U32(ctx, 31, 0x32188Cu);
    ctx->pc = 0x321888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321884u;
            // 0x321888: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232F8u;
    if (runtime->hasFunction(0x1232F8u)) {
        auto targetFn = runtime->lookupFunction(0x1232F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32188Cu; }
        if (ctx->pc != 0x32188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x1232f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32188Cu; }
        if (ctx->pc != 0x32188Cu) { return; }
    }
    ctx->pc = 0x32188Cu;
label_32188c:
    // 0x32188c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321894: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321894u;
    SET_GPR_U32(ctx, 31, 0x32189Cu);
    ctx->pc = 0x321898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321894u;
            // 0x321898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32189Cu; }
        if (ctx->pc != 0x32189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32189Cu; }
        if (ctx->pc != 0x32189Cu) { return; }
    }
    ctx->pc = 0x32189Cu;
label_32189c:
    // 0x32189c: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x32189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3218a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3218a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3218a4: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x3218a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x3218a8: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x3218A8u;
    SET_GPR_U32(ctx, 31, 0x3218B0u);
    ctx->pc = 0x3218ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3218A8u;
            // 0x3218ac: 0x27a73cc0  addiu       $a3, $sp, 0x3CC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 15552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238C8u;
    if (runtime->hasFunction(0x1238C8u)) {
        auto targetFn = runtime->lookupFunction(0x1238C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218B0u; }
        if (ctx->pc != 0x3218B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRename_0x1238c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218B0u; }
        if (ctx->pc != 0x3218B0u) { return; }
    }
    ctx->pc = 0x3218B0u;
label_3218b0:
    // 0x3218b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3218b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3218b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218b8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3218B8u;
    SET_GPR_U32(ctx, 31, 0x3218C0u);
    ctx->pc = 0x3218BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3218B8u;
            // 0x3218bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218C0u; }
        if (ctx->pc != 0x3218C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218C0u; }
        if (ctx->pc != 0x3218C0u) { return; }
    }
    ctx->pc = 0x3218C0u;
label_3218c0:
    // 0x3218c0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3218c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3218c4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x3218c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x3218c8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3218cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3218ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3218d0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3218D0u;
    {
        const bool branch_taken_0x3218d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3218D0u;
            // 0x3218d4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218d0) {
            ctx->pc = 0x321A50u;
            goto label_321a50;
        }
    }
    ctx->pc = 0x3218D8u;
    // 0x3218d8: 0x27a63cc0  addiu       $a2, $sp, 0x3CC0
    ctx->pc = 0x3218d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15552));
    // 0x3218dc: 0x27a43d40  addiu       $a0, $sp, 0x3D40
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
    // 0x3218e0: 0x24a53220  addiu       $a1, $a1, 0x3220
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12832));
    // 0x3218e4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x3218E4u;
    SET_GPR_U32(ctx, 31, 0x3218ECu);
    ctx->pc = 0x3218E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3218E4u;
            // 0x3218e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218ECu; }
        if (ctx->pc != 0x3218ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218ECu; }
        if (ctx->pc != 0x3218ECu) { return; }
    }
    ctx->pc = 0x3218ECu;
label_3218ec:
    // 0x3218ec: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3218ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3218f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3218f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3218f4: 0x27a63d40  addiu       $a2, $sp, 0x3D40
    ctx->pc = 0x3218f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
    // 0x3218f8: 0xc0489d2  jal         func_122748
    ctx->pc = 0x3218F8u;
    SET_GPR_U32(ctx, 31, 0x321900u);
    ctx->pc = 0x3218FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3218F8u;
            // 0x3218fc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321900u; }
        if (ctx->pc != 0x321900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321900u; }
        if (ctx->pc != 0x321900u) { return; }
    }
    ctx->pc = 0x321900u;
label_321900:
    // 0x321900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321908: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321908u;
    SET_GPR_U32(ctx, 31, 0x321910u);
    ctx->pc = 0x32190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321908u;
            // 0x32190c: 0x27a63de8  addiu       $a2, $sp, 0x3DE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321910u; }
        if (ctx->pc != 0x321910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321910u; }
        if (ctx->pc != 0x321910u) { return; }
    }
    ctx->pc = 0x321910u;
label_321910:
    // 0x321910: 0x8fa23de8  lw          $v0, 0x3DE8($sp)
    ctx->pc = 0x321910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15848)));
    // 0x321914: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x321914u;
    {
        const bool branch_taken_0x321914 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x321918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321914u;
            // 0x321918: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321914) {
            ctx->pc = 0x321930u;
            goto label_321930;
        }
    }
    ctx->pc = 0x32191Cu;
    // 0x32191c: 0x27a53d40  addiu       $a1, $sp, 0x3D40
    ctx->pc = 0x32191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
    // 0x321920: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x321920u;
    SET_GPR_U32(ctx, 31, 0x321928u);
    ctx->pc = 0x321924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321920u;
            // 0x321924: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321928u; }
        if (ctx->pc != 0x321928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321928u; }
        if (ctx->pc != 0x321928u) { return; }
    }
    ctx->pc = 0x321928u;
label_321928:
    // 0x321928: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x321928u;
    {
        const bool branch_taken_0x321928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321928) {
            ctx->pc = 0x321B70u;
            goto label_321b70;
        }
    }
    ctx->pc = 0x321930u;
label_321930:
    // 0x321930: 0x8f84a414  lw          $a0, -0x5BEC($gp)
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943764)));
    // 0x321934: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x321934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x321938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32193c: 0x344659c0  ori         $a2, $v0, 0x59C0
    ctx->pc = 0x32193cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
    // 0x321940: 0xc049c86  jal         func_127218
    ctx->pc = 0x321940u;
    SET_GPR_U32(ctx, 31, 0x321948u);
    ctx->pc = 0x321944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321940u;
            // 0x321944: 0xafa03dec  sw          $zero, 0x3DEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 15852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321948u; }
        if (ctx->pc != 0x321948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321948u; }
        if (ctx->pc != 0x321948u) { return; }
    }
    ctx->pc = 0x321948u;
label_321948:
    // 0x321948: 0x8f85a414  lw          $a1, -0x5BEC($gp)
    ctx->pc = 0x321948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943764)));
    // 0x32194c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x32194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x321950: 0x8fa43de8  lw          $a0, 0x3DE8($sp)
    ctx->pc = 0x321950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15848)));
    // 0x321954: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x321954u;
    SET_GPR_U32(ctx, 31, 0x32195Cu);
    ctx->pc = 0x321958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321954u;
            // 0x321958: 0x34465840  ori         $a2, $v0, 0x5840 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22592);
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32195Cu; }
        if (ctx->pc != 0x32195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32195Cu; }
        if (ctx->pc != 0x32195Cu) { return; }
    }
    ctx->pc = 0x32195Cu;
label_32195c:
    // 0x32195c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321964: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321964u;
    SET_GPR_U32(ctx, 31, 0x32196Cu);
    ctx->pc = 0x321968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321964u;
            // 0x321968: 0x27a63dec  addiu       $a2, $sp, 0x3DEC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15852));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32196Cu; }
        if (ctx->pc != 0x32196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32196Cu; }
        if (ctx->pc != 0x32196Cu) { return; }
    }
    ctx->pc = 0x32196Cu;
label_32196c:
    // 0x32196c: 0x8fa53dec  lw          $a1, 0x3DEC($sp)
    ctx->pc = 0x32196cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15852)));
    // 0x321970: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x321970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x321974: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x321974u;
    SET_GPR_U32(ctx, 31, 0x32197Cu);
    ctx->pc = 0x321978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321974u;
            // 0x321978: 0x24843368  addiu       $a0, $a0, 0x3368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32197Cu; }
        if (ctx->pc != 0x32197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32197Cu; }
        if (ctx->pc != 0x32197Cu) { return; }
    }
    ctx->pc = 0x32197Cu;
label_32197c:
    // 0x32197c: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x32197Cu;
    SET_GPR_U32(ctx, 31, 0x321984u);
    ctx->pc = 0x321980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32197Cu;
            // 0x321980: 0x8fa43de8  lw          $a0, 0x3DE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321984u; }
        if (ctx->pc != 0x321984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321984u; }
        if (ctx->pc != 0x321984u) { return; }
    }
    ctx->pc = 0x321984u;
label_321984:
    // 0x321984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32198c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x32198Cu;
    SET_GPR_U32(ctx, 31, 0x321994u);
    ctx->pc = 0x321990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32198Cu;
            // 0x321990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321994u; }
        if (ctx->pc != 0x321994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321994u; }
        if (ctx->pc != 0x321994u) { return; }
    }
    ctx->pc = 0x321994u;
label_321994:
    // 0x321994: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32199c: 0xc048d44  jal         func_123510
    ctx->pc = 0x32199Cu;
    SET_GPR_U32(ctx, 31, 0x3219A4u);
    ctx->pc = 0x3219A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32199Cu;
            // 0x3219a0: 0x27a63d40  addiu       $a2, $sp, 0x3D40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123510u;
    if (runtime->hasFunction(0x123510u)) {
        auto targetFn = runtime->lookupFunction(0x123510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219A4u; }
        if (ctx->pc != 0x3219A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcDelete_0x123510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219A4u; }
        if (ctx->pc != 0x3219A4u) { return; }
    }
    ctx->pc = 0x3219A4u;
label_3219a4:
    // 0x3219a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3219a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3219a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219ac: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3219ACu;
    SET_GPR_U32(ctx, 31, 0x3219B4u);
    ctx->pc = 0x3219B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3219ACu;
            // 0x3219b0: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219B4u; }
        if (ctx->pc != 0x3219B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219B4u; }
        if (ctx->pc != 0x3219B4u) { return; }
    }
    ctx->pc = 0x3219B4u;
label_3219b4:
    // 0x3219b4: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x3219b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3219b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3219bc: 0x27a63d40  addiu       $a2, $sp, 0x3D40
    ctx->pc = 0x3219bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
    // 0x3219c0: 0xc0489d2  jal         func_122748
    ctx->pc = 0x3219C0u;
    SET_GPR_U32(ctx, 31, 0x3219C8u);
    ctx->pc = 0x3219C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3219C0u;
            // 0x3219c4: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219C8u; }
        if (ctx->pc != 0x3219C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219C8u; }
        if (ctx->pc != 0x3219C8u) { return; }
    }
    ctx->pc = 0x3219C8u;
label_3219c8:
    // 0x3219c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3219c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3219ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219d0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x3219D0u;
    SET_GPR_U32(ctx, 31, 0x3219D8u);
    ctx->pc = 0x3219D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3219D0u;
            // 0x3219d4: 0x27a63de8  addiu       $a2, $sp, 0x3DE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219D8u; }
        if (ctx->pc != 0x3219D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219D8u; }
        if (ctx->pc != 0x3219D8u) { return; }
    }
    ctx->pc = 0x3219D8u;
label_3219d8:
    // 0x3219d8: 0x8fa43de8  lw          $a0, 0x3DE8($sp)
    ctx->pc = 0x3219d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15848)));
    // 0x3219dc: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3219DCu;
    {
        const bool branch_taken_0x3219dc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3219dc) {
            ctx->pc = 0x3219FCu;
            goto label_3219fc;
        }
    }
    ctx->pc = 0x3219E4u;
    // 0x3219e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3219e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x3219e8: 0x27a53d40  addiu       $a1, $sp, 0x3D40
    ctx->pc = 0x3219e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15680));
    // 0x3219ec: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x3219ECu;
    SET_GPR_U32(ctx, 31, 0x3219F4u);
    ctx->pc = 0x3219F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3219ECu;
            // 0x3219f0: 0x24843380  addiu       $a0, $a0, 0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219F4u; }
        if (ctx->pc != 0x3219F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3219F4u; }
        if (ctx->pc != 0x3219F4u) { return; }
    }
    ctx->pc = 0x3219F4u;
label_3219f4:
    // 0x3219f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3219F4u;
    {
        const bool branch_taken_0x3219f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3219f4) {
            ctx->pc = 0x321B70u;
            goto label_321b70;
        }
    }
    ctx->pc = 0x3219FCu;
label_3219fc:
    // 0x3219fc: 0x0  nop
    ctx->pc = 0x3219fcu;
    // NOP
    // 0x321a00: 0x8f85a414  lw          $a1, -0x5BEC($gp)
    ctx->pc = 0x321a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943764)));
    // 0x321a04: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x321a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x321a08: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x321A08u;
    SET_GPR_U32(ctx, 31, 0x321A10u);
    ctx->pc = 0x321A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A08u;
            // 0x321a0c: 0x344659c0  ori         $a2, $v0, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A10u; }
        if (ctx->pc != 0x321A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A10u; }
        if (ctx->pc != 0x321A10u) { return; }
    }
    ctx->pc = 0x321A10u;
label_321a10:
    // 0x321a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a18: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321A18u;
    SET_GPR_U32(ctx, 31, 0x321A20u);
    ctx->pc = 0x321A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A18u;
            // 0x321a1c: 0x27a63dec  addiu       $a2, $sp, 0x3DEC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15852));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A20u; }
        if (ctx->pc != 0x321A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A20u; }
        if (ctx->pc != 0x321A20u) { return; }
    }
    ctx->pc = 0x321A20u;
label_321a20:
    // 0x321a20: 0x8fa53dec  lw          $a1, 0x3DEC($sp)
    ctx->pc = 0x321a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15852)));
    // 0x321a24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x321a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x321a28: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x321a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x321a2c: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    // 0x321a30: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x321A30u;
    SET_GPR_U32(ctx, 31, 0x321A38u);
    ctx->pc = 0x321A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A30u;
            // 0x321a34: 0x344659c0  ori         $a2, $v0, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A38u; }
        if (ctx->pc != 0x321A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A38u; }
        if (ctx->pc != 0x321A38u) { return; }
    }
    ctx->pc = 0x321A38u;
label_321a38:
    // 0x321a38: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x321A38u;
    SET_GPR_U32(ctx, 31, 0x321A40u);
    ctx->pc = 0x321A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A38u;
            // 0x321a3c: 0x8fa43de8  lw          $a0, 0x3DE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 15848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A40u; }
        if (ctx->pc != 0x321A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A40u; }
        if (ctx->pc != 0x321A40u) { return; }
    }
    ctx->pc = 0x321A40u;
label_321a40:
    // 0x321a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a48: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321A48u;
    SET_GPR_U32(ctx, 31, 0x321A50u);
    ctx->pc = 0x321A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A48u;
            // 0x321a4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A50u; }
        if (ctx->pc != 0x321A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A50u; }
        if (ctx->pc != 0x321A50u) { return; }
    }
    ctx->pc = 0x321A50u;
label_321a50:
    // 0x321a50: 0x8f82a404  lw          $v0, -0x5BFC($gp)
    ctx->pc = 0x321a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943748)));
    // 0x321a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321A58u;
    {
        const bool branch_taken_0x321a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321A58u;
            // 0x321a5c: 0xaf82a404  sw          $v0, -0x5BFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a58) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x321A60u;
label_321a60:
    // 0x321a60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x321a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x321a64: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x321A64u;
    SET_GPR_U32(ctx, 31, 0x321A6Cu);
    ctx->pc = 0x321A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A64u;
            // 0x321a68: 0x248433d0  addiu       $a0, $a0, 0x33D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A6Cu; }
        if (ctx->pc != 0x321A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A6Cu; }
        if (ctx->pc != 0x321A6Cu) { return; }
    }
    ctx->pc = 0x321A6Cu;
label_321a6c:
    // 0x321a6c: 0x0  nop
    ctx->pc = 0x321a6cu;
    // NOP
    // 0x321a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321a74: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321A74u;
    {
        const bool branch_taken_0x321a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x321A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321A74u;
            // 0x321a78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a74) {
            ctx->pc = 0x321A84u;
            goto label_321a84;
        }
    }
    ctx->pc = 0x321A7Cu;
    // 0x321a7c: 0x16220031  bne         $s1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x321A7Cu;
    {
        const bool branch_taken_0x321a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x321a7c) {
            ctx->pc = 0x321B44u;
            goto label_321b44;
        }
    }
    ctx->pc = 0x321A84u;
label_321a84:
    // 0x321a84: 0x0  nop
    ctx->pc = 0x321a84u;
    // NOP
    // 0x321a88: 0x8f82a410  lw          $v0, -0x5BF0($gp)
    ctx->pc = 0x321a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x321a8c: 0x27a418c0  addiu       $a0, $sp, 0x18C0
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321a90: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x321a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x321a94: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x321A94u;
    SET_GPR_U32(ctx, 31, 0x321A9Cu);
    ctx->pc = 0x321A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A94u;
            // 0x321a98: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A9Cu; }
        if (ctx->pc != 0x321A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A9Cu; }
        if (ctx->pc != 0x321A9Cu) { return; }
    }
    ctx->pc = 0x321A9Cu;
label_321a9c:
    // 0x321a9c: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321aa4: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321aac: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x321aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321ab0: 0xc048c46  jal         func_123118
    ctx->pc = 0x321AB0u;
    SET_GPR_U32(ctx, 31, 0x321AB8u);
    ctx->pc = 0x321AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AB0u;
            // 0x321ab4: 0x27a910b0  addiu       $t1, $sp, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AB8u; }
        if (ctx->pc != 0x321AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AB8u; }
        if (ctx->pc != 0x321AB8u) { return; }
    }
    ctx->pc = 0x321AB8u;
label_321ab8:
    // 0x321ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321abc: 0x27a53dd4  addiu       $a1, $sp, 0x3DD4
    ctx->pc = 0x321abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15828));
    // 0x321ac0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321AC0u;
    SET_GPR_U32(ctx, 31, 0x321AC8u);
    ctx->pc = 0x321AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AC0u;
            // 0x321ac4: 0x27a63dd8  addiu       $a2, $sp, 0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 15832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AC8u; }
        if (ctx->pc != 0x321AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AC8u; }
        if (ctx->pc != 0x321AC8u) { return; }
    }
    ctx->pc = 0x321AC8u;
label_321ac8:
    // 0x321ac8: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321ad0: 0x27a618c0  addiu       $a2, $sp, 0x18C0
    ctx->pc = 0x321ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
    // 0x321ad4: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x321AD4u;
    SET_GPR_U32(ctx, 31, 0x321ADCu);
    ctx->pc = 0x321AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AD4u;
            // 0x321ad8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238C8u;
    if (runtime->hasFunction(0x1238C8u)) {
        auto targetFn = runtime->lookupFunction(0x1238C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321ADCu; }
        if (ctx->pc != 0x321ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRename_0x1238c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321ADCu; }
        if (ctx->pc != 0x321ADCu) { return; }
    }
    ctx->pc = 0x321ADCu;
label_321adc:
    // 0x321adc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321AE4u;
    SET_GPR_U32(ctx, 31, 0x321AECu);
    ctx->pc = 0x321AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AE4u;
            // 0x321ae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AECu; }
        if (ctx->pc != 0x321AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AECu; }
        if (ctx->pc != 0x321AECu) { return; }
    }
    ctx->pc = 0x321AECu;
label_321aec:
    // 0x321aec: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321af0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x321af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x321af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321af8: 0x24c63330  addiu       $a2, $a2, 0x3330
    ctx->pc = 0x321af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13104));
    // 0x321afc: 0xc048cbe  jal         func_1232F8
    ctx->pc = 0x321AFCu;
    SET_GPR_U32(ctx, 31, 0x321B04u);
    ctx->pc = 0x321B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AFCu;
            // 0x321b00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232F8u;
    if (runtime->hasFunction(0x1232F8u)) {
        auto targetFn = runtime->lookupFunction(0x1232F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B04u; }
        if (ctx->pc != 0x321B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x1232f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B04u; }
        if (ctx->pc != 0x321B04u) { return; }
    }
    ctx->pc = 0x321B04u;
label_321b04:
    // 0x321b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b0c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321B0Cu;
    SET_GPR_U32(ctx, 31, 0x321B14u);
    ctx->pc = 0x321B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321B0Cu;
            // 0x321b10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B14u; }
        if (ctx->pc != 0x321B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B14u; }
        if (ctx->pc != 0x321B14u) { return; }
    }
    ctx->pc = 0x321B14u;
label_321b14:
    // 0x321b14: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321b18: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x321b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321b20: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x321B20u;
    SET_GPR_U32(ctx, 31, 0x321B28u);
    ctx->pc = 0x321B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321B20u;
            // 0x321b24: 0x27a618c0  addiu       $a2, $sp, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238C8u;
    if (runtime->hasFunction(0x1238C8u)) {
        auto targetFn = runtime->lookupFunction(0x1238C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B28u; }
        if (ctx->pc != 0x321B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRename_0x1238c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B28u; }
        if (ctx->pc != 0x321B28u) { return; }
    }
    ctx->pc = 0x321B28u;
label_321b28:
    // 0x321b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b30: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321B30u;
    SET_GPR_U32(ctx, 31, 0x321B38u);
    ctx->pc = 0x321B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321B30u;
            // 0x321b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B38u; }
        if (ctx->pc != 0x321B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B38u; }
        if (ctx->pc != 0x321B38u) { return; }
    }
    ctx->pc = 0x321B38u;
label_321b38:
    // 0x321b38: 0x8f82a404  lw          $v0, -0x5BFC($gp)
    ctx->pc = 0x321b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943748)));
    // 0x321b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321b40: 0xaf82a404  sw          $v0, -0x5BFC($gp)
    ctx->pc = 0x321b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943748), GPR_U32(ctx, 2));
label_321b44:
    // 0x321b44: 0x0  nop
    ctx->pc = 0x321b44u;
    // NOP
    // 0x321b48: 0x8f84a3f8  lw          $a0, -0x5C08($gp)
    ctx->pc = 0x321b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x321b4c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x321b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x321b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321b54: 0x24c63330  addiu       $a2, $a2, 0x3330
    ctx->pc = 0x321b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13104));
    // 0x321b58: 0xc048cbe  jal         func_1232F8
    ctx->pc = 0x321B58u;
    SET_GPR_U32(ctx, 31, 0x321B60u);
    ctx->pc = 0x321B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321B58u;
            // 0x321b5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232F8u;
    if (runtime->hasFunction(0x1232F8u)) {
        auto targetFn = runtime->lookupFunction(0x1232F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B60u; }
        if (ctx->pc != 0x321B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x1232f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B60u; }
        if (ctx->pc != 0x321B60u) { return; }
    }
    ctx->pc = 0x321B60u;
label_321b60:
    // 0x321b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b68: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x321B68u;
    SET_GPR_U32(ctx, 31, 0x321B70u);
    ctx->pc = 0x321B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321B68u;
            // 0x321b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B70u; }
        if (ctx->pc != 0x321B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321B70u; }
        if (ctx->pc != 0x321B70u) { return; }
    }
    ctx->pc = 0x321B70u;
label_321b70:
    // 0x321b70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x321b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x321b74: 0x27de0080  addiu       $fp, $fp, 0x80
    ctx->pc = 0x321b74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x321b78: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x321b78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x321b7c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x321b7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x321b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321b84: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x321b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_321b88:
    // 0x321b88: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x321b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x321b8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x321b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x321b90: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x321b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x321b94: 0x1440fe47  bnez        $v0, . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x321B94u;
    {
        const bool branch_taken_0x321b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321B94u;
            // 0x321b98: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b94) {
            ctx->pc = 0x3214B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3214b4;
        }
    }
    ctx->pc = 0x321B9Cu;
    // 0x321b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x321b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x321ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321ba4: 0xaf83a400  sw          $v1, -0x5C00($gp)
    ctx->pc = 0x321ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943744), GPR_U32(ctx, 3));
    // 0x321ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321BA8u;
    {
        const bool branch_taken_0x321ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321BA8u;
            // 0x321bac: 0xaf82a408  sw          $v0, -0x5BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ba8) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x321BB0u;
label_321bb0:
    // 0x321bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321bb4:
    // 0x321bb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x321bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x321bb8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x321bb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x321bbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x321bbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x321bc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x321bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x321bc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x321bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321bc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x321bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x321BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321BDCu;
            // 0x321be0: 0x27bd3df0  addiu       $sp, $sp, 0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 15856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x321BE4u;
}
