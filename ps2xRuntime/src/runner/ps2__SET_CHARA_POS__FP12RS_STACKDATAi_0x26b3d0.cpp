#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_POS__FP12RS_STACKDATAi
// Address: 0x26b3d0 - 0x26b538
void ps2__SET_CHARA_POS__FP12RS_STACKDATAi_0x26b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_POS__FP12RS_STACKDATAi_0x26b3d0");
#endif

    switch (ctx->pc) {
        case 0x26b3d0u: goto label_26b3d0;
        case 0x26b3d4u: goto label_26b3d4;
        case 0x26b3d8u: goto label_26b3d8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b3e4u: goto label_26b3e4;
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        default: break;
    }

    ctx->pc = 0x26b3d0u;

label_26b3d0:
    // 0x26b3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26b3d4:
    // 0x26b3d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b3d8:
    // 0x26b3d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26b3dc:
    // 0x26b3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26b3e0:
    // 0x26b3e0: 0x10a2003b  beq         $a1, $v0, . + 4 + (0x3B << 2)
label_26b3e4:
    if (ctx->pc == 0x26B3E4u) {
        ctx->pc = 0x26B3E4u;
            // 0x26b3e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26B3E8u;
        goto label_26b3e8;
    }
    ctx->pc = 0x26B3E0u;
    {
        const bool branch_taken_0x26b3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3E0u;
            // 0x26b3e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3e0) {
            ctx->pc = 0x26B4D0u;
            goto label_26b4d0;
        }
    }
    ctx->pc = 0x26B3E8u;
label_26b3e8:
    // 0x26b3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b3ec:
    // 0x26b3ec: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26b3f0:
    if (ctx->pc == 0x26B3F0u) {
        ctx->pc = 0x26B3F4u;
        goto label_26b3f4;
    }
    ctx->pc = 0x26B3ECu;
    {
        const bool branch_taken_0x26b3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b3ec) {
            ctx->pc = 0x26B3FCu;
            goto label_26b3fc;
        }
    }
    ctx->pc = 0x26B3F4u;
label_26b3f4:
    // 0x26b3f4: 0x10000048  b           . + 4 + (0x48 << 2)
label_26b3f8:
    if (ctx->pc == 0x26B3F8u) {
        ctx->pc = 0x26B3F8u;
            // 0x26b3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B3FCu;
        goto label_26b3fc;
    }
    ctx->pc = 0x26B3F4u;
    {
        const bool branch_taken_0x26b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3F4u;
            // 0x26b3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3f4) {
            ctx->pc = 0x26B518u;
            goto label_26b518;
        }
    }
    ctx->pc = 0x26B3FCu;
label_26b3fc:
    // 0x26b3fc: 0xc097e18  jal         func_25F860
label_26b400:
    if (ctx->pc == 0x26B400u) {
        ctx->pc = 0x26B404u;
        goto label_26b404;
    }
    ctx->pc = 0x26B3FCu;
    SET_GPR_U32(ctx, 31, 0x26B404u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B404u; }
        if (ctx->pc != 0x26B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B404u; }
        if (ctx->pc != 0x26B404u) { return; }
    }
    ctx->pc = 0x26B404u;
label_26b404:
    // 0x26b404: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_26b408:
    // 0x26b408: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26b408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_26b40c:
    // 0x26b40c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b410:
    if (ctx->pc == 0x26B410u) {
        ctx->pc = 0x26B410u;
            // 0x26b410: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x26B414u;
        goto label_26b414;
    }
    ctx->pc = 0x26B40Cu;
    {
        const bool branch_taken_0x26b40c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B40Cu;
            // 0x26b410: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b40c) {
            ctx->pc = 0x26B41Cu;
            goto label_26b41c;
        }
    }
    ctx->pc = 0x26B414u;
label_26b414:
    // 0x26b414: 0x10000018  b           . + 4 + (0x18 << 2)
label_26b418:
    if (ctx->pc == 0x26B418u) {
        ctx->pc = 0x26B418u;
            // 0x26b418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B41Cu;
        goto label_26b41c;
    }
    ctx->pc = 0x26B414u;
    {
        const bool branch_taken_0x26b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B414u;
            // 0x26b418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b414) {
            ctx->pc = 0x26B478u;
            goto label_26b478;
        }
    }
    ctx->pc = 0x26B41Cu;
label_26b41c:
    // 0x26b41c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_26b420:
    // 0x26b420: 0x1000000b  b           . + 4 + (0xB << 2)
label_26b424:
    if (ctx->pc == 0x26B424u) {
        ctx->pc = 0x26B424u;
            // 0x26b424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B428u;
        goto label_26b428;
    }
    ctx->pc = 0x26B420u;
    {
        const bool branch_taken_0x26b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B420u;
            // 0x26b424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b420) {
            ctx->pc = 0x26B450u;
            goto label_26b450;
        }
    }
    ctx->pc = 0x26B428u;
