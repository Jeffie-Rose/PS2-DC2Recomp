#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSndFileInfo__6CSceneFPci
// Address: 0x2a8320 - 0x2a87e0
void LoadSndFileInfo__6CSceneFPci_0x2a8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSndFileInfo__6CSceneFPci_0x2a8320");
#endif

    switch (ctx->pc) {
        case 0x2a8364u: goto label_2a8364;
        case 0x2a83e0u: goto label_2a83e0;
        case 0x2a83ecu: goto label_2a83ec;
        case 0x2a8414u: goto label_2a8414;
        case 0x2a8468u: goto label_2a8468;
        case 0x2a84b0u: goto label_2a84b0;
        case 0x2a84f8u: goto label_2a84f8;
        case 0x2a8540u: goto label_2a8540;
        case 0x2a8570u: goto label_2a8570;
        case 0x2a8594u: goto label_2a8594;
        case 0x2a85b0u: goto label_2a85b0;
        case 0x2a85c8u: goto label_2a85c8;
        case 0x2a85d0u: goto label_2a85d0;
        case 0x2a85e0u: goto label_2a85e0;
        case 0x2a8630u: goto label_2a8630;
        case 0x2a8668u: goto label_2a8668;
        case 0x2a86d0u: goto label_2a86d0;
        case 0x2a86e4u: goto label_2a86e4;
        case 0x2a86f0u: goto label_2a86f0;
        case 0x2a86fcu: goto label_2a86fc;
        case 0x2a872cu: goto label_2a872c;
        case 0x2a8744u: goto label_2a8744;
        default: break;
    }

    ctx->pc = 0x2a8320u;

    // 0x2a8320: 0x27bdee30  addiu       $sp, $sp, -0x11D0
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962736));
    // 0x2a8324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8328: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a8328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a832c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a832cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8330: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a8330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a8334: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a8338: 0xa6f021  addu        $fp, $a1, $a2
    ctx->pc = 0x2a8338u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a833c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a8340: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8344: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a8344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a8348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a834c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a8350: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a8350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a8358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a835c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8364:
    // 0x2a8364: 0xfd2021  addu        $a0, $a3, $sp
    ctx->pc = 0x2a8364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2a8368: 0x11d1821  addu        $v1, $t0, $sp
    ctx->pc = 0x2a8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x2a836c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2a836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2a8370: 0x246910a0  addiu       $t1, $v1, 0x10A0
    ctx->pc = 0x2a8370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4256));
    // 0x2a8374: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x2a8374u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x2a8378: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2a8378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a837c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x2a837cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x2a8380: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a8380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a8384: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x2a8384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2a8388: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x2a838c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x2a838cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x2a8390: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2a8394: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x2a8394u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x2a8398: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x2a8398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2a839c: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x2a839cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x2a83a0: 0x24830140  addiu       $v1, $a0, 0x140
    ctx->pc = 0x2a83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x2a83a4: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x2a83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x2a83a8: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x2a83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x2a83ac: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x2a83acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x2a83b0: 0x248301c0  addiu       $v1, $a0, 0x1C0
    ctx->pc = 0x2a83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x2a83b4: 0xad23001c  sw          $v1, 0x1C($t1)
    ctx->pc = 0x2a83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
    // 0x2a83b8: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x2a83b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2a83bc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A83BCu;
    {
        const bool branch_taken_0x2a83bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A83C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83BCu;
            // 0x2a83c0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83bc) {
            ctx->pc = 0x2A8364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8364;
        }
    }
    ctx->pc = 0x2A83C4u;
    // 0x2a83c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a83c8: 0xbe082b  sltu        $at, $a1, $fp
    ctx->pc = 0x2a83c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2a83cc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a83d0: 0xac6010a0  sw          $zero, 0x10A0($v1)
    ctx->pc = 0x2a83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4256), GPR_U32(ctx, 0));
    // 0x2a83d4: 0x102000f5  beqz        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2A83D4u;
    {
        const bool branch_taken_0x2a83d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83D4u;
            // 0x2a83d8: 0xaea04060  sw          $zero, 0x4060($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83d4) {
            ctx->pc = 0x2A87ACu;
            goto label_2a87ac;
        }
    }
    ctx->pc = 0x2A83DCu;
    // 0x2a83dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a83dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a83e0:
    // 0x2a83e0: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x2a83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
    // 0x2a83e4: 0xc0aa058  jal         func_2A8160
    ctx->pc = 0x2A83E4u;
    SET_GPR_U32(ctx, 31, 0x2A83ECu);
    ctx->pc = 0x2A83E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83E4u;
            // 0x2a83e8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8160u;
    if (runtime->hasFunction(0x2A8160u)) {
        auto targetFn = runtime->lookupFunction(0x2A8160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A83ECu; }
        if (ctx->pc != 0x2A83ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x2a8160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A83ECu; }
        if (ctx->pc != 0x2A83ECu) { return; }
    }
    ctx->pc = 0x2A83ECu;
