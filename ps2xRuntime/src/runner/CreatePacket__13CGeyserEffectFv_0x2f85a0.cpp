#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__13CGeyserEffectFv
// Address: 0x2f85a0 - 0x2f8818
void CreatePacket__13CGeyserEffectFv_0x2f85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__13CGeyserEffectFv_0x2f85a0");
#endif

    switch (ctx->pc) {
        case 0x2f85a0u: goto label_2f85a0;
        case 0x2f85a4u: goto label_2f85a4;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f85b0u: goto label_2f85b0;
        case 0x2f85b4u: goto label_2f85b4;
        case 0x2f85b8u: goto label_2f85b8;
        case 0x2f85bcu: goto label_2f85bc;
        case 0x2f85c0u: goto label_2f85c0;
        case 0x2f85c4u: goto label_2f85c4;
        case 0x2f85c8u: goto label_2f85c8;
        case 0x2f85ccu: goto label_2f85cc;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f85d4u: goto label_2f85d4;
        case 0x2f85d8u: goto label_2f85d8;
        case 0x2f85dcu: goto label_2f85dc;
        case 0x2f85e0u: goto label_2f85e0;
        case 0x2f85e4u: goto label_2f85e4;
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f85ecu: goto label_2f85ec;
        case 0x2f85f0u: goto label_2f85f0;
        case 0x2f85f4u: goto label_2f85f4;
        case 0x2f85f8u: goto label_2f85f8;
        case 0x2f85fcu: goto label_2f85fc;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8604u: goto label_2f8604;
        case 0x2f8608u: goto label_2f8608;
        case 0x2f860cu: goto label_2f860c;
        case 0x2f8610u: goto label_2f8610;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f8618u: goto label_2f8618;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f8620u: goto label_2f8620;
        case 0x2f8624u: goto label_2f8624;
        case 0x2f8628u: goto label_2f8628;
        case 0x2f862cu: goto label_2f862c;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f8634u: goto label_2f8634;
        case 0x2f8638u: goto label_2f8638;
        case 0x2f863cu: goto label_2f863c;
        case 0x2f8640u: goto label_2f8640;
        case 0x2f8644u: goto label_2f8644;
        case 0x2f8648u: goto label_2f8648;
        case 0x2f864cu: goto label_2f864c;
        case 0x2f8650u: goto label_2f8650;
        case 0x2f8654u: goto label_2f8654;
        case 0x2f8658u: goto label_2f8658;
        case 0x2f865cu: goto label_2f865c;
        case 0x2f8660u: goto label_2f8660;
        case 0x2f8664u: goto label_2f8664;
        case 0x2f8668u: goto label_2f8668;
        case 0x2f866cu: goto label_2f866c;
        case 0x2f8670u: goto label_2f8670;
        case 0x2f8674u: goto label_2f8674;
        case 0x2f8678u: goto label_2f8678;
        case 0x2f867cu: goto label_2f867c;
        case 0x2f8680u: goto label_2f8680;
        case 0x2f8684u: goto label_2f8684;
        case 0x2f8688u: goto label_2f8688;
        case 0x2f868cu: goto label_2f868c;
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8694u: goto label_2f8694;
        case 0x2f8698u: goto label_2f8698;
        case 0x2f869cu: goto label_2f869c;
        case 0x2f86a0u: goto label_2f86a0;
        case 0x2f86a4u: goto label_2f86a4;
        case 0x2f86a8u: goto label_2f86a8;
        case 0x2f86acu: goto label_2f86ac;
        case 0x2f86b0u: goto label_2f86b0;
        case 0x2f86b4u: goto label_2f86b4;
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86c0u: goto label_2f86c0;
        case 0x2f86c4u: goto label_2f86c4;
        case 0x2f86c8u: goto label_2f86c8;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86d8u: goto label_2f86d8;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86e0u: goto label_2f86e0;
        case 0x2f86e4u: goto label_2f86e4;
        case 0x2f86e8u: goto label_2f86e8;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86f0u: goto label_2f86f0;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f86f8u: goto label_2f86f8;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f8700u: goto label_2f8700;
        case 0x2f8704u: goto label_2f8704;
        case 0x2f8708u: goto label_2f8708;
        case 0x2f870cu: goto label_2f870c;
        case 0x2f8710u: goto label_2f8710;
        case 0x2f8714u: goto label_2f8714;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f871cu: goto label_2f871c;
        case 0x2f8720u: goto label_2f8720;
        case 0x2f8724u: goto label_2f8724;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8734u: goto label_2f8734;
        case 0x2f8738u: goto label_2f8738;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8740u: goto label_2f8740;
        case 0x2f8744u: goto label_2f8744;
        case 0x2f8748u: goto label_2f8748;
        case 0x2f874cu: goto label_2f874c;
        case 0x2f8750u: goto label_2f8750;
        case 0x2f8754u: goto label_2f8754;
        case 0x2f8758u: goto label_2f8758;
        case 0x2f875cu: goto label_2f875c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f8764u: goto label_2f8764;
        case 0x2f8768u: goto label_2f8768;
        case 0x2f876cu: goto label_2f876c;
        case 0x2f8770u: goto label_2f8770;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8778u: goto label_2f8778;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f8780u: goto label_2f8780;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8788u: goto label_2f8788;
        case 0x2f878cu: goto label_2f878c;
        case 0x2f8790u: goto label_2f8790;
        case 0x2f8794u: goto label_2f8794;
        case 0x2f8798u: goto label_2f8798;
        case 0x2f879cu: goto label_2f879c;
        case 0x2f87a0u: goto label_2f87a0;
        case 0x2f87a4u: goto label_2f87a4;
        case 0x2f87a8u: goto label_2f87a8;
        case 0x2f87acu: goto label_2f87ac;
        case 0x2f87b0u: goto label_2f87b0;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87b8u: goto label_2f87b8;
        case 0x2f87bcu: goto label_2f87bc;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87c4u: goto label_2f87c4;
        case 0x2f87c8u: goto label_2f87c8;
        case 0x2f87ccu: goto label_2f87cc;
        case 0x2f87d0u: goto label_2f87d0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87d8u: goto label_2f87d8;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87e0u: goto label_2f87e0;
        case 0x2f87e4u: goto label_2f87e4;
        case 0x2f87e8u: goto label_2f87e8;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f87f0u: goto label_2f87f0;
        case 0x2f87f4u: goto label_2f87f4;
        case 0x2f87f8u: goto label_2f87f8;
        case 0x2f87fcu: goto label_2f87fc;
        case 0x2f8800u: goto label_2f8800;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8808u: goto label_2f8808;
        case 0x2f880cu: goto label_2f880c;
        case 0x2f8810u: goto label_2f8810;
        case 0x2f8814u: goto label_2f8814;
        default: break;
    }

    ctx->pc = 0x2f85a0u;

