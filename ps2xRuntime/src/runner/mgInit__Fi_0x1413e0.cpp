#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInit__Fi
// Address: 0x1413e0 - 0x141e08
void mgInit__Fi_0x1413e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInit__Fi_0x1413e0");
#endif

    switch (ctx->pc) {
        case 0x14141cu: goto label_14141c;
        case 0x141424u: goto label_141424;
        case 0x141434u: goto label_141434;
        case 0x14143cu: goto label_14143c;
        case 0x141460u: goto label_141460;
        case 0x141474u: goto label_141474;
        case 0x141480u: goto label_141480;
        case 0x14148cu: goto label_14148c;
        case 0x141538u: goto label_141538;
        case 0x1415fcu: goto label_1415fc;
        case 0x141604u: goto label_141604;
        case 0x141644u: goto label_141644;
        case 0x141674u: goto label_141674;
        case 0x14167cu: goto label_14167c;
        case 0x141690u: goto label_141690;
        case 0x1416c4u: goto label_1416c4;
        case 0x1417b0u: goto label_1417b0;
        case 0x1417c8u: goto label_1417c8;
        case 0x1417e0u: goto label_1417e0;
        case 0x1417f8u: goto label_1417f8;
        case 0x1418b4u: goto label_1418b4;
        case 0x1418ecu: goto label_1418ec;
        case 0x1418fcu: goto label_1418fc;
        case 0x141908u: goto label_141908;
        case 0x141910u: goto label_141910;
        case 0x141920u: goto label_141920;
        case 0x14192cu: goto label_14192c;
        case 0x141934u: goto label_141934;
        case 0x141940u: goto label_141940;
        case 0x14194cu: goto label_14194c;
        case 0x141958u: goto label_141958;
        case 0x141980u: goto label_141980;
        case 0x141990u: goto label_141990;
        case 0x1419a0u: goto label_1419a0;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419b8u: goto label_1419b8;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419d0u: goto label_1419d0;
        case 0x141b04u: goto label_141b04;
        case 0x141b14u: goto label_141b14;
        default: break;
    }

    ctx->pc = 0x1413e0u;

    // 0x1413e0: 0x3c01fffd  lui         $at, 0xFFFD
    ctx->pc = 0x1413e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65533 << 16));
    // 0x1413e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1413e8: 0x3421ff20  ori         $at, $at, 0xFF20
    ctx->pc = 0x1413e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65312);
    // 0x1413ec: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1413ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1413f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1413f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1413f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1413f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1413f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1413f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1413fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1413fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141408: 0xaf828018  sw          $v0, -0x7FE8($gp)
    ctx->pc = 0x141408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 2));
    // 0x14140c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141410: 0xaf80883c  sw          $zero, -0x77C4($gp)
    ctx->pc = 0x141410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), GPR_U32(ctx, 0));
    // 0x141414: 0xc0410ba  jal         func_1042E8
    ctx->pc = 0x141414u;
    SET_GPR_U32(ctx, 31, 0x14141Cu);
    ctx->pc = 0x141418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141414u;
            // 0x141418: 0xaf848820  sw          $a0, -0x77E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042E8u;
    if (runtime->hasFunction(0x1042E8u)) {
        auto targetFn = runtime->lookupFunction(0x1042E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14141Cu; }
        if (ctx->pc != 0x14141Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x1042e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14141Cu; }
        if (ctx->pc != 0x14141Cu) { return; }
    }
    ctx->pc = 0x14141Cu;
label_14141c:
    // 0x14141c: 0xc04116c  jal         func_1045B0
    ctx->pc = 0x14141Cu;
    SET_GPR_U32(ctx, 31, 0x141424u);
    ctx->pc = 0x141420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14141Cu;
            // 0x141420: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1045B0u;
    if (runtime->hasFunction(0x1045B0u)) {
        auto targetFn = runtime->lookupFunction(0x1045B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141424u; }
        if (ctx->pc != 0x141424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetEnv_0x1045b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141424u; }
        if (ctx->pc != 0x141424u) { return; }
    }
    ctx->pc = 0x141424u;
label_141424:
    // 0x141424: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x141424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x141428: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14142c: 0xc0410f6  jal         func_1043D8
    ctx->pc = 0x14142Cu;
    SET_GPR_U32(ctx, 31, 0x141434u);
    ctx->pc = 0x141430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14142Cu;
            // 0x141430: 0xa7a20066  sh          $v0, 0x66($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 102), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1043D8u;
    if (runtime->hasFunction(0x1043D8u)) {
        auto targetFn = runtime->lookupFunction(0x1043D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141434u; }
        if (ctx->pc != 0x141434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaPutEnv_0x1043d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141434u; }
        if (ctx->pc != 0x141434u) { return; }
    }
    ctx->pc = 0x141434u;
label_141434:
    // 0x141434: 0xc0409f4  jal         func_1027D0
    ctx->pc = 0x141434u;
    SET_GPR_U32(ctx, 31, 0x14143Cu);
    ctx->pc = 0x1027D0u;
    if (runtime->hasFunction(0x1027D0u)) {
        auto targetFn = runtime->lookupFunction(0x1027D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14143Cu; }
        if (ctx->pc != 0x14143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x1027d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14143Cu; }
        if (ctx->pc != 0x14143Cu) { return; }
    }
    ctx->pc = 0x14143Cu;
label_14143c:
    // 0x14143c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141440: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141444: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x141444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x141448: 0x24840ec0  addiu       $a0, $a0, 0xEC0
    ctx->pc = 0x141448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
    // 0x14144c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141450: 0x24061020  addiu       $a2, $zero, 0x1020
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
    // 0x141454: 0xaf808818  sw          $zero, -0x77E8($gp)
    ctx->pc = 0x141454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936600), GPR_U32(ctx, 0));
    // 0x141458: 0xc049c86  jal         func_127218
    ctx->pc = 0x141458u;
    SET_GPR_U32(ctx, 31, 0x141460u);
    ctx->pc = 0x14145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141458u;
            // 0x14145c: 0xaf80881c  sw          $zero, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141460u; }
        if (ctx->pc != 0x141460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141460u; }
        if (ctx->pc != 0x141460u) { return; }
    }
    ctx->pc = 0x141460u;
label_141460:
    // 0x141460: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x141460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x141464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141468: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x14146c: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x14146Cu;
    SET_GPR_U32(ctx, 31, 0x141474u);
    ctx->pc = 0x141470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14146Cu;
            // 0x141470: 0xaf828774  sw          $v0, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141474u; }
        if (ctx->pc != 0x141474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141474u; }
        if (ctx->pc != 0x141474u) { return; }
    }
    ctx->pc = 0x141474u;
label_141474:
    // 0x141474: 0xaf828768  sw          $v0, -0x7898($gp)
    ctx->pc = 0x141474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 2));
    // 0x141478: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x141478u;
    SET_GPR_U32(ctx, 31, 0x141480u);
    ctx->pc = 0x14147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141478u;
            // 0x14147c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141480u; }
        if (ctx->pc != 0x141480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141480u; }
        if (ctx->pc != 0x141480u) { return; }
    }
    ctx->pc = 0x141480u;
label_141480:
    // 0x141480: 0xaf82876c  sw          $v0, -0x7894($gp)
    ctx->pc = 0x141480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 2));
    // 0x141484: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x141484u;
    SET_GPR_U32(ctx, 31, 0x14148Cu);
    ctx->pc = 0x141488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141484u;
            // 0x141488: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14148Cu; }
        if (ctx->pc != 0x14148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14148Cu; }
        if (ctx->pc != 0x14148Cu) { return; }
    }
    ctx->pc = 0x14148Cu;
