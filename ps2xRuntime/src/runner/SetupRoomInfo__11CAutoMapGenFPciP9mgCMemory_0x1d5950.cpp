#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupRoomInfo__11CAutoMapGenFPciP9mgCMemory
// Address: 0x1d5950 - 0x1d5abc
void SetupRoomInfo__11CAutoMapGenFPciP9mgCMemory_0x1d5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupRoomInfo__11CAutoMapGenFPciP9mgCMemory_0x1d5950");
#endif

    switch (ctx->pc) {
        case 0x1d5984u: goto label_1d5984;
        case 0x1d5990u: goto label_1d5990;
        case 0x1d59a0u: goto label_1d59a0;
        case 0x1d5a70u: goto label_1d5a70;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a90u: goto label_1d5a90;
        case 0x1d5a98u: goto label_1d5a98;
        default: break;
    }

    ctx->pc = 0x1d5950u;

    // 0x1d5950: 0x27bdf0e0  addiu       $sp, $sp, -0xF20
    ctx->pc = 0x1d5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963424));
    // 0x1d5954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d5954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d5958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d5958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d595c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5960: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5968: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d596c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5970: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d5970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5974: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d5974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5978: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1d597c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1D597Cu;
    SET_GPR_U32(ctx, 31, 0x1D5984u);
    ctx->pc = 0x1D5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D597Cu;
            // 0x1d5980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5984u; }
        if (ctx->pc != 0x1D5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5984u; }
        if (ctx->pc != 0x1D5984u) { return; }
    }
    ctx->pc = 0x1D5984u;
label_1d5984:
    // 0x1d5984: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1d5988: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1D5988u;
    SET_GPR_U32(ctx, 31, 0x1D5990u);
    ctx->pc = 0x1D598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5988u;
            // 0x1d598c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5990u; }
        if (ctx->pc != 0x1D5990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5990u; }
        if (ctx->pc != 0x1D5990u) { return; }
    }
    ctx->pc = 0x1D5990u;
label_1d5990:
    // 0x1d5990: 0xae6201c4  sw          $v0, 0x1C4($s3)
    ctx->pc = 0x1d5990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
    // 0x1d5994: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d5994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d599c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d59a0:
    // 0x1d59a0: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d59a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d59a8: 0x28440040  slti        $a0, $v0, 0x40
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d59ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d59b0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1d59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1d59b4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1d59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1d59b8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1d59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1d59bc: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d59c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d59c4: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x1d59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x1d59c8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1d59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1d59cc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1d59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1d59d0: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d59d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d59d8: 0xaca60030  sw          $a2, 0x30($a1)
    ctx->pc = 0x1d59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 6));
    // 0x1d59dc: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1d59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1d59e0: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x1d59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x1d59e4: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d59e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d59ec: 0xaca60048  sw          $a2, 0x48($a1)
    ctx->pc = 0x1d59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 6));
    // 0x1d59f0: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x1d59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x1d59f4: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x1d59f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x1d59f8: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d59fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5a00: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x1d5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x1d5a04: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x1d5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x1d5a08: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x1d5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x1d5a0c: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5a10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5a14: 0xaca60078  sw          $a2, 0x78($a1)
    ctx->pc = 0x1d5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 6));
    // 0x1d5a18: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x1d5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x1d5a1c: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x1d5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x1d5a20: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5a24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5a28: 0xaca60090  sw          $a2, 0x90($a1)
    ctx->pc = 0x1d5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 6));
    // 0x1d5a2c: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x1d5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x1d5a30: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x1d5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
    // 0x1d5a34: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5a38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5a3c: 0xaca600a8  sw          $a2, 0xA8($a1)
    ctx->pc = 0x1d5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 6));
    // 0x1d5a40: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d5a44: 0xaca000b4  sw          $zero, 0xB4($a1)
    ctx->pc = 0x1d5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
    // 0x1d5a48: 0x1480ffd5  bnez        $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1D5A48u;
    {
        const bool branch_taken_0x1d5a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A48u;
            // 0x1d5a4c: 0xaca000bc  sw          $zero, 0xBC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a48) {
            ctx->pc = 0x1D59A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d59a0;
        }
    }
    ctx->pc = 0x1D5A50u;
    // 0x1d5a50: 0xae6001c8  sw          $zero, 0x1C8($s3)
    ctx->pc = 0x1d5a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 0));
    // 0x1d5a54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d5a58: 0xaf908e4c  sw          $s0, -0x71B4($gp)
    ctx->pc = 0x1d5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938188), GPR_U32(ctx, 16));
    // 0x1d5a5c: 0xaf938e48  sw          $s3, -0x71B8($gp)
    ctx->pc = 0x1d5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938184), GPR_U32(ctx, 19));
    // 0x1d5a60: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x1d5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5a64: 0xaf828e50  sw          $v0, -0x71B0($gp)
    ctx->pc = 0x1d5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
    // 0x1d5a68: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1D5A68u;
    SET_GPR_U32(ctx, 31, 0x1D5A70u);
    ctx->pc = 0x1D5A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A68u;
            // 0x1d5a6c: 0xaf808e54  sw          $zero, -0x71AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A70u; }
        if (ctx->pc != 0x1D5A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A70u; }
        if (ctx->pc != 0x1D5A70u) { return; }
    }
    ctx->pc = 0x1D5A70u;
label_1d5a70:
    // 0x1d5a70: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d5a74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d5a78: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1D5A78u;
    SET_GPR_U32(ctx, 31, 0x1D5A80u);
    ctx->pc = 0x1D5A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A78u;
            // 0x1d5a7c: 0x24a5d940  addiu       $a1, $a1, -0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A80u; }
        if (ctx->pc != 0x1D5A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A80u; }
        if (ctx->pc != 0x1D5A80u) { return; }
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a88: 0xc051a60  jal         func_146980
    ctx->pc = 0x1D5A88u;
    SET_GPR_U32(ctx, 31, 0x1D5A90u);
    ctx->pc = 0x1D5A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A88u;
            // 0x1d5a8c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A90u; }
        if (ctx->pc != 0x1D5A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A90u; }
        if (ctx->pc != 0x1D5A90u) { return; }
    }
    ctx->pc = 0x1D5A90u;
label_1d5a90:
    // 0x1d5a90: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1D5A90u;
    SET_GPR_U32(ctx, 31, 0x1D5A98u);
    ctx->pc = 0x1D5A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A90u;
            // 0x1d5a94: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A98u; }
        if (ctx->pc != 0x1D5A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A98u; }
        if (ctx->pc != 0x1D5A98u) { return; }
    }
    ctx->pc = 0x1D5A98u;
label_1d5a98:
    // 0x1d5a98: 0x8f838e54  lw          $v1, -0x71AC($gp)
    ctx->pc = 0x1d5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938196)));
    // 0x1d5a9c: 0xae6301c8  sw          $v1, 0x1C8($s3)
    ctx->pc = 0x1d5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 3));
    // 0x1d5aa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d5aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5aa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AB4u;
            // 0x1d5ab8: 0x27bd0f20  addiu       $sp, $sp, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5ABCu;
}