label_2f85a0:
    // 0x2f85a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2f85a4:
    // 0x2f85a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f85a8:
    // 0x2f85a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f85a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f85ac:
    // 0x2f85ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f85acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f85b0:
    // 0x2f85b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f85b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f85b4:
    // 0x2f85b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f85b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f85b8:
    // 0x2f85b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f85bc:
    // 0x2f85bc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f85bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2f85c0:
    // 0x2f85c0: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_2f85c4:
    if (ctx->pc == 0x2F85C4u) {
        ctx->pc = 0x2F85C4u;
            // 0x2f85c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C8u;
        goto label_2f85c8;
    }
    ctx->pc = 0x2F85C0u;
    {
        const bool branch_taken_0x2f85c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85C0u;
            // 0x2f85c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85c0) {
            ctx->pc = 0x2F87F8u;
            goto label_2f87f8;
        }
    }
    ctx->pc = 0x2F85C8u;
label_2f85c8:
    // 0x2f85c8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2f85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2f85cc:
    // 0x2f85cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2f85d0:
    if (ctx->pc == 0x2F85D0u) {
        ctx->pc = 0x2F85D4u;
        goto label_2f85d4;
    }
    ctx->pc = 0x2F85CCu;
    {
        const bool branch_taken_0x2f85cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f85cc) {
            ctx->pc = 0x2F85DCu;
            goto label_2f85dc;
        }
    }
    ctx->pc = 0x2F85D4u;
label_2f85d4:
    // 0x2f85d4: 0x10000089  b           . + 4 + (0x89 << 2)
label_2f85d8:
    if (ctx->pc == 0x2F85D8u) {
        ctx->pc = 0x2F85D8u;
            // 0x2f85d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2F85DCu;
        goto label_2f85dc;
    }
    ctx->pc = 0x2F85D4u;
    {
        const bool branch_taken_0x2f85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85D4u;
            // 0x2f85d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85d4) {
            ctx->pc = 0x2F87FCu;
            goto label_2f87fc;
        }
    }
    ctx->pc = 0x2F85DCu;