label_14148c:
    // 0x14148c: 0x8f938768  lw          $s3, -0x7898($gp)
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
    // 0x141490: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x141494: 0xaf828770  sw          $v0, -0x7890($gp)
    ctx->pc = 0x141494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 2));
    // 0x141498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14149c: 0x240effbf  addiu       $t6, $zero, -0x41
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1414a0: 0x64110040  daddiu      $s1, $zero, 0x40
    ctx->pc = 0x1414a0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1414a4: 0x256b0eb0  addiu       $t3, $t3, 0xEB0
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3760));
    // 0x1414a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1414a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1414ac: 0x240fff7f  addiu       $t7, $zero, -0x81
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1414b0: 0x64100080  daddiu      $s0, $zero, 0x80
    ctx->pc = 0x1414b0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1414b4: 0x240cff0f  addiu       $t4, $zero, -0xF1
    ctx->pc = 0x1414b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1414b8: 0x640d0010  daddiu      $t5, $zero, 0x10
    ctx->pc = 0x1414b8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1414bc: 0x92720000  lbu         $s2, 0x0($s3)
    ctx->pc = 0x1414bcu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1414c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1414c4: 0x6403000e  daddiu      $v1, $zero, 0xE
    ctx->pc = 0x1414c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1414c8: 0x27858780  addiu       $a1, $gp, -0x7880
    ctx->pc = 0x1414c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936448));
    // 0x1414cc: 0x27868784  addiu       $a2, $gp, -0x787C
    ctx->pc = 0x1414ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936452));
    // 0x1414d0: 0x27878788  addiu       $a3, $gp, -0x7878
    ctx->pc = 0x1414d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936456));
    // 0x1414d4: 0x2788878c  addiu       $t0, $gp, -0x7874
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936460));
    // 0x1414d8: 0x27898790  addiu       $t1, $gp, -0x7870
    ctx->pc = 0x1414d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936464));
    // 0x1414dc: 0x278a8794  addiu       $t2, $gp, -0x786C
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936468));
    // 0x1414e0: 0x24e7024  and         $t6, $s2, $t6
    ctx->pc = 0x1414e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
    // 0x1414e4: 0x1d17025  or          $t6, $t6, $s1
    ctx->pc = 0x1414e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 17));
    // 0x1414e8: 0xa26e0000  sb          $t6, 0x0($s3)
    ctx->pc = 0x1414e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x1414ec: 0x7d600000  sq          $zero, 0x0($t3)
    ctx->pc = 0x1414ecu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 0));
    // 0x1414f0: 0x90310eb1  lbu         $s1, 0xEB1($at)
    ctx->pc = 0x1414f0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3761)));
    // 0x1414f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1414f8: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x1414f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x1414fc: 0x902e0eb7  lbu         $t6, 0xEB7($at)
    ctx->pc = 0x1414fcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3767)));
    // 0x141500: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x141500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x141504: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141508: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x141508u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x14150c: 0x902b0eb8  lbu         $t3, 0xEB8($at)
    ctx->pc = 0x14150cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3768)));
    // 0x141510: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x141510u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x141514: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141518: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x141518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x14151c: 0xa02f0eb1  sb          $t7, 0xEB1($at)
    ctx->pc = 0x14151cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3761), (uint8_t)GPR_U32(ctx, 15));
    // 0x141520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x141524: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141528: 0xa02c0eb7  sb          $t4, 0xEB7($at)
    ctx->pc = 0x141528u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3767), (uint8_t)GPR_U32(ctx, 12));
    // 0x14152c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141530: 0xc0504c8  jal         func_141320
    ctx->pc = 0x141530u;
    SET_GPR_U32(ctx, 31, 0x141538u);
    ctx->pc = 0x141534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141530u;
            // 0x141534: 0xa0220eb8  sb          $v0, 0xEB8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 3768), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141320u;
    if (runtime->hasFunction(0x141320u)) {
        auto targetFn = runtime->lookupFunction(0x141320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141538u; }
        if (ctx->pc != 0x141538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScreenSize__FiPiPiPiPiPiPi_0x141320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141538u; }
        if (ctx->pc != 0x141538u) { return; }
    }
    ctx->pc = 0x141538u;
label_141538:
    // 0x141538: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x141538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x14153c: 0xaf82877c  sw          $v0, -0x7884($gp)
    ctx->pc = 0x14153cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 2));
    // 0x141540: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x141540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141544: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141544u;
    {
        const bool branch_taken_0x141544 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x141548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141544u;
            // 0x141548: 0x3102001f  andi        $v0, $t0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141544) {
            ctx->pc = 0x141558u;
            goto label_141558;
        }
    }
    ctx->pc = 0x14154Cu;
    // 0x14154c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14154Cu;
    {
        const bool branch_taken_0x14154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14154c) {
            ctx->pc = 0x141558u;
            goto label_141558;
        }
    }
    ctx->pc = 0x141554u;
    // 0x141554: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_141558:
    // 0x141558: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141558u;
    {
        const bool branch_taken_0x141558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14155Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141558u;
            // 0x14155c: 0x3203001f  andi        $v1, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141558) {
            ctx->pc = 0x141580u;
            goto label_141580;
        }
    }
    ctx->pc = 0x141560u;
    // 0x141560: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141560u;
    {
        const bool branch_taken_0x141560 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x141564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141560u;
            // 0x141564: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141560) {
            ctx->pc = 0x141578u;
            goto label_141578;
        }
    }
    ctx->pc = 0x141568u;
    // 0x141568: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141568) {
            ctx->pc = 0x141574u;
            goto label_141574;
        }
    }
    ctx->pc = 0x141570u;
    // 0x141570: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_141574:
    // 0x141574: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_141578:
    // 0x141578: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14157c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_141580:
    // 0x141580: 0x8f898780  lw          $t1, -0x7880($gp)
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x141584: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141584u;
    {
        const bool branch_taken_0x141584 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x141588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141584u;
            // 0x141588: 0x92043  sra         $a0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141584) {
            ctx->pc = 0x141594u;
            goto label_141594;
        }
    }
    ctx->pc = 0x14158Cu;
    // 0x14158c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x141590: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_141594:
    // 0x141594: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x141598: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x141598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
    // 0x14159c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1415a0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1415A0u;
    {
        const bool branch_taken_0x1415a0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1415A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415A0u;
            // 0x1415a4: 0xaf828798  sw          $v0, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a0) {
            ctx->pc = 0x1415B0u;
            goto label_1415b0;
        }
    }
    ctx->pc = 0x1415A8u;
    // 0x1415a8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1415a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1415ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1415b0:
    // 0x1415b0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1415b4: 0x8f8a8798  lw          $t2, -0x7868($gp)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1415b8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1415bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1415bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415c0: 0xaf83879c  sw          $v1, -0x7864($gp)
    ctx->pc = 0x1415c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 3));
    // 0x1415c4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1415c8: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x1415c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x1415cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1415d0: 0xaf8287a0  sw          $v0, -0x7860($gp)
    ctx->pc = 0x1415d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936480), GPR_U32(ctx, 2));
    // 0x1415d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1415d8: 0xaf8287a4  sw          $v0, -0x785C($gp)
    ctx->pc = 0x1415d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936484), GPR_U32(ctx, 2));
    // 0x1415dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1415dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415e0: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1415e4: 0xaf8a87a8  sw          $t2, -0x7858($gp)
    ctx->pc = 0x1415e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936488), GPR_U32(ctx, 10));
    // 0x1415e8: 0xaf8287ac  sw          $v0, -0x7854($gp)
    ctx->pc = 0x1415e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936492), GPR_U32(ctx, 2));
    // 0x1415ec: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1415f0: 0xaf8387b0  sw          $v1, -0x7850($gp)
    ctx->pc = 0x1415f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936496), GPR_U32(ctx, 3));
    // 0x1415f4: 0xc04098c  jal         func_102630
    ctx->pc = 0x1415F4u;
    SET_GPR_U32(ctx, 31, 0x1415FCu);
    ctx->pc = 0x1415F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1415F4u;
            // 0x1415f8: 0xaf8287b4  sw          $v0, -0x784C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (runtime->hasFunction(0x102630u)) {
        auto targetFn = runtime->lookupFunction(0x102630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415FCu; }
        if (ctx->pc != 0x1415FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x102630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415FCu; }
        if (ctx->pc != 0x1415FCu) { return; }
    }
    ctx->pc = 0x1415FCu;