label_2a83ec:
    // 0x2a83ec: 0x8fa410a0  lw          $a0, 0x10A0($sp)
    ctx->pc = 0x2a83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4256)));
    // 0x2a83f0: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a83f4: 0x28a30030  slti        $v1, $a1, 0x30
    ctx->pc = 0x2a83f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2a83f8: 0x146000e9  bnez        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A83F8u;
    {
        const bool branch_taken_0x2a83f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A83FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83F8u;
            // 0x2a83fc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83f8) {
            ctx->pc = 0x2A87A0u;
            goto label_2a87a0;
        }
    }
    ctx->pc = 0x2A8400u;
    // 0x2a8400: 0x28a1003a  slti        $at, $a1, 0x3A
    ctx->pc = 0x2a8400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2a8404: 0x102000e6  beqz        $at, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2A8404u;
    {
        const bool branch_taken_0x2a8404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8404) {
            ctx->pc = 0x2A87A0u;
            goto label_2a87a0;
        }
    }
    ctx->pc = 0x2A840Cu;
    // 0x2a840c: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A840Cu;
    SET_GPR_U32(ctx, 31, 0x2A8414u);
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8414u; }
        if (ctx->pc != 0x2A8414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8414u; }
        if (ctx->pc != 0x2A8414u) { return; }
    }
    ctx->pc = 0x2A8414u;
label_2a8414:
    // 0x2a8414: 0x8ea54060  lw          $a1, 0x4060($s5)
    ctx->pc = 0x2a8414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x2a8418: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2a8418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a841c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2a841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a8420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a8420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a8424: 0xaea44060  sw          $a0, 0x4060($s5)
    ctx->pc = 0x2a8424u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16480), GPR_U32(ctx, 4));
    // 0x2a8428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a8428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a842c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2a842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a8430: 0x44000de  bltz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x2A8430u;
    {
        const bool branch_taken_0x2a8430 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8430u;
            // 0x2a8434: 0x24704064  addiu       $s0, $v1, 0x4064 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8430) {
            ctx->pc = 0x2A87ACu;
            goto label_2a87ac;
        }
    }
    ctx->pc = 0x2A8438u;
    // 0x2a8438: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2a8438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a843c: 0x8fb210b0  lw          $s2, 0x10B0($sp)
    ctx->pc = 0x2a843cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4272)));
    // 0x2a8440: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2a8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2a8444: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8448: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8448u;
    {
        const bool branch_taken_0x2a8448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8448u;
            // 0x2a844c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8448) {
            ctx->pc = 0x2A845Cu;
            goto label_2a845c;
        }
    }
    ctx->pc = 0x2A8450u;
    // 0x2a8450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8454: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8454u;
    {
        const bool branch_taken_0x2a8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8454u;
            // 0x2a8458: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8454) {
            ctx->pc = 0x2A846Cu;
            goto label_2a846c;
        }
    }
    ctx->pc = 0x2A845Cu;
label_2a845c:
    // 0x2a845c: 0x0  nop
    ctx->pc = 0x2a845cu;
    // NOP
    // 0x2a8460: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A8460u;
    SET_GPR_U32(ctx, 31, 0x2A8468u);
    ctx->pc = 0x2A8464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8460u;
            // 0x2a8464: 0x26440003  addiu       $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8468u; }
        if (ctx->pc != 0x2A8468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8468u; }
        if (ctx->pc != 0x2A8468u) { return; }
    }
    ctx->pc = 0x2A8468u;