label_2f85dc:
    // 0x2f85dc: 0x8e99003c  lw          $t9, 0x3C($s4)
    ctx->pc = 0x2f85dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_2f85e0:
    // 0x2f85e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f85e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f85e4:
    // 0x2f85e4: 0x320f809  jalr        $t9
label_2f85e8:
    if (ctx->pc == 0x2F85E8u) {
        ctx->pc = 0x2F85E8u;
            // 0x2f85e8: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x2F85ECu;
        goto label_2f85ec;
    }
    ctx->pc = 0x2F85E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F85ECu);
        ctx->pc = 0x2F85E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85E4u;
            // 0x2f85e8: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F85ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F85ECu; }
            if (ctx->pc != 0x2F85ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2F85ECu;
label_2f85ec:
    // 0x2f85ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f85f0:
    // 0x2f85f0: 0xc051150  jal         func_144540
label_2f85f4:
    if (ctx->pc == 0x2F85F4u) {
        ctx->pc = 0x2F85F4u;
            // 0x2f85f4: 0x26910020  addiu       $s1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x2F85F8u;
        goto label_2f85f8;
    }
    ctx->pc = 0x2F85F0u;
    SET_GPR_U32(ctx, 31, 0x2F85F8u);
    ctx->pc = 0x2F85F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85F0u;
            // 0x2f85f4: 0x26910020  addiu       $s1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F85F8u; }
        if (ctx->pc != 0x2F85F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F85F8u; }
        if (ctx->pc != 0x2F85F8u) { return; }
    }
    ctx->pc = 0x2F85F8u;
label_2f85f8:
    // 0x2f85f8: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2f85f8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2f85fc:
    // 0x2f85fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f8600:
    // 0x2f8600: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2f8600u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2f8604:
    // 0x2f8604: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2f8604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f8608:
    // 0x2f8608: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x2f8608u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f860c:
    // 0x2f860c: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x2f860cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f8610:
    // 0x2f8610: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2f8610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f8614:
    // 0x2f8614: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2f8614u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f8618:
    // 0x2f8618: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2f861c:
    // 0x2f861c: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2f861cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2f8620:
    // 0x2f8620: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f8620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8624:
    // 0x2f8624: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2f8624u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
label_2f8628:
    // 0x2f8628: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2f8628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_2f862c:
    // 0x2f862c: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2f862cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2f8630:
    // 0x2f8630: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2f8630u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_2f8634:
    // 0x2f8634: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2f8634u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_2f8638:
    // 0x2f8638: 0xffaa0078  sd          $t2, 0x78($sp)
    ctx->pc = 0x2f8638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 10));
label_2f863c:
    // 0x2f863c: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2f863cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f8640:
    // 0x2f8640: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2f8640u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
label_2f8644:
    // 0x2f8644: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2f8644u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_2f8648:
    // 0x2f8648: 0xffaa0088  sd          $t2, 0x88($sp)
    ctx->pc = 0x2f8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 10));
label_2f864c:
    // 0x2f864c: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2f864cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_2f8650:
    // 0x2f8650: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2f8650u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
label_2f8654:
    // 0x2f8654: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2f8654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2f8658:
    // 0x2f8658: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x2f8658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
label_2f865c:
    // 0x2f865c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2f865cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2f8660:
    // 0x2f8660: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2f8660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2f8664:
    // 0x2f8664: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2f8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2f8668:
    // 0x2f8668: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2f8668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2f866c:
    // 0x2f866c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2f866cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2f8670:
    // 0x2f8670: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f8670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2f8674:
    // 0x2f8674: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f8674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2f8678:
    // 0x2f8678: 0xc04e290  jal         func_138A40
label_2f867c:
    if (ctx->pc == 0x2F867Cu) {
        ctx->pc = 0x2F867Cu;
            // 0x2f867c: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F8680u;
        goto label_2f8680;
    }
    ctx->pc = 0x2F8678u;
    SET_GPR_U32(ctx, 31, 0x2F8680u);
    ctx->pc = 0x2F867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8678u;
            // 0x2f867c: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8680u; }
        if (ctx->pc != 0x2F8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8680u; }
        if (ctx->pc != 0x2F8680u) { return; }
    }
    ctx->pc = 0x2F8680u;