label_1415fc:
    // 0x1415fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1415fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141604:
    // 0x141604: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x141604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x141608: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x141608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14160c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x14160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x141610: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x141614: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x141614u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x141618: 0x28622000  slti        $v0, $v1, 0x2000
    ctx->pc = 0x141618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x14161c: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x14161cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x141620: 0x7ca00020  sq          $zero, 0x20($a1)
    ctx->pc = 0x141620u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 0));
    // 0x141624: 0x7ca00030  sq          $zero, 0x30($a1)
    ctx->pc = 0x141624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 0));
    // 0x141628: 0x7ca00040  sq          $zero, 0x40($a1)
    ctx->pc = 0x141628u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 0));
    // 0x14162c: 0x7ca00050  sq          $zero, 0x50($a1)
    ctx->pc = 0x14162cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 0));
    // 0x141630: 0x7ca00060  sq          $zero, 0x60($a1)
    ctx->pc = 0x141630u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 0));
    // 0x141634: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x141634u;
    {
        const bool branch_taken_0x141634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141634u;
            // 0x141638: 0x7ca00070  sq          $zero, 0x70($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141634) {
            ctx->pc = 0x141604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141604;
        }
    }
    ctx->pc = 0x14163Cu;
    // 0x14163c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14163cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x141640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141644:
    // 0x141644: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x141648: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x141648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x14164c: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x14164cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x141650: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x141650u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x141654: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x141654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x141658: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14165c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14165cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x141660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x141664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141668: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14166c: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x14166Cu;
    SET_GPR_U32(ctx, 31, 0x141674u);
    ctx->pc = 0x141670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14166Cu;
            // 0x141670: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1036B0u;
    if (runtime->hasFunction(0x1036B0u)) {
        auto targetFn = runtime->lookupFunction(0x1036B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141674u; }
        if (ctx->pc != 0x141674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x1036b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141674u; }
        if (ctx->pc != 0x141674u) { return; }
    }
    ctx->pc = 0x141674u;
label_141674:
    // 0x141674: 0xc0440d8  jal         func_110360
    ctx->pc = 0x141674u;
    SET_GPR_U32(ctx, 31, 0x14167Cu);
    ctx->pc = 0x141678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141674u;
            // 0x141678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14167Cu; }
        if (ctx->pc != 0x14167Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14167Cu; }
        if (ctx->pc != 0x14167Cu) { return; }
    }
    ctx->pc = 0x14167Cu;
label_14167c:
    // 0x14167c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x14167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x141680: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141684: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x141684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x141688: 0xc040e76  jal         func_1039D8
    ctx->pc = 0x141688u;
    SET_GPR_U32(ctx, 31, 0x141690u);
    ctx->pc = 0x14168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141688u;
            // 0x14168c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039D8u;
    if (runtime->hasFunction(0x1039D8u)) {
        auto targetFn = runtime->lookupFunction(0x1039D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141690u; }
        if (ctx->pc != 0x141690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x1039d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141690u; }
        if (ctx->pc != 0x141690u) { return; }
    }
    ctx->pc = 0x141690u;
label_141690:
    // 0x141690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x141690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x141694: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x141694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x141698: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x141698u;
    {
        const bool branch_taken_0x141698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141698u;
            // 0x14169c: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141698) {
            ctx->pc = 0x141644u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141644;
        }
    }
    ctx->pc = 0x1416A0u;
    // 0x1416a0: 0x87868780  lh          $a2, -0x7880($gp)
    ctx->pc = 0x1416a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1416a4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1416a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1416a8: 0x87878784  lh          $a3, -0x787C($gp)
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1416ac: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x1416acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x1416b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1416b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416b4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1416b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1416b8: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x1416b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1416bc: 0xc040c02  jal         func_103008
    ctx->pc = 0x1416BCu;
    SET_GPR_U32(ctx, 31, 0x1416C4u);
    ctx->pc = 0x1416C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416BCu;
            // 0x1416c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103008u;
    if (runtime->hasFunction(0x103008u)) {
        auto targetFn = runtime->lookupFunction(0x103008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416C4u; }
        if (ctx->pc != 0x1416C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuff_0x103008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416C4u; }
        if (ctx->pc != 0x1416C4u) { return; }
    }
    ctx->pc = 0x1416C4u;
label_1416c4:
    // 0x1416c4: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1416c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1416c8: 0xaf808834  sw          $zero, -0x77CC($gp)
    ctx->pc = 0x1416c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 0));
    // 0x1416cc: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1416ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1416d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1416D0u;
    {
        const bool branch_taken_0x1416d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1416D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416D0u;
            // 0x1416d4: 0x21ac3  sra         $v1, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416d0) {
            ctx->pc = 0x1416E0u;
            goto label_1416e0;
        }
    }
    ctx->pc = 0x1416D8u;
    // 0x1416d8: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x1416d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1416dc: 0x21ac3  sra         $v1, $v0, 11
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 11));
label_1416e0:
    // 0x1416e0: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x1416e4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1416e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1416e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1416E8u;
    {
        const bool branch_taken_0x1416e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1416ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416E8u;
            // 0x1416ec: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416e8) {
            ctx->pc = 0x1416F8u;
            goto label_1416f8;
        }
    }
    ctx->pc = 0x1416F0u;
    // 0x1416f0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1416f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1416f4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1416f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1416f8:
    // 0x1416f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1416f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1416fc: 0xaf828838  sw          $v0, -0x77C8($gp)
    ctx->pc = 0x1416fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936632), GPR_U32(ctx, 2));
    // 0x141700: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x141700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7904), GPR_U32(ctx, 0));
    // 0x141704: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x141704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x141708: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14170c: 0x8f848838  lw          $a0, -0x77C8($gp)
    ctx->pc = 0x14170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936632)));
    // 0x141710: 0xac201ee4  sw          $zero, 0x1EE4($at)
    ctx->pc = 0x141710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7908), GPR_U32(ctx, 0));
    // 0x141714: 0x2408fe00  addiu       $t0, $zero, -0x200
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x141718: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14171c: 0x300601ff  andi        $a2, $zero, 0x1FF
    ctx->pc = 0x14171cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)511);
    // 0x141720: 0xac221eec  sw          $v0, 0x1EEC($at)
    ctx->pc = 0x141720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7916), GPR_U32(ctx, 2));
    // 0x141724: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14172c: 0xac201ee8  sw          $zero, 0x1EE8($at)
    ctx->pc = 0x14172cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7912), GPR_U32(ctx, 0));
    // 0x141730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141734: 0x308901ff  andi        $t1, $a0, 0x1FF
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x141738: 0x942721c0  lhu         $a3, 0x21C0($at)
    ctx->pc = 0x141738u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8640)));
    // 0x14173c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x14173cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x141740: 0xaf828778  sw          $v0, -0x7888($gp)
    ctx->pc = 0x141740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 2));
    // 0x141744: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x141744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x141748: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14174c: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x14174cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x141750: 0x942522b0  lhu         $a1, 0x22B0($at)
    ctx->pc = 0x141750u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8880)));
    // 0x141754: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x141754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x141758: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14175c: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x14175cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x141760: 0x942322c0  lhu         $v1, 0x22C0($at)
    ctx->pc = 0x141760u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8896)));
    // 0x141764: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x141764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x141768: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14176c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x14176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x141770: 0x942221d0  lhu         $v0, 0x21D0($at)
    ctx->pc = 0x141770u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8656)));
    // 0x141774: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x141774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x141778: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14177c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x14177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x141780: 0xc42c1ee0  lwc1        $f12, 0x1EE0($at)
    ctx->pc = 0x141780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141784: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141788: 0xa42721c0  sh          $a3, 0x21C0($at)
    ctx->pc = 0x141788u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8640), (uint16_t)GPR_U32(ctx, 7));
    // 0x14178c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141790: 0xa42522b0  sh          $a1, 0x22B0($at)
    ctx->pc = 0x141790u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8880), (uint16_t)GPR_U32(ctx, 5));
    // 0x141794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141798: 0xa42322c0  sh          $v1, 0x22C0($at)
    ctx->pc = 0x141798u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8896), (uint16_t)GPR_U32(ctx, 3));
    // 0x14179c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x14179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1417a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1417a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1417a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1417A8u;
    SET_GPR_U32(ctx, 31, 0x1417B0u);
    ctx->pc = 0x1417ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417A8u;
            // 0x1417ac: 0xa42221d0  sh          $v0, 0x21D0($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 8656), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417B0u; }
        if (ctx->pc != 0x1417B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417B0u; }
        if (ctx->pc != 0x1417B0u) { return; }
    }
    ctx->pc = 0x1417B0u;