label_26b428:
    // 0x26b428: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b42c:
    // 0x26b42c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_26b430:
    if (ctx->pc == 0x26B430u) {
        ctx->pc = 0x26B434u;
        goto label_26b434;
    }
    ctx->pc = 0x26B42Cu;
    {
        const bool branch_taken_0x26b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b42c) {
            ctx->pc = 0x26B45Cu;
            goto label_26b45c;
        }
    }
    ctx->pc = 0x26B434u;
label_26b434:
    // 0x26b434: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26b438:
    // 0x26b438: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_26b43c:
    if (ctx->pc == 0x26B43Cu) {
        ctx->pc = 0x26B440u;
        goto label_26b440;
    }
    ctx->pc = 0x26B438u;
    {
        const bool branch_taken_0x26b438 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b438) {
            ctx->pc = 0x26B448u;
            goto label_26b448;
        }
    }
    ctx->pc = 0x26B440u;
label_26b440:
    // 0x26b440: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b444:
    if (ctx->pc == 0x26B444u) {
        ctx->pc = 0x26B444u;
            // 0x26b444: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x26B448u;
        goto label_26b448;
    }
    ctx->pc = 0x26B440u;
    {
        const bool branch_taken_0x26b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B440u;
            // 0x26b444: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b440) {
            ctx->pc = 0x26B450u;
            goto label_26b450;
        }
    }
    ctx->pc = 0x26B448u;
label_26b448:
    // 0x26b448: 0x1000000b  b           . + 4 + (0xB << 2)
label_26b44c:
    if (ctx->pc == 0x26B44Cu) {
        ctx->pc = 0x26B44Cu;
            // 0x26b44c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B450u;
        goto label_26b450;
    }
    ctx->pc = 0x26B448u;
    {
        const bool branch_taken_0x26b448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B448u;
            // 0x26b44c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b448) {
            ctx->pc = 0x26B478u;
            goto label_26b478;
        }
    }
    ctx->pc = 0x26B450u;
label_26b450:
    // 0x26b450: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26b450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26b454:
    // 0x26b454: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_26b458:
    if (ctx->pc == 0x26B458u) {
        ctx->pc = 0x26B45Cu;
        goto label_26b45c;
    }
    ctx->pc = 0x26B454u;
    {
        const bool branch_taken_0x26b454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b454) {
            ctx->pc = 0x26B428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b428;
        }
    }
    ctx->pc = 0x26B45Cu;
label_26b45c:
    // 0x26b45c: 0x0  nop
    ctx->pc = 0x26b45cu;
    // NOP
label_26b460:
    // 0x26b460: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b464:
    if (ctx->pc == 0x26B464u) {
        ctx->pc = 0x26B464u;
            // 0x26b464: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B468u;
        goto label_26b468;
    }
    ctx->pc = 0x26B460u;
    {
        const bool branch_taken_0x26b460 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B460u;
            // 0x26b464: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b460) {
            ctx->pc = 0x26B470u;
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B468u;
label_26b468:
    // 0x26b468: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b46c:
    if (ctx->pc == 0x26B46Cu) {
        ctx->pc = 0x26B470u;
        goto label_26b470;
    }
    ctx->pc = 0x26B468u;
    {
        const bool branch_taken_0x26b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b468) {
            ctx->pc = 0x26B478u;
            goto label_26b478;
        }
    }
    ctx->pc = 0x26B470u;
label_26b470:
    // 0x26b470: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26b474:
    // 0x26b474: 0x0  nop
    ctx->pc = 0x26b474u;
    // NOP
label_26b478:
    // 0x26b478: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_26b47c:
    if (ctx->pc == 0x26B47Cu) {
        ctx->pc = 0x26B47Cu;
            // 0x26b47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B480u;
        goto label_26b480;
    }
    ctx->pc = 0x26B478u;
    {
        const bool branch_taken_0x26b478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B478u;
            // 0x26b47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b478) {
            ctx->pc = 0x26B488u;
            goto label_26b488;
        }
    }
    ctx->pc = 0x26B480u;
label_26b480:
    // 0x26b480: 0x10000028  b           . + 4 + (0x28 << 2)
label_26b484:
    if (ctx->pc == 0x26B484u) {
        ctx->pc = 0x26B484u;
            // 0x26b484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B488u;
        goto label_26b488;
    }
    ctx->pc = 0x26B480u;
    {
        const bool branch_taken_0x26b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B480u;
            // 0x26b484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b480) {
            ctx->pc = 0x26B524u;
            goto label_26b524;
        }
    }
    ctx->pc = 0x26B488u;
label_26b488:
    // 0x26b488: 0xc097f6c  jal         func_25FDB0