label_2f8680:
    // 0x2f8680: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f8684:
    // 0x2f8684: 0xc04e25c  jal         func_138970
label_2f8688:
    if (ctx->pc == 0x2F8688u) {
        ctx->pc = 0x2F8688u;
            // 0x2f8688: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F868Cu;
        goto label_2f868c;
    }
    ctx->pc = 0x2F8684u;
    SET_GPR_U32(ctx, 31, 0x2F868Cu);
    ctx->pc = 0x2F8688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8684u;
            // 0x2f8688: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F868Cu; }
        if (ctx->pc != 0x2F868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F868Cu; }
        if (ctx->pc != 0x2F868Cu) { return; }
    }
    ctx->pc = 0x2F868Cu;
label_2f868c:
    // 0x2f868c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8690:
    // 0x2f8690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8694:
    // 0x2f8694: 0xc04ec68  jal         func_13B1A0
label_2f8698:
    if (ctx->pc == 0x2F8698u) {
        ctx->pc = 0x2F8698u;
            // 0x2f8698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F869Cu;
        goto label_2f869c;
    }
    ctx->pc = 0x2F8694u;
    SET_GPR_U32(ctx, 31, 0x2F869Cu);
    ctx->pc = 0x2F8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8694u;
            // 0x2f8698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F869Cu; }
        if (ctx->pc != 0x2F869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F869Cu; }
        if (ctx->pc != 0x2F869Cu) { return; }
    }
    ctx->pc = 0x2F869Cu;
label_2f869c:
    // 0x2f869c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f86a0:
    // 0x2f86a0: 0xc04ec80  jal         func_13B200
label_2f86a4:
    if (ctx->pc == 0x2F86A4u) {
        ctx->pc = 0x2F86A4u;
            // 0x2f86a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F86A8u;
        goto label_2f86a8;
    }
    ctx->pc = 0x2F86A0u;
    SET_GPR_U32(ctx, 31, 0x2F86A8u);
    ctx->pc = 0x2F86A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F86A0u;
            // 0x2f86a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86A8u; }
        if (ctx->pc != 0x2F86A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86A8u; }
        if (ctx->pc != 0x2F86A8u) { return; }
    }
    ctx->pc = 0x2F86A8u;
label_2f86a8:
    // 0x2f86a8: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2f86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2f86ac:
    // 0x2f86ac: 0xc04ecbc  jal         func_13B2F0
label_2f86b0:
    if (ctx->pc == 0x2F86B0u) {
        ctx->pc = 0x2F86B0u;
            // 0x2f86b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F86B4u;
        goto label_2f86b4;
    }
    ctx->pc = 0x2F86ACu;
    SET_GPR_U32(ctx, 31, 0x2F86B4u);
    ctx->pc = 0x2F86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F86ACu;
            // 0x2f86b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86B4u; }
        if (ctx->pc != 0x2F86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86B4u; }
        if (ctx->pc != 0x2F86B4u) { return; }
    }
    ctx->pc = 0x2F86B4u;
label_2f86b4:
    // 0x2f86b4: 0xc04ecd8  jal         func_13B360
label_2f86b8:
    if (ctx->pc == 0x2F86B8u) {
        ctx->pc = 0x2F86B8u;
            // 0x2f86b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F86BCu;
        goto label_2f86bc;
    }
    ctx->pc = 0x2F86B4u;
    SET_GPR_U32(ctx, 31, 0x2F86BCu);
    ctx->pc = 0x2F86B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F86B4u;
            // 0x2f86b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86BCu; }
        if (ctx->pc != 0x2F86BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86BCu; }
        if (ctx->pc != 0x2F86BCu) { return; }
    }
    ctx->pc = 0x2F86BCu;
label_2f86bc:
    // 0x2f86bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2f86c0:
    // 0x2f86c0: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2f86c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2f86c4:
    // 0x2f86c4: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
