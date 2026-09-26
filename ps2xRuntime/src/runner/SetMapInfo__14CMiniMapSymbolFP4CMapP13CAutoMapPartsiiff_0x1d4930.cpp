#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMapInfo__14CMiniMapSymbolFP4CMapP13CAutoMapPartsiiff
// Address: 0x1d4930 - 0x1d4b14
void SetMapInfo__14CMiniMapSymbolFP4CMapP13CAutoMapPartsiiff_0x1d4930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMapInfo__14CMiniMapSymbolFP4CMapP13CAutoMapPartsiiff_0x1d4930");
#endif

    switch (ctx->pc) {
        case 0x1d497cu: goto label_1d497c;
        case 0x1d498cu: goto label_1d498c;
        case 0x1d49c8u: goto label_1d49c8;
        case 0x1d49e8u: goto label_1d49e8;
        case 0x1d49f0u: goto label_1d49f0;
        case 0x1d4a04u: goto label_1d4a04;
        case 0x1d4a20u: goto label_1d4a20;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4aa0u: goto label_1d4aa0;
        default: break;
    }

    ctx->pc = 0x1d4930u;

    // 0x1d4930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d4934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d4934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d4938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d4938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d493c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d4940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d494c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4950: 0x10a00067  beqz        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1D4950u;
    {
        const bool branch_taken_0x1d4950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4950u;
            // 0x1d4954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4950) {
            ctx->pc = 0x1D4AF0u;
            goto label_1d4af0;
        }
    }
    ctx->pc = 0x1D4958u;
    // 0x1d4958: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1d4958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1d495c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4960: 0xae060130  sw          $a2, 0x130($s0)
    ctx->pc = 0x1d4960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 6));
    // 0x1d4964: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d4968: 0xa6070138  sh          $a3, 0x138($s0)
    ctx->pc = 0x1d4968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 7));
    // 0x1d496c: 0xa608013a  sh          $t0, 0x13A($s0)
    ctx->pc = 0x1d496cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 8));
    // 0x1d4970: 0xe60c013c  swc1        $f12, 0x13C($s0)
    ctx->pc = 0x1d4970u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x1d4974: 0xc0572f4  jal         func_15CBD0
    ctx->pc = 0x1D4974u;
    SET_GPR_U32(ctx, 31, 0x1D497Cu);
    ctx->pc = 0x1D4978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4974u;
            // 0x1d4978: 0xe60d0140  swc1        $f13, 0x140($s0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBD0u;
    if (runtime->hasFunction(0x15CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D497Cu; }
        if (ctx->pc != 0x1D497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlacPartsTable__4CMapFPi_0x15cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D497Cu; }
        if (ctx->pc != 0x1D497Cu) { return; }
    }
    ctx->pc = 0x1D497Cu;
label_1d497c:
    // 0x1d497c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d4980: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4984: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4984u;
    {
        const bool branch_taken_0x1d4984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4984u;
            // 0x1d4988: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4984) {
            ctx->pc = 0x1D499Cu;
            goto label_1d499c;
        }
    }
    ctx->pc = 0x1D498Cu;
label_1d498c:
    // 0x1d498c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4990: 0x24630310  addiu       $v1, $v1, 0x310
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 784));
    // 0x1d4994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4998: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d4998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1d499c:
    // 0x1d499c: 0x0  nop
    ctx->pc = 0x1d499cu;
    // NOP
    // 0x1d49a0: 0x80620070  lb          $v0, 0x70($v1)
    ctx->pc = 0x1d49a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1d49a4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1d49a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d49a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d49ac: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D49ACu;
    {
        const bool branch_taken_0x1d49ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49ACu;
            // 0x1d49b0: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49ac) {
            ctx->pc = 0x1D498Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d498c;
        }
    }
    ctx->pc = 0x1D49B4u;
    // 0x1d49b4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d49b8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1d49bc: 0x24a57d60  addiu       $a1, $a1, 0x7D60
    ctx->pc = 0x1d49bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32096));
    // 0x1d49c0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1D49C0u;
    SET_GPR_U32(ctx, 31, 0x1D49C8u);
    ctx->pc = 0x1D49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49C0u;
            // 0x1d49c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49C8u; }
        if (ctx->pc != 0x1D49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49C8u; }
        if (ctx->pc != 0x1D49C8u) { return; }
    }
    ctx->pc = 0x1D49C8u;