label_2a8468:
    // 0x2a8468: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2a8468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2a846c:
    // 0x2a846c: 0x0  nop
    ctx->pc = 0x2a846cu;
    // NOP
    // 0x2a8470: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8470u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8474: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2a8474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2a8478: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8478u;
    {
        const bool branch_taken_0x2a8478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8478u;
            // 0x2a847c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8478) {
            ctx->pc = 0x2A8484u;
            goto label_2a8484;
        }
    }
    ctx->pc = 0x2A8480u;
    // 0x2a8480: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2a8480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2a8484:
    // 0x2a8484: 0x0  nop
    ctx->pc = 0x2a8484u;
    // NOP
    // 0x2a8488: 0x8fb210b4  lw          $s2, 0x10B4($sp)
    ctx->pc = 0x2a8488u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4276)));
    // 0x2a848c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2a848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2a8490: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8490u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8494: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8494u;
    {
        const bool branch_taken_0x2a8494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8494u;
            // 0x2a8498: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8494) {
            ctx->pc = 0x2A84A4u;
            goto label_2a84a4;
        }
    }
    ctx->pc = 0x2A849Cu;
    // 0x2a849c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A849Cu;
    {
        const bool branch_taken_0x2a849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A849Cu;
            // 0x2a84a0: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a849c) {
            ctx->pc = 0x2A84B4u;
            goto label_2a84b4;
        }
    }
    ctx->pc = 0x2A84A4u;
label_2a84a4:
    // 0x2a84a4: 0x0  nop
    ctx->pc = 0x2a84a4u;
    // NOP
    // 0x2a84a8: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A84A8u;
    SET_GPR_U32(ctx, 31, 0x2A84B0u);
    ctx->pc = 0x2A84ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A84A8u;
            // 0x2a84ac: 0x26440003  addiu       $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84B0u; }
        if (ctx->pc != 0x2A84B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84B0u; }
        if (ctx->pc != 0x2A84B0u) { return; }
    }
    ctx->pc = 0x2A84B0u;
label_2a84b0:
    // 0x2a84b0: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2a84b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2a84b4:
    // 0x2a84b4: 0x0  nop
    ctx->pc = 0x2a84b4u;
    // NOP
    // 0x2a84b8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a84b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a84bc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2a84c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A84C0u;
    {
        const bool branch_taken_0x2a84c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A84C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A84C0u;
            // 0x2a84c4: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84c0) {
            ctx->pc = 0x2A84CCu;
            goto label_2a84cc;
        }
    }
    ctx->pc = 0x2A84C8u;
    // 0x2a84c8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2a84c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2a84cc:
    // 0x2a84cc: 0x0  nop
    ctx->pc = 0x2a84ccu;
    // NOP
    // 0x2a84d0: 0x8fb210b8  lw          $s2, 0x10B8($sp)
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4280)));
    // 0x2a84d4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2a84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2a84d8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a84d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a84dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A84DCu;
    {
        const bool branch_taken_0x2a84dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A84E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A84DCu;
            // 0x2a84e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84dc) {
            ctx->pc = 0x2A84ECu;
            goto label_2a84ec;
        }
    }
    ctx->pc = 0x2A84E4u;
    // 0x2a84e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A84E4u;
    {
        const bool branch_taken_0x2a84e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A84E4u;
            // 0x2a84e8: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84e4) {
            ctx->pc = 0x2A84FCu;
            goto label_2a84fc;
        }
    }
    ctx->pc = 0x2A84ECu;
label_2a84ec:
    // 0x2a84ec: 0x0  nop
    ctx->pc = 0x2a84ecu;
    // NOP
    // 0x2a84f0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A84F0u;
    SET_GPR_U32(ctx, 31, 0x2A84F8u);
    ctx->pc = 0x2A84F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A84F0u;
            // 0x2a84f4: 0x26440003  addiu       $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84F8u; }
        if (ctx->pc != 0x2A84F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A84F8u; }
        if (ctx->pc != 0x2A84F8u) { return; }
    }
    ctx->pc = 0x2A84F8u;
label_2a84f8:
    // 0x2a84f8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2a84f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a84fc:
    // 0x2a84fc: 0x0  nop
    ctx->pc = 0x2a84fcu;
    // NOP
    // 0x2a8500: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8504: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2a8504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2a8508: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8508u;
    {
        const bool branch_taken_0x2a8508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8508u;
            // 0x2a850c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8508) {
            ctx->pc = 0x2A8514u;
            goto label_2a8514;
        }
    }
    ctx->pc = 0x2A8510u;
    // 0x2a8510: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2a8510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a8514:
    // 0x2a8514: 0x0  nop
    ctx->pc = 0x2a8514u;
    // NOP
    // 0x2a8518: 0x8fb210bc  lw          $s2, 0x10BC($sp)
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4284)));
    // 0x2a851c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x2a851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2a8520: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8524: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8524u;
    {
        const bool branch_taken_0x2a8524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8524u;
            // 0x2a8528: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8524) {
            ctx->pc = 0x2A8534u;
            goto label_2a8534;
        }
    }
    ctx->pc = 0x2A852Cu;
    // 0x2a852c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A852Cu;
    {
        const bool branch_taken_0x2a852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A852Cu;
            // 0x2a8530: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a852c) {
            ctx->pc = 0x2A8544u;
            goto label_2a8544;
        }
    }
    ctx->pc = 0x2A8534u;