label_2f86c8:
    // 0x2f86c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2f86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_2f86cc:
    // 0x2f86cc: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2f86ccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f86d0:
    // 0x2f86d0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x2f86d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f86d4:
    // 0x2f86d4: 0x24c69360  addiu       $a2, $a2, -0x6CA0
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939488));
label_2f86d8:
    // 0x2f86d8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f86dc:
    // 0x2f86dc: 0x2484cfa0  addiu       $a0, $a0, -0x3060
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954912));
label_2f86e0:
    // 0x2f86e0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f86e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f86e4:
    // 0x2f86e4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2f86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f86e8:
    // 0x2f86e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f86e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f86ec:
    // 0x2f86ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f86ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f86f0:
    // 0x2f86f0: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x2f86f0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_2f86f4:
    // 0x2f86f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2f86f8:
    // 0x2f86f8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x2f86f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f86fc:
    // 0x2f86fc: 0x2442cfb0  addiu       $v0, $v0, -0x3050
    ctx->pc = 0x2f86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
label_2f8700:
    // 0x2f8700: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x2f8700u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_2f8704:
    // 0x2f8704: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2f8704u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8708:
    // 0x2f8708: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2f8708u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2f870c:
    // 0x2f870c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f870cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8710:
    // 0x2f8710: 0x10000031  b           . + 4 + (0x31 << 2)
label_2f8714:
    if (ctx->pc == 0x2F8714u) {
        ctx->pc = 0x2F8714u;
            // 0x2f8714: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2F8718u;
        goto label_2f8718;
    }
    ctx->pc = 0x2F8710u;
    {
        const bool branch_taken_0x2f8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8710u;
            // 0x2f8714: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8710) {
            ctx->pc = 0x2F87D8u;
            goto label_2f87d8;
        }
    }
    ctx->pc = 0x2F8718u;
label_2f8718:
    // 0x2f8718: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2f8718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2f871c:
    // 0x2f871c: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x2f871cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2f8720:
    // 0x2f8720: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2f8724:
    // 0x2f8724: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2f8728:
    if (ctx->pc == 0x2F8728u) {
        ctx->pc = 0x2F872Cu;
        goto label_2f872c;
    }
    ctx->pc = 0x2F8724u;
    {
        const bool branch_taken_0x2f8724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8724) {
            ctx->pc = 0x2F87CCu;
            goto label_2f87cc;
        }
    }
    ctx->pc = 0x2F872Cu;
label_2f872c:
    // 0x2f872c: 0xc047a42  jal         func_11E908
label_2f8730:
    if (ctx->pc == 0x2F8730u) {
        ctx->pc = 0x2F8730u;
            // 0x2f8730: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F8734u;
        goto label_2f8734;
    }
    ctx->pc = 0x2F872Cu;
    SET_GPR_U32(ctx, 31, 0x2F8734u);
    ctx->pc = 0x2F8730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F872Cu;
            // 0x2f8730: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8734u; }
        if (ctx->pc != 0x2F8734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8734u; }
        if (ctx->pc != 0x2F8734u) { return; }
    }
    ctx->pc = 0x2F8734u;
label_2f8734:
    // 0x2f8734: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x2f8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8738:
    // 0x2f8738: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x2f8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f873c:
    // 0x2f873c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2f873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8740:
    // 0x2f8740: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f8740u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f8744:
    // 0x2f8744: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f8744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f8748:
    // 0x2f8748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f8748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f874c:
    // 0x2f874c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2f874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2f8750:
    // 0x2f8750: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2f8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8754:
    // 0x2f8754: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2f8754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2f8758:
    // 0x2f8758: 0xc047a42  jal         func_11E908
label_2f875c:
    if (ctx->pc == 0x2F875Cu) {
        ctx->pc = 0x2F875Cu;
            // 0x2f875c: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F8760u;
        goto label_2f8760;
    }
    ctx->pc = 0x2F8758u;
    SET_GPR_U32(ctx, 31, 0x2F8760u);
    ctx->pc = 0x2F875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8758u;
            // 0x2f875c: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8760u; }
        if (ctx->pc != 0x2F8760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8760u; }
        if (ctx->pc != 0x2F8760u) { return; }
    }
    ctx->pc = 0x2F8760u;