label_1d49c8:
    // 0x1d49c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d49cc: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d49d0: 0x24650024  addiu       $a1, $v1, 0x24
    ctx->pc = 0x1d49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1d49d4: 0x80630024  lb          $v1, 0x24($v1)
    ctx->pc = 0x1d49d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d49d8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D49D8u;
    {
        const bool branch_taken_0x1d49d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49D8u;
            // 0x1d49dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49d8) {
            ctx->pc = 0x1D4AF0u;
            goto label_1d4af0;
        }
    }
    ctx->pc = 0x1D49E0u;
    // 0x1d49e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1D49E0u;
    SET_GPR_U32(ctx, 31, 0x1D49E8u);
    ctx->pc = 0x1D49E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49E0u;
            // 0x1d49e4: 0xae000134  sw          $zero, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49E8u; }
        if (ctx->pc != 0x1D49E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49E8u; }
        if (ctx->pc != 0x1D49E8u) { return; }
    }
    ctx->pc = 0x1D49E8u;
label_1d49e8:
    // 0x1d49e8: 0xc04a422  jal         func_129088
    ctx->pc = 0x1D49E8u;
    SET_GPR_U32(ctx, 31, 0x1D49F0u);
    ctx->pc = 0x1D49ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49E8u;
            // 0x1d49ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49F0u; }
        if (ctx->pc != 0x1D49F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49F0u; }
        if (ctx->pc != 0x1D49F0u) { return; }
    }
    ctx->pc = 0x1D49F0u;
label_1d49f0:
    // 0x1d49f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d49f4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D49F4u;
    {
        const bool branch_taken_0x1d49f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D49F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49F4u;
            // 0x1d49f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49f4) {
            ctx->pc = 0x1D4A00u;
            goto label_1d4a00;
        }
    }
    ctx->pc = 0x1D49FCu;
    // 0x1d49fc: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x1d49fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
label_1d4a00:
    // 0x1d4a00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a04:
    // 0x1d4a04: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d4a08: 0x2463aa80  addiu       $v1, $v1, -0x5580
    ctx->pc = 0x1d4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945408));
    // 0x1d4a0c: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1d4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d4a10: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D4A10u;
    {
        const bool branch_taken_0x1d4a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A10u;
            // 0x1d4a14: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a10) {
            ctx->pc = 0x1D4A4Cu;
            goto label_1d4a4c;
        }
    }
    ctx->pc = 0x1D4A18u;
    // 0x1d4a18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1D4A18u;
    SET_GPR_U32(ctx, 31, 0x1D4A20u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A20u; }
        if (ctx->pc != 0x1D4A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A20u; }
        if (ctx->pc != 0x1D4A20u) { return; }
    }
    ctx->pc = 0x1D4A20u;
label_1d4a20:
    // 0x1d4a20: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4A20u;
    {
        const bool branch_taken_0x1d4a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A20u;
            // 0x1d4a24: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a20) {
            ctx->pc = 0x1D4A4Cu;
            goto label_1d4a4c;
        }
    }
    ctx->pc = 0x1D4A28u;
    // 0x1d4a28: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d4a2c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d4a30: 0x2463aa80  addiu       $v1, $v1, -0x5580
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945408));
    // 0x1d4a34: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d4a38: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d4a3c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4a40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4A44u;
    {
        const bool branch_taken_0x1d4a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A44u;
            // 0x1d4a48: 0xae030134  sw          $v1, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a44) {
            ctx->pc = 0x1D4A5Cu;
            goto label_1d4a5c;
        }
    }
    ctx->pc = 0x1D4A4Cu;