label_2a8534:
    // 0x2a8534: 0x0  nop
    ctx->pc = 0x2a8534u;
    // NOP
    // 0x2a8538: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A8538u;
    SET_GPR_U32(ctx, 31, 0x2A8540u);
    ctx->pc = 0x2A853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8538u;
            // 0x2a853c: 0x26440003  addiu       $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8540u; }
        if (ctx->pc != 0x2A8540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8540u; }
        if (ctx->pc != 0x2A8540u) { return; }
    }
    ctx->pc = 0x2A8540u;
label_2a8540:
    // 0x2a8540: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2a8540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_2a8544:
    // 0x2a8544: 0x0  nop
    ctx->pc = 0x2a8544u;
    // NOP
    // 0x2a8548: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2a8548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a854c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2a8550: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8550u;
    {
        const bool branch_taken_0x2a8550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8550u;
            // 0x2a8554: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8550) {
            ctx->pc = 0x2A855Cu;
            goto label_2a855c;
        }
    }
    ctx->pc = 0x2A8558u;
    // 0x2a8558: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2a8558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_2a855c:
    // 0x2a855c: 0x0  nop
    ctx->pc = 0x2a855cu;
    // NOP
    // 0x2a8560: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2a8560u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x2a8564: 0x2652e5f8  addiu       $s2, $s2, -0x1A08
    ctx->pc = 0x2a8564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960632));
    // 0x2a8568: 0xc04a422  jal         func_129088
    ctx->pc = 0x2A8568u;
    SET_GPR_U32(ctx, 31, 0x2A8570u);
    ctx->pc = 0x2A856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8568u;
            // 0x2a856c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8570u; }
        if (ctx->pc != 0x2A8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8570u; }
        if (ctx->pc != 0x2A8570u) { return; }
    }
    ctx->pc = 0x2A8570u;
label_2a8570:
    // 0x2a8570: 0x8fb410c0  lw          $s4, 0x10C0($sp)
    ctx->pc = 0x2a8570u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4288)));
    // 0x2a8574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a8574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8578: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x2a8578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2a857c: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x2a857cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8580: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2a8580u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a8584: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8584u;
    {
        const bool branch_taken_0x2a8584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8584u;
            // 0x2a8588: 0x26310005  addiu       $s1, $s1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8584) {
            ctx->pc = 0x2A85A0u;
            goto label_2a85a0;
        }
    }
    ctx->pc = 0x2A858Cu;
    // 0x2a858c: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A858Cu;
    SET_GPR_U32(ctx, 31, 0x2A8594u);
    ctx->pc = 0x2A8590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A858Cu;
            // 0x2a8590: 0x26840007  addiu       $a0, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8594u; }
        if (ctx->pc != 0x2A8594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8594u; }
        if (ctx->pc != 0x2A8594u) { return; }
    }
    ctx->pc = 0x2A8594u;
label_2a8594:
    // 0x2a8594: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2a8594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8598: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A8598u;
    {
        const bool branch_taken_0x2a8598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8598u;
            // 0x2a859c: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8598) {
            ctx->pc = 0x2A85FCu;
            goto label_2a85fc;
        }
    }
    ctx->pc = 0x2A85A0u;
label_2a85a0:
    // 0x2a85a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a85a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a85a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85a8: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x2A85A8u;
    SET_GPR_U32(ctx, 31, 0x2A85B0u);
    ctx->pc = 0x2A85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85A8u;
            // 0x2a85ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85B0u; }
        if (ctx->pc != 0x2A85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85B0u; }
        if (ctx->pc != 0x2A85B0u) { return; }
    }
    ctx->pc = 0x2A85B0u;