label_26b48c:
    if (ctx->pc == 0x26B48Cu) {
        ctx->pc = 0x26B48Cu;
            // 0x26b48c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B490u;
        goto label_26b490;
    }
    ctx->pc = 0x26B488u;
    SET_GPR_U32(ctx, 31, 0x26B490u);
    ctx->pc = 0x26B48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B488u;
            // 0x26b48c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B490u; }
        if (ctx->pc != 0x26B490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B490u; }
        if (ctx->pc != 0x26B490u) { return; }
    }
    ctx->pc = 0x26B490u;
label_26b490:
    // 0x26b490: 0xc09ac74  jal         func_26B1D0
label_26b494:
    if (ctx->pc == 0x26B494u) {
        ctx->pc = 0x26B494u;
            // 0x26b494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B498u;
        goto label_26b498;
    }
    ctx->pc = 0x26B490u;
    SET_GPR_U32(ctx, 31, 0x26B498u);
    ctx->pc = 0x26B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B490u;
            // 0x26b494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B498u; }
        if (ctx->pc != 0x26B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B498u; }
        if (ctx->pc != 0x26B498u) { return; }
    }
    ctx->pc = 0x26B498u;
label_26b498:
    // 0x26b498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b49c:
    if (ctx->pc == 0x26B49Cu) {
        ctx->pc = 0x26B49Cu;
            // 0x26b49c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4A0u;
        goto label_26b4a0;
    }
    ctx->pc = 0x26B498u;
    {
        const bool branch_taken_0x26b498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B498u;
            // 0x26b49c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b498) {
            ctx->pc = 0x26B4A8u;
            goto label_26b4a8;
        }
    }
    ctx->pc = 0x26B4A0u;
label_26b4a0:
    // 0x26b4a0: 0x10000020  b           . + 4 + (0x20 << 2)
label_26b4a4:
    if (ctx->pc == 0x26B4A4u) {
        ctx->pc = 0x26B4A4u;
            // 0x26b4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4A8u;
        goto label_26b4a8;
    }
    ctx->pc = 0x26B4A0u;
    {
        const bool branch_taken_0x26b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4A0u;
            // 0x26b4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4a0) {
            ctx->pc = 0x26B524u;
            goto label_26b524;
        }
    }
    ctx->pc = 0x26B4A8u;
label_26b4a8:
    // 0x26b4a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b4ac:
    // 0x26b4ac: 0xc097fa8  jal         func_25FEA0
label_26b4b0:
    if (ctx->pc == 0x26B4B0u) {
        ctx->pc = 0x26B4B0u;
            // 0x26b4b0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B4B4u;
        goto label_26b4b4;
    }
    ctx->pc = 0x26B4ACu;
    SET_GPR_U32(ctx, 31, 0x26B4B4u);
    ctx->pc = 0x26B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4ACu;
            // 0x26b4b0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4B4u; }
        if (ctx->pc != 0x26B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4B4u; }
        if (ctx->pc != 0x26B4B4u) { return; }
    }
    ctx->pc = 0x26B4B4u;
label_26b4b4:
    // 0x26b4b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b4b8:
    // 0x26b4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b4bc:
    // 0x26b4bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x26b4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_26b4c0:
    // 0x26b4c0: 0x320f809  jalr        $t9
label_26b4c4:
    if (ctx->pc == 0x26B4C4u) {
        ctx->pc = 0x26B4C4u;
            // 0x26b4c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B4C8u;
        goto label_26b4c8;
    }
    ctx->pc = 0x26B4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B4C8u);
        ctx->pc = 0x26B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4C0u;
            // 0x26b4c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B4C8u; }
            if (ctx->pc != 0x26B4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x26B4C8u;
label_26b4c8:
    // 0x26b4c8: 0x10000016  b           . + 4 + (0x16 << 2)
label_26b4cc:
    if (ctx->pc == 0x26B4CCu) {
        ctx->pc = 0x26B4CCu;
            // 0x26b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26B4D0u;
        goto label_26b4d0;
    }
    ctx->pc = 0x26B4C8u;
    {
        const bool branch_taken_0x26b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4C8u;
            // 0x26b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4c8) {
            ctx->pc = 0x26B524u;
            goto label_26b524;
        }
    }
    ctx->pc = 0x26B4D0u;
label_26b4d0:
    // 0x26b4d0: 0xc097e18  jal         func_25F860
label_26b4d4:
    if (ctx->pc == 0x26B4D4u) {
        ctx->pc = 0x26B4D4u;
            // 0x26b4d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B4D8u;
        goto label_26b4d8;
    }
    ctx->pc = 0x26B4D0u;
    SET_GPR_U32(ctx, 31, 0x26B4D8u);
    ctx->pc = 0x26B4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4D0u;
            // 0x26b4d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4D8u; }
        if (ctx->pc != 0x26B4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4D8u; }
        if (ctx->pc != 0x26B4D8u) { return; }
    }
    ctx->pc = 0x26B4D8u;