label_1417b0:
    // 0x1417b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417b4: 0xa0222260  sb          $v0, 0x2260($at)
    ctx->pc = 0x1417b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8800), (uint8_t)GPR_U32(ctx, 2));
    // 0x1417b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417bc: 0xc42c1ee4  lwc1        $f12, 0x1EE4($at)
    ctx->pc = 0x1417bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1417c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1417C0u;
    SET_GPR_U32(ctx, 31, 0x1417C8u);
    ctx->pc = 0x1417C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417C0u;
            // 0x1417c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417C8u; }
        if (ctx->pc != 0x1417C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417C8u; }
        if (ctx->pc != 0x1417C8u) { return; }
    }
    ctx->pc = 0x1417C8u;
label_1417c8:
    // 0x1417c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417cc: 0xa0222261  sb          $v0, 0x2261($at)
    ctx->pc = 0x1417ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8801), (uint8_t)GPR_U32(ctx, 2));
    // 0x1417d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417d4: 0xc42c1ee8  lwc1        $f12, 0x1EE8($at)
    ctx->pc = 0x1417d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1417d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1417D8u;
    SET_GPR_U32(ctx, 31, 0x1417E0u);
    ctx->pc = 0x1417DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417D8u;
            // 0x1417dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417E0u; }
        if (ctx->pc != 0x1417E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417E0u; }
        if (ctx->pc != 0x1417E0u) { return; }
    }
    ctx->pc = 0x1417E0u;
label_1417e0:
    // 0x1417e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417e4: 0xa0222262  sb          $v0, 0x2262($at)
    ctx->pc = 0x1417e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8802), (uint8_t)GPR_U32(ctx, 2));
    // 0x1417e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417ec: 0xc42c1eec  lwc1        $f12, 0x1EEC($at)
    ctx->pc = 0x1417ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1417f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1417F0u;
    SET_GPR_U32(ctx, 31, 0x1417F8u);
    ctx->pc = 0x1417F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417F0u;
            // 0x1417f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F8u; }
        if (ctx->pc != 0x1417F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F8u; }
        if (ctx->pc != 0x1417F8u) { return; }
    }
    ctx->pc = 0x1417F8u;
label_1417f8:
    // 0x1417f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1417fc: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1417fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x141800: 0xa0302350  sb          $s0, 0x2350($at)
    ctx->pc = 0x141800u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9040), (uint8_t)GPR_U32(ctx, 16));
    // 0x141804: 0x3469000b  ori         $t1, $v1, 0xB
    ctx->pc = 0x141804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x141808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14180c: 0x24050261  addiu       $a1, $zero, 0x261
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x141810: 0xa0312351  sb          $s1, 0x2351($at)
    ctx->pc = 0x141810u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9041), (uint8_t)GPR_U32(ctx, 17));
    // 0x141814: 0x278487c0  addiu       $a0, $gp, -0x7840
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    // 0x141818: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14181c: 0x278887d0  addiu       $t0, $gp, -0x7830
    ctx->pc = 0x14181cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936528));
    // 0x141820: 0xa0322352  sb          $s2, 0x2352($at)
    ctx->pc = 0x141820u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9042), (uint8_t)GPR_U32(ctx, 18));
    // 0x141824: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x141824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x141828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14182c: 0x278687f0  addiu       $a2, $gp, -0x7810
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936560));
    // 0x141830: 0xa0222263  sb          $v0, 0x2263($at)
    ctx->pc = 0x141830u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8803), (uint8_t)GPR_U32(ctx, 2));
    // 0x141834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141838: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14183c: 0xa0222353  sb          $v0, 0x2353($at)
    ctx->pc = 0x14183cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9043), (uint8_t)GPR_U32(ctx, 2));
    // 0x141840: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x141840u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x141844: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141848: 0xdf8a87c0  ld          $t2, -0x7840($gp)
    ctx->pc = 0x141848u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
    // 0x14184c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x14184cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x141850: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x141850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x141854: 0x27838800  addiu       $v1, $gp, -0x7800
    ctx->pc = 0x141854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936576));
    // 0x141858: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x141858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14185c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x141860: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141864: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x141864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x141868: 0x24840ec0  addiu       $a0, $a0, 0xEC0
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
    // 0x14186c: 0xff8a87c8  sd          $t2, -0x7838($gp)
    ctx->pc = 0x14186cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 10));
    // 0x141870: 0xfd090000  sd          $t1, 0x0($t0)
    ctx->pc = 0x141870u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x141874: 0xdc2821d0  ld          $t0, 0x21D0($at)
    ctx->pc = 0x141874u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 8656)));
    // 0x141878: 0xdf8987d0  ld          $t1, -0x7830($gp)
    ctx->pc = 0x141878u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x14187c: 0xff8887e8  sd          $t0, -0x7818($gp)
    ctx->pc = 0x14187cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U64(ctx, 8));
    // 0x141880: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141884: 0xff8987d8  sd          $t1, -0x7828($gp)
    ctx->pc = 0x141884u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U64(ctx, 9));
    // 0x141888: 0xff8887e0  sd          $t0, -0x7820($gp)
    ctx->pc = 0x141888u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U64(ctx, 8));
    // 0x14188c: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x14188cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x141890: 0xdf8687f0  ld          $a2, -0x7810($gp)
    ctx->pc = 0x141890u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x141894: 0xff8687f8  sd          $a2, -0x7808($gp)
    ctx->pc = 0x141894u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936568), GPR_U64(ctx, 6));
    // 0x141898: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x141898u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x14189c: 0xac222138  sw          $v0, 0x2138($at)
    ctx->pc = 0x14189cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8504), GPR_U32(ctx, 2));
    // 0x1418a0: 0xdf828800  ld          $v0, -0x7800($gp)
    ctx->pc = 0x1418a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936576)));
    // 0x1418a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1418a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1418a8: 0xac242144  sw          $a0, 0x2144($at)
    ctx->pc = 0x1418a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8516), GPR_U32(ctx, 4));
    // 0x1418ac: 0xc04e2a8  jal         func_138AA0
    ctx->pc = 0x1418ACu;
    SET_GPR_U32(ctx, 31, 0x1418B4u);
    ctx->pc = 0x1418B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1418ACu;
            // 0x1418b0: 0xff828808  sd          $v0, -0x77F8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138AA0u;
    if (runtime->hasFunction(0x138AA0u)) {
        auto targetFn = runtime->lookupFunction(0x138AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418B4u; }
        if (ctx->pc != 0x1418B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13mgRENDER_INFOFv_0x138aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418B4u; }
        if (ctx->pc != 0x1418B4u) { return; }
    }
    ctx->pc = 0x1418B4u;