label_2a85b0:
    // 0x2a85b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A85B0u;
    {
        const bool branch_taken_0x2a85b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a85b0) {
            ctx->pc = 0x2A85FCu;
            goto label_2a85fc;
        }
    }
    ctx->pc = 0x2A85B8u;
    // 0x2a85b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a85bc: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x2a85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2a85c0: 0xc048fb8  jal         func_123EE0
    ctx->pc = 0x2A85C0u;
    SET_GPR_U32(ctx, 31, 0x2A85C8u);
    ctx->pc = 0x2A85C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85C0u;
            // 0x2a85c4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EE0u;
    if (runtime->hasFunction(0x123EE0u)) {
        auto targetFn = runtime->lookupFunction(0x123EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85C8u; }
        if (ctx->pc != 0x2A85C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atof_0x123ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85C8u; }
        if (ctx->pc != 0x2A85C8u) { return; }
    }
    ctx->pc = 0x2A85C8u;
label_2a85c8:
    // 0x2a85c8: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2A85C8u;
    SET_GPR_U32(ctx, 31, 0x2A85D0u);
    ctx->pc = 0x2A85CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85C8u;
            // 0x2a85cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85D0u; }
        if (ctx->pc != 0x2A85D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85D0u; }
        if (ctx->pc != 0x2A85D0u) { return; }
    }
    ctx->pc = 0x2A85D0u;
label_2a85d0:
    // 0x2a85d0: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x2a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x2a85d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a85d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a85d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A85D8u;
    SET_GPR_U32(ctx, 31, 0x2A85E0u);
    ctx->pc = 0x2A85DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85D8u;
            // 0x2a85dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85E0u; }
        if (ctx->pc != 0x2A85E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85E0u; }
        if (ctx->pc != 0x2A85E0u) { return; }
    }
    ctx->pc = 0x2A85E0u;
label_2a85e0:
    // 0x2a85e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a85e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85e4: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x2a85e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a85e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A85E8u;
    {
        const bool branch_taken_0x2a85e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a85e8) {
            ctx->pc = 0x2A85F4u;
            goto label_2a85f4;
        }
    }
    ctx->pc = 0x2A85F0u;
    // 0x2a85f0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2a85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2a85f4:
    // 0x2a85f4: 0x0  nop
    ctx->pc = 0x2a85f4u;
    // NOP
    // 0x2a85f8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2a85f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_2a85fc:
    // 0x2a85fc: 0x0  nop
    ctx->pc = 0x2a85fcu;
    // NOP
    // 0x2a8600: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8604: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x2a8604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8608: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a8608u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a860c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x2a860cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8610: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x2a8610u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a8614: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2a8614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8618: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a861c: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x2a861cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8620: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x2a8620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8624: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x2a8624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8628: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x2a8628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a862c: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x2a862cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
label_2a8630:
    // 0x2a8630: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2a8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2a8634: 0x8c7210a0  lw          $s2, 0x10A0($v1)
    ctx->pc = 0x2a8634u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x2a8638: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a8638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a863c: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x2a863cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8640: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2a8640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2a8644: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8644u;
    {
        const bool branch_taken_0x2a8644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A8648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8644u;
            // 0x2a8648: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8644) {
            ctx->pc = 0x2A865Cu;
            goto label_2a865c;
        }
    }
    ctx->pc = 0x2A864Cu;
    // 0x2a864c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8650: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2a8650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2a8654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8654u;
    {
        const bool branch_taken_0x2a8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8654u;
            // 0x2a8658: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8654) {
            ctx->pc = 0x2A8670u;
            goto label_2a8670;
        }
    }
    ctx->pc = 0x2A865Cu;
label_2a865c:
    // 0x2a865c: 0x0  nop
    ctx->pc = 0x2a865cu;
    // NOP
    // 0x2a8660: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A8660u;
    SET_GPR_U32(ctx, 31, 0x2A8668u);
    ctx->pc = 0x2A8664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8660u;
            // 0x2a8664: 0x26440003  addiu       $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8668u; }
        if (ctx->pc != 0x2A8668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8668u; }
        if (ctx->pc != 0x2A8668u) { return; }
    }
    ctx->pc = 0x2A8668u;
label_2a8668:
    // 0x2a8668: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2a866c: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2a866cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_2a8670:
    // 0x2a8670: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x2a8670u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a8674: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x2a8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2a8678: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8678u;
    {
        const bool branch_taken_0x2a8678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A867Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8678u;
            // 0x2a867c: 0x2403270f  addiu       $v1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8678) {
            ctx->pc = 0x2A8688u;
            goto label_2a8688;
        }
    }
    ctx->pc = 0x2A8680u;
    // 0x2a8680: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8680u;
    {
        const bool branch_taken_0x2a8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8680u;
            // 0x2a8684: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8680) {
            ctx->pc = 0x2A8698u;
            goto label_2a8698;
        }
    }
    ctx->pc = 0x2A8688u;