label_26b4d8:
    // 0x26b4d8: 0xc09ac74  jal         func_26B1D0
label_26b4dc:
    if (ctx->pc == 0x26B4DCu) {
        ctx->pc = 0x26B4DCu;
            // 0x26b4dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4E0u;
        goto label_26b4e0;
    }
    ctx->pc = 0x26B4D8u;
    SET_GPR_U32(ctx, 31, 0x26B4E0u);
    ctx->pc = 0x26B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4D8u;
            // 0x26b4dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4E0u; }
        if (ctx->pc != 0x26B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4E0u; }
        if (ctx->pc != 0x26B4E0u) { return; }
    }
    ctx->pc = 0x26B4E0u;
label_26b4e0:
    // 0x26b4e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b4e4:
    if (ctx->pc == 0x26B4E4u) {
        ctx->pc = 0x26B4E4u;
            // 0x26b4e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4E8u;
        goto label_26b4e8;
    }
    ctx->pc = 0x26B4E0u;
    {
        const bool branch_taken_0x26b4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4E0u;
            // 0x26b4e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4e0) {
            ctx->pc = 0x26B4F0u;
            goto label_26b4f0;
        }
    }
    ctx->pc = 0x26B4E8u;
label_26b4e8:
    // 0x26b4e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_26b4ec:
    if (ctx->pc == 0x26B4ECu) {
        ctx->pc = 0x26B4ECu;
            // 0x26b4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4F0u;
        goto label_26b4f0;
    }
    ctx->pc = 0x26B4E8u;
    {
        const bool branch_taken_0x26b4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4E8u;
            // 0x26b4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4e8) {
            ctx->pc = 0x26B524u;
            goto label_26b524;
        }
    }
    ctx->pc = 0x26B4F0u;
label_26b4f0:
    // 0x26b4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b4f4:
    // 0x26b4f4: 0xc097e34  jal         func_25F8D0
label_26b4f8:
    if (ctx->pc == 0x26B4F8u) {
        ctx->pc = 0x26B4F8u;
            // 0x26b4f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B4FCu;
        goto label_26b4fc;
    }
    ctx->pc = 0x26B4F4u;
    SET_GPR_U32(ctx, 31, 0x26B4FCu);
    ctx->pc = 0x26B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4F4u;
            // 0x26b4f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4FCu; }
        if (ctx->pc != 0x26B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4FCu; }
        if (ctx->pc != 0x26B4FCu) { return; }
    }
    ctx->pc = 0x26B4FCu;
label_26b4fc:
    // 0x26b4fc: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x26b4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_26b500:
    // 0x26b500: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x26b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26b504:
    // 0x26b504: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_26b508:
    // 0x26b508: 0x320f809  jalr        $t9
label_26b50c:
    if (ctx->pc == 0x26B50Cu) {
        ctx->pc = 0x26B50Cu;
            // 0x26b50c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B510u;
        goto label_26b510;
    }
    ctx->pc = 0x26B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B510u);
        ctx->pc = 0x26B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B508u;
            // 0x26b50c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B510u; }
            if (ctx->pc != 0x26B510u) { return; }
        }
        }
    }
    ctx->pc = 0x26B510u;
label_26b510:
    // 0x26b510: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b514:
    if (ctx->pc == 0x26B514u) {
        ctx->pc = 0x26B518u;
        goto label_26b518;
    }
    ctx->pc = 0x26B510u;
    {
        const bool branch_taken_0x26b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b510) {
            ctx->pc = 0x26B520u;
            goto label_26b520;
        }
    }
    ctx->pc = 0x26B518u;
label_26b518:
    // 0x26b518: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b51c:
    if (ctx->pc == 0x26B51Cu) {
        ctx->pc = 0x26B51Cu;
            // 0x26b51c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x26B520u;
        goto label_26b520;
    }
    ctx->pc = 0x26B518u;
    {
        const bool branch_taken_0x26b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B518u;
            // 0x26b51c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b518) {
            ctx->pc = 0x26B528u;
            goto label_26b528;
        }
    }
    ctx->pc = 0x26B520u;
label_26b520:
    // 0x26b520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b524:
    // 0x26b524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26b528:
    // 0x26b528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b52c:
    // 0x26b52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b530:
    // 0x26b530: 0x3e00008  jr          $ra
label_26b534:
    if (ctx->pc == 0x26B534u) {
        ctx->pc = 0x26B534u;
            // 0x26b534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26B538u;
        goto label_fallthrough_0x26b530;
    }
    ctx->pc = 0x26B530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B530u;
            // 0x26b534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b530:
    ctx->pc = 0x26B538u;
}