label_1d4a4c:
    // 0x1d4a4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a50: 0x2a230012  slti        $v1, $s1, 0x12
    ctx->pc = 0x1d4a50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1d4a54: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D4A54u;
    {
        const bool branch_taken_0x1d4a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A54u;
            // 0x1d4a58: 0x26520290  addiu       $s2, $s2, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a54) {
            ctx->pc = 0x1D4A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4a04;
        }
    }
    ctx->pc = 0x1D4A5Cu;
label_1d4a5c:
    // 0x1d4a5c: 0x0  nop
    ctx->pc = 0x1d4a5cu;
    // NOP
    // 0x1d4a60: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x1d4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1d4a64: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D4A64u;
    {
        const bool branch_taken_0x1d4a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a64) {
            ctx->pc = 0x1D4AF0u;
            goto label_1d4af0;
        }
    }
    ctx->pc = 0x1D4A6Cu;
    // 0x1d4a6c: 0x8e150004  lw          $s5, 0x4($s0)
    ctx->pc = 0x1d4a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4a70: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D4A70u;
    {
        const bool branch_taken_0x1d4a70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A70u;
            // 0x1d4a74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a70) {
            ctx->pc = 0x1D4AF0u;
            goto label_1d4af0;
        }
    }
    ctx->pc = 0x1D4A78u;
    // 0x1d4a78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D4A78u;
    {
        const bool branch_taken_0x1d4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a78) {
            ctx->pc = 0x1D4AE0u;
            goto label_1d4ae0;
        }
    }
    ctx->pc = 0x1D4A80u;
label_1d4a80:
    // 0x1d4a80: 0x26b20090  addiu       $s2, $s5, 0x90
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1d4a84: 0xaea301dc  sw          $v1, 0x1DC($s5)
    ctx->pc = 0x1d4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 3));
    // 0x1d4a88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d4a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D4A8Cu;
    {
        const bool branch_taken_0x1d4a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A8Cu;
            // 0x1d4a90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a8c) {
            ctx->pc = 0x1D4AC0u;
            goto label_1d4ac0;
        }
    }
    ctx->pc = 0x1D4A94u;
label_1d4a94:
    // 0x1d4a94: 0x0  nop
    ctx->pc = 0x1d4a94u;
    // NOP
    // 0x1d4a98: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1D4A98u;
    SET_GPR_U32(ctx, 31, 0x1D4AA0u);
    ctx->pc = 0x1D4A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A98u;
            // 0x1d4a9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AA0u; }
        if (ctx->pc != 0x1D4AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AA0u; }
        if (ctx->pc != 0x1D4AA0u) { return; }
    }
    ctx->pc = 0x1D4AA0u;
label_1d4aa0:
    // 0x1d4aa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4AA0u;
    {
        const bool branch_taken_0x1d4aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aa0) {
            ctx->pc = 0x1D4AB8u;
            goto label_1d4ab8;
        }
    }
    ctx->pc = 0x1D4AA8u;
    // 0x1d4aa8: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x1d4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1d4aac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1d4ab0: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d4ab4: 0xaea301dc  sw          $v1, 0x1DC($s5)
    ctx->pc = 0x1d4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 3));
label_1d4ab8:
    // 0x1d4ab8: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x1d4ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x1d4abc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1d4abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_1d4ac0:
    // 0x1d4ac0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d4ac4: 0x24639080  addiu       $v1, $v1, -0x6F80
    ctx->pc = 0x1d4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938752));
    // 0x1d4ac8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d4acc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4ad0: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4a94;
        }
    }
    ctx->pc = 0x1D4AD8u;
    // 0x1d4ad8: 0x26b50310  addiu       $s5, $s5, 0x310
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 784));
    // 0x1d4adc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d4ae0:
    // 0x1d4ae0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4ae4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1d4ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d4ae8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D4AE8u;
    {
        const bool branch_taken_0x1d4ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AE8u;
            // 0x1d4aec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ae8) {
            ctx->pc = 0x1D4A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4a80;
        }
    }
    ctx->pc = 0x1D4AF0u;
label_1d4af0:
    // 0x1d4af0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d4af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4af4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4af4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4af8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B0Cu;
            // 0x1d4b10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4B14u;
}