label_2a8688:
    // 0x2a8688: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a8688u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a868c: 0x2ac30006  slti        $v1, $s6, 0x6
    ctx->pc = 0x2a868cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a8690: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A8690u;
    {
        const bool branch_taken_0x2a8690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8690u;
            // 0x2a8694: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8690) {
            ctx->pc = 0x2A8630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8630;
        }
    }
    ctx->pc = 0x2A8698u;
label_2a8698:
    // 0x2a8698: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a8698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a869c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x2a869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a86a0: 0x8c9210a0  lw          $s2, 0x10A0($a0)
    ctx->pc = 0x2a86a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4256)));
    // 0x2a86a4: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x2a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2a86a8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x2a86a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a86ac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A86ACu;
    {
        const bool branch_taken_0x2a86ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A86B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86ACu;
            // 0x2a86b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86ac) {
            ctx->pc = 0x2A86C0u;
            goto label_2a86c0;
        }
    }
    ctx->pc = 0x2A86B4u;
    // 0x2a86b4: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x2a86b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a86b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A86B8u;
    {
        const bool branch_taken_0x2a86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86B8u;
            // 0x2a86bc: 0xa6030020  sh          $v1, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86b8) {
            ctx->pc = 0x2A8700u;
            goto label_2a8700;
        }
    }
    ctx->pc = 0x2A86C0u;
label_2a86c0:
    // 0x2a86c0: 0x27a411b0  addiu       $a0, $sp, 0x11B0
    ctx->pc = 0x2a86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4528));
    // 0x2a86c4: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x2a86c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x2a86c8: 0xc04a54a  jal         func_129528
    ctx->pc = 0x2A86C8u;
    SET_GPR_U32(ctx, 31, 0x2A86D0u);
    ctx->pc = 0x2A86CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86C8u;
            // 0x2a86cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86D0u; }
        if (ctx->pc != 0x2A86D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86D0u; }
        if (ctx->pc != 0x2A86D0u) { return; }
    }
    ctx->pc = 0x2A86D0u;
label_2a86d0:
    // 0x2a86d0: 0x26450007  addiu       $a1, $s2, 0x7
    ctx->pc = 0x2a86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x2a86d4: 0x27a411c0  addiu       $a0, $sp, 0x11C0
    ctx->pc = 0x2a86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4544));
    // 0x2a86d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a86dc: 0xc04a54a  jal         func_129528
    ctx->pc = 0x2A86DCu;
    SET_GPR_U32(ctx, 31, 0x2A86E4u);
    ctx->pc = 0x2A86E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86DCu;
            // 0x2a86e0: 0xa3a011b3  sb          $zero, 0x11B3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4531), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86E4u; }
        if (ctx->pc != 0x2A86E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86E4u; }
        if (ctx->pc != 0x2A86E4u) { return; }
    }
    ctx->pc = 0x2A86E4u;
label_2a86e4:
    // 0x2a86e4: 0x27a411b0  addiu       $a0, $sp, 0x11B0
    ctx->pc = 0x2a86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4528));
    // 0x2a86e8: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A86E8u;
    SET_GPR_U32(ctx, 31, 0x2A86F0u);
    ctx->pc = 0x2A86ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86E8u;
            // 0x2a86ec: 0xa3a011c3  sb          $zero, 0x11C3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86F0u; }
        if (ctx->pc != 0x2A86F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86F0u; }
        if (ctx->pc != 0x2A86F0u) { return; }
    }
    ctx->pc = 0x2A86F0u;
label_2a86f0:
    // 0x2a86f0: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x2a86f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a86f4: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A86F4u;
    SET_GPR_U32(ctx, 31, 0x2A86FCu);
    ctx->pc = 0x2A86F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86F4u;
            // 0x2a86f8: 0x27a411c0  addiu       $a0, $sp, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86FCu; }
        if (ctx->pc != 0x2A86FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86FCu; }
        if (ctx->pc != 0x2A86FCu) { return; }
    }
    ctx->pc = 0x2A86FCu;
label_2a86fc:
    // 0x2a86fc: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x2a86fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