label_2f8760:
    // 0x2f8760: 0xc6450024  lwc1        $f5, 0x24($s2)
    ctx->pc = 0x2f8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f8764:
    // 0x2f8764: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2f8764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_2f8768:
    // 0x2f8768: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x2f8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f876c:
    // 0x2f876c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f8770:
    // 0x2f8770: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2f8770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8774:
    // 0x2f8774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8778:
    // 0x2f8778: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f8778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f877c:
    // 0x2f877c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2f877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f8780:
    // 0x2f8780: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2f8780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f8784:
    // 0x2f8784: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2f8784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f8788:
    // 0x2f8788: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f8788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2f878c:
    // 0x2f878c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f8790:
    // 0x2f8790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8794:
    // 0x2f8794: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f8794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f8798:
    // 0x2f8798: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2f8798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2f879c:
    // 0x2f879c: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x2f879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_2f87a0:
    // 0x2f87a0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2f87a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2f87a4:
    // 0x2f87a4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2f87a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2f87a8:
    // 0x2f87a8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2f87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2f87ac:
    // 0x2f87ac: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2f87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f87b0:
    // 0x2f87b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f87b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f87b4:
    // 0x2f87b4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2f87b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f87b8:
    // 0x2f87b8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x2f87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f87bc:
    // 0x2f87bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f87bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f87c0:
    // 0x2f87c0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f87c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f87c4:
    // 0x2f87c4: 0xc04ed64  jal         func_13B590
label_2f87c8:
    if (ctx->pc == 0x2F87C8u) {
        ctx->pc = 0x2F87C8u;
            // 0x2f87c8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x2F87CCu;
        goto label_2f87cc;
    }
    ctx->pc = 0x2F87C4u;
    SET_GPR_U32(ctx, 31, 0x2F87CCu);
    ctx->pc = 0x2F87C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87C4u;
            // 0x2f87c8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87CCu; }
        if (ctx->pc != 0x2F87CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87CCu; }
        if (ctx->pc != 0x2F87CCu) { return; }
    }
    ctx->pc = 0x2F87CCu;
label_2f87cc:
    // 0x2f87cc: 0x0  nop
    ctx->pc = 0x2f87ccu;
    // NOP
label_2f87d0:
    // 0x2f87d0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x2f87d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2f87d4:
    // 0x2f87d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f87d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f87d8:
    // 0x2f87d8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2f87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2f87dc:
    // 0x2f87dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f87dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f87e0:
    // 0x2f87e0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_2f87e4:
    if (ctx->pc == 0x2F87E4u) {
        ctx->pc = 0x2F87E8u;
        goto label_2f87e8;
    }
    ctx->pc = 0x2F87E0u;
    {
        const bool branch_taken_0x2f87e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f87e0) {
            ctx->pc = 0x2F8718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8718;
        }
    }
    ctx->pc = 0x2F87E8u;
label_2f87e8:
    // 0x2f87e8: 0xc04edb0  jal         func_13B6C0
label_2f87ec:
    if (ctx->pc == 0x2F87ECu) {
        ctx->pc = 0x2F87ECu;
            // 0x2f87ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F87F0u;
        goto label_2f87f0;
    }
    ctx->pc = 0x2F87E8u;
    SET_GPR_U32(ctx, 31, 0x2F87F0u);
    ctx->pc = 0x2F87ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87E8u;
            // 0x2f87ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87F0u; }
        if (ctx->pc != 0x2F87F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87F0u; }
        if (ctx->pc != 0x2F87F0u) { return; }
    }
    ctx->pc = 0x2F87F0u;
label_2f87f0:
    // 0x2f87f0: 0xc04edfc  jal         func_13B7F0
label_2f87f4:
    if (ctx->pc == 0x2F87F4u) {
        ctx->pc = 0x2F87F4u;
            // 0x2f87f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F87F8u;
        goto label_2f87f8;
    }
    ctx->pc = 0x2F87F0u;
    SET_GPR_U32(ctx, 31, 0x2F87F8u);
    ctx->pc = 0x2F87F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F87F0u;
            // 0x2f87f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87F8u; }
        if (ctx->pc != 0x2F87F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F87F8u; }
        if (ctx->pc != 0x2F87F8u) { return; }
    }
    ctx->pc = 0x2F87F8u;
label_2f87f8:
    // 0x2f87f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f87f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f87fc:
    // 0x2f87fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f87fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8800:
    // 0x2f8800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8804:
    // 0x2f8804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8808:
    // 0x2f8808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f880c:
    // 0x2f880c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f880cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8810:
    // 0x2f8810: 0x3e00008  jr          $ra
label_2f8814:
    if (ctx->pc == 0x2F8814u) {
        ctx->pc = 0x2F8814u;
            // 0x2f8814: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2F8818u;
        goto label_fallthrough_0x2f8810;
    }
    ctx->pc = 0x2F8810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8810u;
            // 0x2f8814: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8810:
    ctx->pc = 0x2F8818u;
}