label_1418b4:
    // 0x1418b4: 0xdf8287e0  ld          $v0, -0x7820($gp)
    ctx->pc = 0x1418b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x1418b8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1418bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1418c0: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1418c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1418c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1418c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418c8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1418c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1418cc: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x1418ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1418d0: 0xdf8287e8  ld          $v0, -0x7818($gp)
    ctx->pc = 0x1418d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936552)));
    // 0x1418d4: 0xfc251e00  sd          $a1, 0x1E00($at)
    ctx->pc = 0x1418d4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 7680), GPR_U64(ctx, 5));
    // 0x1418d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1418d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1418dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1418dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1418e0: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x1418e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1418e4: 0xc0440d8  jal         func_110360
    ctx->pc = 0x1418E4u;
    SET_GPR_U32(ctx, 31, 0x1418ECu);
    ctx->pc = 0x1418E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1418E4u;
            // 0x1418e8: 0xfc221e40  sd          $v0, 0x1E40($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 7744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418ECu; }
        if (ctx->pc != 0x1418ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418ECu; }
        if (ctx->pc != 0x1418ECu) { return; }
    }
    ctx->pc = 0x1418ECu;
label_1418ec:
    // 0x1418ec: 0x8f848768  lw          $a0, -0x7898($gp)
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
    // 0x1418f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1418f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1418f4: 0xc041184  jal         func_104610
    ctx->pc = 0x1418F4u;
    SET_GPR_U32(ctx, 31, 0x1418FCu);
    ctx->pc = 0x1418F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1418F4u;
            // 0x1418f8: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418FCu; }
        if (ctx->pc != 0x1418FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418FCu; }
        if (ctx->pc != 0x1418FCu) { return; }
    }
    ctx->pc = 0x1418FCu;
label_1418fc:
    // 0x1418fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1418fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141900: 0xc040ce6  jal         func_103398
    ctx->pc = 0x141900u;
    SET_GPR_U32(ctx, 31, 0x141908u);
    ctx->pc = 0x141904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141900u;
            // 0x141904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141908u; }
        if (ctx->pc != 0x141908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141908u; }
        if (ctx->pc != 0x141908u) { return; }
    }
    ctx->pc = 0x141908u;
label_141908:
    // 0x141908: 0xc0440d8  jal         func_110360
    ctx->pc = 0x141908u;
    SET_GPR_U32(ctx, 31, 0x141910u);
    ctx->pc = 0x14190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141908u;
            // 0x14190c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141910u; }
        if (ctx->pc != 0x141910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141910u; }
        if (ctx->pc != 0x141910u) { return; }
    }
    ctx->pc = 0x141910u;
label_141910:
    // 0x141910: 0x8f848768  lw          $a0, -0x7898($gp)
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
    // 0x141914: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x141914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x141918: 0xc041184  jal         func_104610
    ctx->pc = 0x141918u;
    SET_GPR_U32(ctx, 31, 0x141920u);
    ctx->pc = 0x14191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141918u;
            // 0x14191c: 0x24a52c40  addiu       $a1, $a1, 0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141920u; }
        if (ctx->pc != 0x141920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141920u; }
        if (ctx->pc != 0x141920u) { return; }
    }
    ctx->pc = 0x141920u;
label_141920:
    // 0x141920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141924: 0xc040ce6  jal         func_103398
    ctx->pc = 0x141924u;
    SET_GPR_U32(ctx, 31, 0x14192Cu);
    ctx->pc = 0x141928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141924u;
            // 0x141928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14192Cu; }
        if (ctx->pc != 0x14192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14192Cu; }
        if (ctx->pc != 0x14192Cu) { return; }
    }
    ctx->pc = 0x14192Cu;
label_14192c:
    // 0x14192c: 0xc051788  jal         func_145E20
    ctx->pc = 0x14192Cu;
    SET_GPR_U32(ctx, 31, 0x141934u);
    ctx->pc = 0x141930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14192Cu;
            // 0x141930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145E20u;
    if (runtime->hasFunction(0x145E20u)) {
        auto targetFn = runtime->lookupFunction(0x145E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141934u; }
        if (ctx->pc != 0x141934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVuProgPacket__Fi_0x145e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141934u; }
        if (ctx->pc != 0x141934u) { return; }
    }
    ctx->pc = 0x141934u;
label_141934:
    // 0x141934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141938: 0xc0440d8  jal         func_110360
    ctx->pc = 0x141938u;
    SET_GPR_U32(ctx, 31, 0x141940u);
    ctx->pc = 0x14193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141938u;
            // 0x14193c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141940u; }
        if (ctx->pc != 0x141940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141940u; }
        if (ctx->pc != 0x141940u) { return; }
    }
    ctx->pc = 0x141940u;
label_141940:
    // 0x141940: 0x8f848768  lw          $a0, -0x7898($gp)
    ctx->pc = 0x141940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
    // 0x141944: 0xc041184  jal         func_104610
    ctx->pc = 0x141944u;
    SET_GPR_U32(ctx, 31, 0x14194Cu);
    ctx->pc = 0x141948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141944u;
            // 0x141948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14194Cu; }
        if (ctx->pc != 0x14194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14194Cu; }
        if (ctx->pc != 0x14194Cu) { return; }
    }
    ctx->pc = 0x14194Cu;
label_14194c:
    // 0x14194c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141950: 0xc040ce6  jal         func_103398
    ctx->pc = 0x141950u;
    SET_GPR_U32(ctx, 31, 0x141958u);
    ctx->pc = 0x141954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141950u;
            // 0x141954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141958u; }
        if (ctx->pc != 0x141958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141958u; }
        if (ctx->pc != 0x141958u) { return; }
    }
    ctx->pc = 0x141958u;
label_141958:
    // 0x141958: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x141958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x14195c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x14195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x141960: 0xac230010  sw          $v1, 0x10($at)
    ctx->pc = 0x141960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16), GPR_U32(ctx, 3));
    // 0x141964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141968: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x14196c: 0xaf828760  sw          $v0, -0x78A0($gp)
    ctx->pc = 0x14196cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
    // 0x141970: 0x24841200  addiu       $a0, $a0, 0x1200
    ctx->pc = 0x141970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
    // 0x141974: 0xaf808850  sw          $zero, -0x77B0($gp)
    ctx->pc = 0x141974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936656), GPR_U32(ctx, 0));
    // 0x141978: 0xc04107a  jal         func_1041E8
    ctx->pc = 0x141978u;
    SET_GPR_U32(ctx, 31, 0x141980u);
    ctx->pc = 0x14197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141978u;
            // 0x14197c: 0xaf808858  sw          $zero, -0x77A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E8u;
    if (runtime->hasFunction(0x1041E8u)) {
        auto targetFn = runtime->lookupFunction(0x1041E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141980u; }
        if (ctx->pc != 0x141980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncVCallback_0x1041e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141980u; }
        if (ctx->pc != 0x141980u) { return; }
    }
    ctx->pc = 0x141980u;
label_141980:
    // 0x141980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141984: 0xaf80885c  sw          $zero, -0x77A4($gp)
    ctx->pc = 0x141984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 0));
    // 0x141988: 0xc0440d8  jal         func_110360
    ctx->pc = 0x141988u;
    SET_GPR_U32(ctx, 31, 0x141990u);
    ctx->pc = 0x14198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141988u;
            // 0x14198c: 0xaf808860  sw          $zero, -0x77A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141990u; }
        if (ctx->pc != 0x141990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141990u; }
        if (ctx->pc != 0x141990u) { return; }
    }
    ctx->pc = 0x141990u;
label_141990:
    // 0x141990: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141998: 0xc040ca8  jal         func_1032A0
    ctx->pc = 0x141998u;
    SET_GPR_U32(ctx, 31, 0x1419A0u);
    ctx->pc = 0x14199Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141998u;
            // 0x14199c: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1032A0u;
    if (runtime->hasFunction(0x1032A0u)) {
        auto targetFn = runtime->lookupFunction(0x1032A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A0u; }
        if (ctx->pc != 0x1419A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x1032a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A0u; }
        if (ctx->pc != 0x1419A0u) { return; }
    }
    ctx->pc = 0x1419A0u;