label_2a8700:
    // 0x2a8700: 0x26230006  addiu       $v1, $s1, 0x6
    ctx->pc = 0x2a8700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2a8704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a8704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a8708: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a870c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a8710: 0x8c6510a0  lw          $a1, 0x10A0($v1)
    ctx->pc = 0x2a8710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x2a8714: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x2a8714u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8718: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x2a8718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2a871c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A871Cu;
    {
        const bool branch_taken_0x2a871c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A8720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A871Cu;
            // 0x2a8720: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a871c) {
            ctx->pc = 0x2A8794u;
            goto label_2a8794;
        }
    }
    ctx->pc = 0x2A8724u;
    // 0x2a8724: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2A8724u;
    SET_GPR_U32(ctx, 31, 0x2A872Cu);
    ctx->pc = 0x2A8728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8724u;
            // 0x2a8728: 0x24a40003  addiu       $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A872Cu; }
        if (ctx->pc != 0x2A872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A872Cu; }
        if (ctx->pc != 0x2A872Cu) { return; }
    }
    ctx->pc = 0x2A872Cu;
label_2a872c:
    // 0x2a872c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a872cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8734: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a8734u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a8738: 0x8c248864  lw          $a0, -0x779C($at)
    ctx->pc = 0x2a8738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936676)));
    // 0x2a873c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A873Cu;
    {
        const bool branch_taken_0x2a873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A873Cu;
            // 0x2a8740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a873c) {
            ctx->pc = 0x2A8788u;
            goto label_2a8788;
        }
    }
    ctx->pc = 0x2A8744u;
label_2a8744:
    // 0x2a8744: 0x0  nop
    ctx->pc = 0x2a8744u;
    // NOP
    // 0x2a8748: 0x2a61821  addu        $v1, $s5, $a2
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2a874c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8750: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a8750u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a8754: 0x84238868  lh          $v1, -0x7798($at)
    ctx->pc = 0x2a8754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936680)));
    // 0x2a8758: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8758u;
    {
        const bool branch_taken_0x2a8758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8758u;
            // 0x2a875c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8758) {
            ctx->pc = 0x2A8780u;
            goto label_2a8780;
        }
    }
    ctx->pc = 0x2A8760u;
    // 0x2a8760: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a8760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8764: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2a8764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a8768: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a8768u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a876c: 0x8431886a  lh          $s1, -0x7796($at)
    ctx->pc = 0x2a876cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936682)));
    // 0x2a8770: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a8770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8774: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a8774u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a8778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8778u;
    {
        const bool branch_taken_0x2a8778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8778u;
            // 0x2a877c: 0x8432886c  lh          $s2, -0x7794($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8778) {
            ctx->pc = 0x2A8794u;
            goto label_2a8794;
        }
    }
    ctx->pc = 0x2A8780u;
label_2a8780:
    // 0x2a8780: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a8780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a8784: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a8784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2a8788:
    // 0x2a8788: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2a8788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a878c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A878Cu;
    {
        const bool branch_taken_0x2a878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a878c) {
            ctx->pc = 0x2A8744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8744;
        }
    }
    ctx->pc = 0x2A8794u;
label_2a8794:
    // 0x2a8794: 0x0  nop
    ctx->pc = 0x2a8794u;
    // NOP
    // 0x2a8798: 0xa2110022  sb          $s1, 0x22($s0)
    ctx->pc = 0x2a8798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 17));
    // 0x2a879c: 0xa2120023  sb          $s2, 0x23($s0)
    ctx->pc = 0x2a879cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 18));
label_2a87a0:
    // 0x2a87a0: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x2a87a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2a87a4: 0x1460ff0e  bnez        $v1, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x2A87A4u;
    {
        const bool branch_taken_0x2a87a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A87A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87A4u;
            // 0x2a87a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87a4) {
            ctx->pc = 0x2A83E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a83e0;
        }
    }
    ctx->pc = 0x2A87ACu;
label_2a87ac:
    // 0x2a87ac: 0x0  nop
    ctx->pc = 0x2a87acu;
    // NOP
    // 0x2a87b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a87b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a87b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a87b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a87b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a87b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a87bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a87bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a87c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a87c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a87c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a87c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a87c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a87c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a87cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a87ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a87d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a87d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a87d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a87d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A87D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A87DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87D8u;
            // 0x2a87dc: 0x27bd11d0  addiu       $sp, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A87E0u;
}