label_1419a0:
    // 0x1419a0: 0x8f84876c  lw          $a0, -0x7894($gp)
    ctx->pc = 0x1419a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
    // 0x1419a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1419a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419a8: 0xc0412d8  jal         func_104B60
    ctx->pc = 0x1419A8u;
    SET_GPR_U32(ctx, 31, 0x1419B0u);
    ctx->pc = 0x1419ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1419A8u;
            // 0x1419ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104B60u;
    if (runtime->hasFunction(0x104B60u)) {
        auto targetFn = runtime->lookupFunction(0x104B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B0u; }
        if (ctx->pc != 0x1419B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x104b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B0u; }
        if (ctx->pc != 0x1419B0u) { return; }
    }
    ctx->pc = 0x1419B0u;
label_1419b0:
    // 0x1419b0: 0xc04c3ec  jal         func_130FB0
    ctx->pc = 0x1419B0u;
    SET_GPR_U32(ctx, 31, 0x1419B8u);
    ctx->pc = 0x130FB0u;
    if (runtime->hasFunction(0x130FB0u)) {
        auto targetFn = runtime->lookupFunction(0x130FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B8u; }
        if (ctx->pc != 0x1419B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateSinTable__Fv_0x130fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B8u; }
        if (ctx->pc != 0x1419B8u) { return; }
    }
    ctx->pc = 0x1419B8u;
label_1419b8:
    // 0x1419b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1419b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1419bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419c0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1419c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1419c4: 0x24844240  addiu       $a0, $a0, 0x4240
    ctx->pc = 0x1419c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
label_1419c8:
    // 0x1419c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1419c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419cc: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1419ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1419d0:
    // 0x1419d0: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1419d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1419d4: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x1419d4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1419d8: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419D8u;
    {
        const bool branch_taken_0x1419d8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1419DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1419D8u;
            // 0x1419dc: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419d8) {
            ctx->pc = 0x1419E8u;
            goto label_1419e8;
        }
    }
    ctx->pc = 0x1419E0u;
    // 0x1419e0: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x1419e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1419e4: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x1419e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_1419e8:
    // 0x1419e8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1419ec: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x1419ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1419f0: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x1419f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1419f4: 0x810a0001  lb          $t2, 0x1($t0)
    ctx->pc = 0x1419f4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1419f8: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419F8u;
    {
        const bool branch_taken_0x1419f8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1419FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1419F8u;
            // 0x1419fc: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419f8) {
            ctx->pc = 0x141A08u;
            goto label_141a08;
        }
    }
    ctx->pc = 0x141A00u;
    // 0x141a00: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141a04: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141a04u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141a08:
    // 0x141a08: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141a0c: 0x250c0002  addiu       $t4, $t0, 0x2
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x141a10: 0xa1690000  sb          $t1, 0x0($t3)
    ctx->pc = 0x141a10u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141a14: 0x810a0002  lb          $t2, 0x2($t0)
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x141a18: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A18u;
    {
        const bool branch_taken_0x141a18 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x141A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A18u;
            // 0x141a1c: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a18) {
            ctx->pc = 0x141A28u;
            goto label_141a28;
        }
    }
    ctx->pc = 0x141A20u;
    // 0x141a20: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141a24: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141a28:
    // 0x141a28: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141a2c: 0x250b0003  addiu       $t3, $t0, 0x3
    ctx->pc = 0x141a2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x141a30: 0xa1890000  sb          $t1, 0x0($t4)
    ctx->pc = 0x141a30u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141a34: 0x810a0003  lb          $t2, 0x3($t0)
    ctx->pc = 0x141a34u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x141a38: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A38u;
    {
        const bool branch_taken_0x141a38 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x141A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A38u;
            // 0x141a3c: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a38) {
            ctx->pc = 0x141A48u;
            goto label_141a48;
        }
    }
    ctx->pc = 0x141A40u;
    // 0x141a40: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141a44: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141a48:
    // 0x141a48: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141a4c: 0x250c0004  addiu       $t4, $t0, 0x4
    ctx->pc = 0x141a4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x141a50: 0xa1690000  sb          $t1, 0x0($t3)
    ctx->pc = 0x141a50u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141a54: 0x810a0004  lb          $t2, 0x4($t0)
    ctx->pc = 0x141a54u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x141a58: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A58u;
    {
        const bool branch_taken_0x141a58 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x141A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A58u;
            // 0x141a5c: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a58) {
            ctx->pc = 0x141A68u;
            goto label_141a68;
        }
    }
    ctx->pc = 0x141A60u;
    // 0x141a60: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141a64: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141a68:
    // 0x141a68: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141a6c: 0x250b0005  addiu       $t3, $t0, 0x5
    ctx->pc = 0x141a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x141a70: 0xa1890000  sb          $t1, 0x0($t4)
    ctx->pc = 0x141a70u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141a74: 0x810a0005  lb          $t2, 0x5($t0)
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x141a78: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A78u;
    {
        const bool branch_taken_0x141a78 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x141A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A78u;
            // 0x141a7c: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a78) {
            ctx->pc = 0x141A88u;
            goto label_141a88;
        }
    }
    ctx->pc = 0x141A80u;
    // 0x141a80: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141a84: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141a84u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141a88:
    // 0x141a88: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141a8c: 0x250c0006  addiu       $t4, $t0, 0x6
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x141a90: 0xa1690000  sb          $t1, 0x0($t3)
    ctx->pc = 0x141a90u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141a94: 0x810a0006  lb          $t2, 0x6($t0)
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x141a98: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A98u;
    {
        const bool branch_taken_0x141a98 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x141A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A98u;
            // 0x141a9c: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a98) {
            ctx->pc = 0x141AA8u;
            goto label_141aa8;
        }
    }
    ctx->pc = 0x141AA0u;
    // 0x141aa0: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x141aa4: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_141aa8:
    // 0x141aa8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x141aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x141aac: 0x250a0007  addiu       $t2, $t0, 0x7
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x141ab0: 0xa1890000  sb          $t1, 0x0($t4)
    ctx->pc = 0x141ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x141ab4: 0x81090007  lb          $t1, 0x7($t0)
    ctx->pc = 0x141ab4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x141ab8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141AB8u;
    {
        const bool branch_taken_0x141ab8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x141ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AB8u;
            // 0x141abc: 0x94043  sra         $t0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ab8) {
            ctx->pc = 0x141AC8u;
            goto label_141ac8;
        }
    }
    ctx->pc = 0x141AC0u;
    // 0x141ac0: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x141ac4: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x141ac4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_141ac8:
    // 0x141ac8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x141ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x141acc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x141accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x141ad0: 0xa1480000  sb          $t0, 0x0($t2)
    ctx->pc = 0x141ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x141ad4: 0x28c80010  slti        $t0, $a2, 0x10
    ctx->pc = 0x141ad4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x141ad8: 0x1500ffbd  bnez        $t0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x141AD8u;
    {
        const bool branch_taken_0x141ad8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x141ad8) {
            ctx->pc = 0x1419D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1419d0;
        }
    }
    ctx->pc = 0x141AE0u;
    // 0x141ae0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141ae4: 0x18a0ffb8  blez        $a1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x141AE4u;
    {
        const bool branch_taken_0x141ae4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x141AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AE4u;
            // 0x141ae8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ae4) {
            ctx->pc = 0x1419C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1419c8;
        }
    }
    ctx->pc = 0x141AECu;
    // 0x141aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x141af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x141af4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x141af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x141afc: 0x278c8848  addiu       $t4, $gp, -0x77B8
    ctx->pc = 0x141afcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936648));
    // 0x141b00: 0x24844240  addiu       $a0, $a0, 0x4240
    ctx->pc = 0x141b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
label_141b04:
    // 0x141b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x141b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b10: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x141b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_141b14:
    // 0x141b14: 0x0  nop
    ctx->pc = 0x141b14u;
    // NOP
    // 0x141b18: 0xe35821  addu        $t3, $a3, $v1
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x141b1c: 0x24ed0001  addiu       $t5, $a3, 0x1
    ctx->pc = 0x141b1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x141b20: 0x81780002  lb          $t8, 0x2($t3)
    ctx->pc = 0x141b20u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x141b24: 0xdc880  sll         $t9, $t5, 2
    ctx->pc = 0x141b24u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x141b28: 0x81700003  lb          $s0, 0x3($t3)
    ctx->pc = 0x141b28u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x141b2c: 0x816e0004  lb          $t6, 0x4($t3)
    ctx->pc = 0x141b2cu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x141b30: 0x24ed0002  addiu       $t5, $a3, 0x2
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x141b34: 0x81730000  lb          $s3, 0x0($t3)
    ctx->pc = 0x141b34u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x141b38: 0xd8880  sll         $s1, $t5, 2
    ctx->pc = 0x141b38u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x141b3c: 0x81720001  lb          $s2, 0x1($t3)
    ctx->pc = 0x141b3cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x141b40: 0x24ed0003  addiu       $t5, $a3, 0x3
    ctx->pc = 0x141b40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x141b44: 0xd7880  sll         $t7, $t5, 2
    ctx->pc = 0x141b44u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x141b48: 0x24ed0004  addiu       $t5, $a3, 0x4
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x141b4c: 0x33180007  andi        $t8, $t8, 0x7
    ctx->pc = 0x141b4cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)7);
    // 0x141b50: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x141b50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x141b54: 0x2388804  sllv        $s1, $t8, $s1
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 17) & 0x1F));
    // 0x141b58: 0x1f07804  sllv        $t7, $s0, $t7
    ctx->pc = 0x141b58u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 15) & 0x1F));
    // 0x141b5c: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x141b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x141b60: 0x31ce0007  andi        $t6, $t6, 0x7
    ctx->pc = 0x141b60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x141b64: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x141b64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x141b68: 0x1139804  sllv        $s3, $s3, $t0
    ctx->pc = 0x141b68u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 8) & 0x1F));
    // 0x141b6c: 0x1ae6804  sllv        $t5, $t6, $t5
    ctx->pc = 0x141b6cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x141b70: 0x81700006  lb          $s0, 0x6($t3)
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x141b74: 0x32520007  andi        $s2, $s2, 0x7
    ctx->pc = 0x141b74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x141b78: 0x816e0007  lb          $t6, 0x7($t3)
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x141b7c: 0x332c804  sllv        $t9, $s2, $t9
    ctx->pc = 0x141b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 25) & 0x1F));
    // 0x141b80: 0x81780005  lb          $t8, 0x5($t3)
    ctx->pc = 0x141b80u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x141b84: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x141b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x141b88: 0xd93025  or          $a2, $a2, $t9
    ctx->pc = 0x141b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 25));
    // 0x141b8c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x141b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x141b90: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x141b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x141b94: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x141b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x141b98: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x141b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x141b9c: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x141b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x141ba0: 0x24ed0005  addiu       $t5, $a3, 0x5
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x141ba4: 0x31ce0007  andi        $t6, $t6, 0x7
    ctx->pc = 0x141ba4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x141ba8: 0x24eb0006  addiu       $t3, $a3, 0x6
    ctx->pc = 0x141ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x141bac: 0xd8880  sll         $s1, $t5, 2
    ctx->pc = 0x141bacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x141bb0: 0xb7880  sll         $t7, $t3, 2
    ctx->pc = 0x141bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x141bb4: 0x24eb0007  addiu       $t3, $a3, 0x7
    ctx->pc = 0x141bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x141bb8: 0x1f07804  sllv        $t7, $s0, $t7
    ctx->pc = 0x141bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 15) & 0x1F));
    // 0x141bbc: 0xb6880  sll         $t5, $t3, 2
    ctx->pc = 0x141bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x141bc0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x141bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x141bc4: 0x330b0007  andi        $t3, $t8, 0x7
    ctx->pc = 0x141bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)7);
    // 0x141bc8: 0x1ae6804  sllv        $t5, $t6, $t5
    ctx->pc = 0x141bc8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x141bcc: 0x22b8804  sllv        $s1, $t3, $s1
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 17) & 0x1F));
    // 0x141bd0: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x141bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x141bd4: 0x28eb0010  slti        $t3, $a3, 0x10
    ctx->pc = 0x141bd4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x141bd8: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x141bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x141bdc: 0x1560ffcd  bnez        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x141BDCu;
    {
        const bool branch_taken_0x141bdc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x141BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BDCu;
            // 0x141be0: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bdc) {
            ctx->pc = 0x141B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141b14;
        }
    }
    ctx->pc = 0x141BE4u;
    // 0x141be4: 0x18a1821  addu        $v1, $t4, $t2
    ctx->pc = 0x141be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x141be8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141bec: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x141bf0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x141bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x141bf4: 0x18a0ffc3  blez        $a1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x141BF4u;
    {
        const bool branch_taken_0x141bf4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x141BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BF4u;
            // 0x141bf8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bf4) {
            ctx->pc = 0x141B04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141b04;
        }
    }
    ctx->pc = 0x141BFCu;
    // 0x141bfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c00: 0x93838848  lbu         $v1, -0x77B8($gp)
    ctx->pc = 0x141c00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936648)));
    // 0x141c04: 0x80244240  lb          $a0, 0x4240($at)
    ctx->pc = 0x141c04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16960)));
    // 0x141c08: 0x240efff8  addiu       $t6, $zero, -0x8
    ctx->pc = 0x141c08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x141c0c: 0x240dff8f  addiu       $t5, $zero, -0x71
    ctx->pc = 0x141c0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141c10: 0x6e4824  and         $t1, $v1, $t6
    ctx->pc = 0x141c10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x141c14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c18: 0x308a0007  andi        $t2, $a0, 0x7
    ctx->pc = 0x141c18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x141c1c: 0x80284241  lb          $t0, 0x4241($at)
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16961)));
    // 0x141c20: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x141c20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x141c24: 0xa3898848  sb          $t1, -0x77B8($gp)
    ctx->pc = 0x141c24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936648), (uint8_t)GPR_U32(ctx, 9));
    // 0x141c28: 0x938f8848  lbu         $t7, -0x77B8($gp)
    ctx->pc = 0x141c28u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936648)));
    // 0x141c2c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c30: 0x31080007  andi        $t0, $t0, 0x7
    ctx->pc = 0x141c30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x141c34: 0x80274242  lb          $a3, 0x4242($at)
    ctx->pc = 0x141c34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16962)));
    // 0x141c38: 0x88100  sll         $s0, $t0, 4
    ctx->pc = 0x141c38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x141c3c: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x141c3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x141c40: 0x1f08025  or          $s0, $t7, $s0
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x141c44: 0xa3908848  sb          $s0, -0x77B8($gp)
    ctx->pc = 0x141c44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936648), (uint8_t)GPR_U32(ctx, 16));
    // 0x141c48: 0x93918849  lbu         $s1, -0x77B7($gp)
    ctx->pc = 0x141c48u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936649)));
    // 0x141c4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c50: 0x30ec0007  andi        $t4, $a3, 0x7
    ctx->pc = 0x141c50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x141c54: 0x80264243  lb          $a2, 0x4243($at)
    ctx->pc = 0x141c54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16963)));
    // 0x141c58: 0x22e8824  and         $s1, $s1, $t6
    ctx->pc = 0x141c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x141c5c: 0x22c6025  or          $t4, $s1, $t4
    ctx->pc = 0x141c5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 17) | GPR_U64(ctx, 12));
    // 0x141c60: 0xa38c8849  sb          $t4, -0x77B7($gp)
    ctx->pc = 0x141c60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936649), (uint8_t)GPR_U32(ctx, 12));
    // 0x141c64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c68: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x141c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x141c6c: 0x80254244  lb          $a1, 0x4244($at)
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16964)));
    // 0x141c70: 0x65900  sll         $t3, $a2, 4
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x141c74: 0x93918849  lbu         $s1, -0x77B7($gp)
    ctx->pc = 0x141c74u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936649)));
    // 0x141c78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c7c: 0x30aa0007  andi        $t2, $a1, 0x7
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x141c80: 0x80244245  lb          $a0, 0x4245($at)
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16965)));
    // 0x141c84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c88: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x141c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x141c8c: 0x80234246  lb          $v1, 0x4246($at)
    ctx->pc = 0x141c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16966)));
    // 0x141c90: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x141c90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x141c94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141c98: 0x30680007  andi        $t0, $v1, 0x7
    ctx->pc = 0x141c98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x141c9c: 0x80274247  lb          $a3, 0x4247($at)
    ctx->pc = 0x141c9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16967)));
    // 0x141ca0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141ca4: 0x30e70007  andi        $a3, $a3, 0x7
    ctx->pc = 0x141ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x141ca8: 0x80264248  lb          $a2, 0x4248($at)
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16968)));
    // 0x141cac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x141cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x141cb0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cb4: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x141cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x141cb8: 0x80254249  lb          $a1, 0x4249($at)
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16969)));
    // 0x141cbc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cc0: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x141cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x141cc4: 0x8024424a  lb          $a0, 0x424A($at)
    ctx->pc = 0x141cc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16970)));
    // 0x141cc8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x141cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x141ccc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cd0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x141cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x141cd4: 0x8023424b  lb          $v1, 0x424B($at)
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16971)));
    // 0x141cd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cdc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x141cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x141ce0: 0x802f424c  lb          $t7, 0x424C($at)
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16972)));
    // 0x141ce4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141ce8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cec: 0x31f90007  andi        $t9, $t7, 0x7
    ctx->pc = 0x141cecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x141cf0: 0x8038424d  lb          $t8, 0x424D($at)
    ctx->pc = 0x141cf0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16973)));
    // 0x141cf4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141cf8: 0x330c0007  andi        $t4, $t8, 0x7
    ctx->pc = 0x141cf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)7);
    // 0x141cfc: 0x8030424e  lb          $s0, 0x424E($at)
    ctx->pc = 0x141cfcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16974)));
    // 0x141d00: 0xcc100  sll         $t8, $t4, 4
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x141d04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x141d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x141d08: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x141d08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x141d0c: 0x802f424f  lb          $t7, 0x424F($at)
    ctx->pc = 0x141d0cu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16975)));
    // 0x141d10: 0x31ec0007  andi        $t4, $t7, 0x7
    ctx->pc = 0x141d10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x141d14: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x141d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x141d18: 0x22d7824  and         $t7, $s1, $t5
    ctx->pc = 0x141d18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 13));
    // 0x141d1c: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x141d20: 0x1eb5825  or          $t3, $t7, $t3
    ctx->pc = 0x141d20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x141d24: 0x342100e0  ori         $at, $at, 0xE0
    ctx->pc = 0x141d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)224);
    // 0x141d28: 0xa38b8849  sb          $t3, -0x77B7($gp)
    ctx->pc = 0x141d28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936649), (uint8_t)GPR_U32(ctx, 11));
    // 0x141d2c: 0x938b884a  lbu         $t3, -0x77B6($gp)
    ctx->pc = 0x141d2cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936650)));
    // 0x141d30: 0x16e5824  and         $t3, $t3, $t6
    ctx->pc = 0x141d30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x141d34: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x141d34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x141d38: 0xa38a884a  sb          $t2, -0x77B6($gp)
    ctx->pc = 0x141d38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936650), (uint8_t)GPR_U32(ctx, 10));
    // 0x141d3c: 0x938a884a  lbu         $t2, -0x77B6($gp)
    ctx->pc = 0x141d3cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936650)));
    // 0x141d40: 0x14d5024  and         $t2, $t2, $t5
    ctx->pc = 0x141d40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x141d44: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x141d44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x141d48: 0xa389884a  sb          $t1, -0x77B6($gp)
    ctx->pc = 0x141d48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936650), (uint8_t)GPR_U32(ctx, 9));
    // 0x141d4c: 0x9389884b  lbu         $t1, -0x77B5($gp)
    ctx->pc = 0x141d4cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936651)));
    // 0x141d50: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x141d50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x141d54: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x141d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x141d58: 0xa388884b  sb          $t0, -0x77B5($gp)
    ctx->pc = 0x141d58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936651), (uint8_t)GPR_U32(ctx, 8));
    // 0x141d5c: 0x9388884b  lbu         $t0, -0x77B5($gp)
    ctx->pc = 0x141d5cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936651)));
    // 0x141d60: 0x10d4024  and         $t0, $t0, $t5
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x141d64: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x141d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x141d68: 0xa387884b  sb          $a3, -0x77B5($gp)
    ctx->pc = 0x141d68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936651), (uint8_t)GPR_U32(ctx, 7));
    // 0x141d6c: 0x9387884c  lbu         $a3, -0x77B4($gp)
    ctx->pc = 0x141d6cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936652)));
    // 0x141d70: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x141d74: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x141d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x141d78: 0xa386884c  sb          $a2, -0x77B4($gp)
    ctx->pc = 0x141d78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936652), (uint8_t)GPR_U32(ctx, 6));
    // 0x141d7c: 0x9386884c  lbu         $a2, -0x77B4($gp)
    ctx->pc = 0x141d7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936652)));
    // 0x141d80: 0xcd3024  and         $a2, $a2, $t5
    ctx->pc = 0x141d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
    // 0x141d84: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x141d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x141d88: 0xa385884c  sb          $a1, -0x77B4($gp)
    ctx->pc = 0x141d88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936652), (uint8_t)GPR_U32(ctx, 5));
    // 0x141d8c: 0x9385884d  lbu         $a1, -0x77B3($gp)
    ctx->pc = 0x141d8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936653)));
    // 0x141d90: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x141d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x141d94: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x141d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x141d98: 0xa384884d  sb          $a0, -0x77B3($gp)
    ctx->pc = 0x141d98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936653), (uint8_t)GPR_U32(ctx, 4));
    // 0x141d9c: 0x9384884d  lbu         $a0, -0x77B3($gp)
    ctx->pc = 0x141d9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936653)));
    // 0x141da0: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x141da4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x141da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x141da8: 0xa383884d  sb          $v1, -0x77B3($gp)
    ctx->pc = 0x141da8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936653), (uint8_t)GPR_U32(ctx, 3));
    // 0x141dac: 0x9383884e  lbu         $v1, -0x77B2($gp)
    ctx->pc = 0x141dacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936654)));
    // 0x141db0: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x141db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x141db4: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x141db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x141db8: 0xa383884e  sb          $v1, -0x77B2($gp)
    ctx->pc = 0x141db8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936654), (uint8_t)GPR_U32(ctx, 3));
    // 0x141dbc: 0x9383884e  lbu         $v1, -0x77B2($gp)
    ctx->pc = 0x141dbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936654)));
    // 0x141dc0: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x141dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x141dc4: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x141dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x141dc8: 0xa383884e  sb          $v1, -0x77B2($gp)
    ctx->pc = 0x141dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936654), (uint8_t)GPR_U32(ctx, 3));
    // 0x141dcc: 0x9383884f  lbu         $v1, -0x77B1($gp)
    ctx->pc = 0x141dccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936655)));
    // 0x141dd0: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x141dd4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x141dd8: 0xa383884f  sb          $v1, -0x77B1($gp)
    ctx->pc = 0x141dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936655), (uint8_t)GPR_U32(ctx, 3));
    // 0x141ddc: 0x9383884f  lbu         $v1, -0x77B1($gp)
    ctx->pc = 0x141ddcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936655)));
    // 0x141de0: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x141de4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x141de8: 0xa383884f  sb          $v1, -0x77B1($gp)
    ctx->pc = 0x141de8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936655), (uint8_t)GPR_U32(ctx, 3));
    // 0x141dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x141decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e00: 0x3e00008  jr          $ra
    ctx->pc = 0x141E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E00u;
            // 0x141e04: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141E08u;
}
