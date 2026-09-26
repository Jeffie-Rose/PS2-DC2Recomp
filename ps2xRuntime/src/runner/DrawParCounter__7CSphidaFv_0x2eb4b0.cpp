#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawParCounter__7CSphidaFv
// Address: 0x2eb4b0 - 0x2eb790
void DrawParCounter__7CSphidaFv_0x2eb4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawParCounter__7CSphidaFv_0x2eb4b0");
#endif

    switch (ctx->pc) {
        case 0x2eb4e0u: goto label_2eb4e0;
        case 0x2eb4f8u: goto label_2eb4f8;
        case 0x2eb51cu: goto label_2eb51c;
        case 0x2eb590u: goto label_2eb590;
        case 0x2eb5a0u: goto label_2eb5a0;
        case 0x2eb5acu: goto label_2eb5ac;
        case 0x2eb5b8u: goto label_2eb5b8;
        case 0x2eb5c4u: goto label_2eb5c4;
        case 0x2eb5d4u: goto label_2eb5d4;
        case 0x2eb5e0u: goto label_2eb5e0;
        case 0x2eb5ecu: goto label_2eb5ec;
        case 0x2eb5f8u: goto label_2eb5f8;
        case 0x2eb604u: goto label_2eb604;
        case 0x2eb610u: goto label_2eb610;
        case 0x2eb61cu: goto label_2eb61c;
        case 0x2eb628u: goto label_2eb628;
        case 0x2eb634u: goto label_2eb634;
        case 0x2eb64cu: goto label_2eb64c;
        case 0x2eb660u: goto label_2eb660;
        case 0x2eb67cu: goto label_2eb67c;
        case 0x2eb6b4u: goto label_2eb6b4;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb740u: goto label_2eb740;
        case 0x2eb750u: goto label_2eb750;
        case 0x2eb75cu: goto label_2eb75c;
        case 0x2eb774u: goto label_2eb774;
        default: break;
    }

    ctx->pc = 0x2eb4b0u;

    // 0x2eb4b0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2eb4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2eb4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2eb4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2eb4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eb4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eb4c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eb4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eb4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eb4c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eb4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eb4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eb4d0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2eb4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2eb4d4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2eb4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2eb4d8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2EB4D8u;
    SET_GPR_U32(ctx, 31, 0x2EB4E0u);
    ctx->pc = 0x2EB4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4D8u;
            // 0x2eb4dc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4E0u; }
        if (ctx->pc != 0x2EB4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4E0u; }
        if (ctx->pc != 0x2EB4E0u) { return; }
    }
    ctx->pc = 0x2EB4E0u;
label_2eb4e0:
    // 0x2eb4e0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2eb4e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2eb4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2eb4e8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2eb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2eb4ec: 0x24a514f8  addiu       $a1, $a1, 0x14F8
    ctx->pc = 0x2eb4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5368));
    // 0x2eb4f0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2EB4F0u;
    SET_GPR_U32(ctx, 31, 0x2EB4F8u);
    ctx->pc = 0x2EB4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4F0u;
            // 0x2eb4f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4F8u; }
        if (ctx->pc != 0x2EB4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4F8u; }
        if (ctx->pc != 0x2EB4F8u) { return; }
    }
    ctx->pc = 0x2EB4F8u;
label_2eb4f8:
    // 0x2eb4f8: 0x8e4700b8  lw          $a3, 0xB8($s2)
    ctx->pc = 0x2eb4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2eb4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb500: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x2eb500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2eb504: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eb504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb508: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2eb508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb50c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2eb50cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb510: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2eb510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2eb514: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2eb514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eb518: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x2eb518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_2eb51c:
    // 0x2eb51c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB51Cu;
    {
        const bool branch_taken_0x2eb51c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB51Cu;
            // 0x2eb520: 0xe6001a  div         $zero, $a3, $a2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb51c) {
            ctx->pc = 0x2EB528u;
            goto label_2eb528;
        }
    }
    ctx->pc = 0x2EB524u;
    // 0x2eb524: 0x1cd  break       0, 7
    ctx->pc = 0x2eb524u;
    runtime->handleBreak(rdram, ctx);
label_2eb528:
    // 0x2eb528: 0x1812  mflo        $v1
    ctx->pc = 0x2eb528u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2eb52c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB52Cu;
    {
        const bool branch_taken_0x2eb52c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb52c) {
            ctx->pc = 0x2EB544u;
            goto label_2eb544;
        }
    }
    ctx->pc = 0x2EB534u;
    // 0x2eb534: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB534u;
    {
        const bool branch_taken_0x2eb534 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2eb534) {
            ctx->pc = 0x2EB544u;
            goto label_2eb544;
        }
    }
    ctx->pc = 0x2EB53Cu;
    // 0x2eb53c: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB53Cu;
    {
        const bool branch_taken_0x2eb53c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2eb53c) {
            ctx->pc = 0x2EB560u;
            goto label_2eb560;
        }
    }
    ctx->pc = 0x2EB544u;
label_2eb544:
    // 0x2eb544: 0x0  nop
    ctx->pc = 0x2eb544u;
    // NOP
    // 0x2eb548: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x2eb548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x2eb54c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2eb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2eb550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eb550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eb554: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x2eb554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2eb558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB558u;
    {
        const bool branch_taken_0x2eb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB558u;
            // 0x2eb55c: 0xe23823  subu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb558) {
            ctx->pc = 0x2EB568u;
            goto label_2eb568;
        }
    }
    ctx->pc = 0x2EB560u;
label_2eb560:
    // 0x2eb560: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x2eb564: 0xac450050  sw          $a1, 0x50($v0)
    ctx->pc = 0x2eb564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 5));
label_2eb568:
    // 0x2eb568: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x2eb568u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eb56c: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x2eb56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eb570: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2eb570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2eb574: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x2eb574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x2eb578: 0x1010  mfhi        $v0
    ctx->pc = 0x2eb578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2eb57c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2eb57cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2eb580: 0x501ffe6  bgez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2EB580u;
    {
        const bool branch_taken_0x2eb580 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2EB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB580u;
            // 0x2eb584: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb580) {
            ctx->pc = 0x2EB51Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb51c;
        }
    }
    ctx->pc = 0x2EB588u;
    // 0x2eb588: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2EB588u;
    SET_GPR_U32(ctx, 31, 0x2EB590u);
    ctx->pc = 0x2EB58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB588u;
            // 0x2eb58c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB590u; }
        if (ctx->pc != 0x2EB590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB590u; }
        if (ctx->pc != 0x2EB590u) { return; }
    }
    ctx->pc = 0x2EB590u;
label_2eb590:
    // 0x2eb590: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb598: 0xc04d104  jal         func_134410
    ctx->pc = 0x2EB598u;
    SET_GPR_U32(ctx, 31, 0x2EB5A0u);
    ctx->pc = 0x2EB59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB598u;
            // 0x2eb59c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5A0u; }
        if (ctx->pc != 0x2EB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5A0u; }
        if (ctx->pc != 0x2EB5A0u) { return; }
    }
    ctx->pc = 0x2EB5A0u;
label_2eb5a0:
    // 0x2eb5a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5a4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2EB5A4u;
    SET_GPR_U32(ctx, 31, 0x2EB5ACu);
    ctx->pc = 0x2EB5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5A4u;
            // 0x2eb5a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5ACu; }
        if (ctx->pc != 0x2EB5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5ACu; }
        if (ctx->pc != 0x2EB5ACu) { return; }
    }
    ctx->pc = 0x2EB5ACu;
label_2eb5ac:
    // 0x2eb5ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5b0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2EB5B0u;
    SET_GPR_U32(ctx, 31, 0x2EB5B8u);
    ctx->pc = 0x2EB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5B0u;
            // 0x2eb5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5B8u; }
        if (ctx->pc != 0x2EB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5B8u; }
        if (ctx->pc != 0x2EB5B8u) { return; }
    }
    ctx->pc = 0x2EB5B8u;
label_2eb5b8:
    // 0x2eb5b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5bc: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2EB5BCu;
    SET_GPR_U32(ctx, 31, 0x2EB5C4u);
    ctx->pc = 0x2EB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5BCu;
            // 0x2eb5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5C4u; }
        if (ctx->pc != 0x2EB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5C4u; }
        if (ctx->pc != 0x2EB5C4u) { return; }
    }
    ctx->pc = 0x2EB5C4u;
label_2eb5c4:
    // 0x2eb5c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb5cc: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2EB5CCu;
    SET_GPR_U32(ctx, 31, 0x2EB5D4u);
    ctx->pc = 0x2EB5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5CCu;
            // 0x2eb5d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5D4u; }
        if (ctx->pc != 0x2EB5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5D4u; }
        if (ctx->pc != 0x2EB5D4u) { return; }
    }
    ctx->pc = 0x2EB5D4u;
label_2eb5d4:
    // 0x2eb5d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5d8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2EB5D8u;
    SET_GPR_U32(ctx, 31, 0x2EB5E0u);
    ctx->pc = 0x2EB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5D8u;
            // 0x2eb5dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5E0u; }
        if (ctx->pc != 0x2EB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5E0u; }
        if (ctx->pc != 0x2EB5E0u) { return; }
    }
    ctx->pc = 0x2EB5E0u;
label_2eb5e0:
    // 0x2eb5e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5e4: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x2EB5E4u;
    SET_GPR_U32(ctx, 31, 0x2EB5ECu);
    ctx->pc = 0x2EB5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5E4u;
            // 0x2eb5e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5ECu; }
        if (ctx->pc != 0x2EB5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5ECu; }
        if (ctx->pc != 0x2EB5ECu) { return; }
    }
    ctx->pc = 0x2EB5ECu;
label_2eb5ec:
    // 0x2eb5ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5f0: 0xc04d424  jal         func_135090
    ctx->pc = 0x2EB5F0u;
    SET_GPR_U32(ctx, 31, 0x2EB5F8u);
    ctx->pc = 0x2EB5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5F0u;
            // 0x2eb5f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5F8u; }
        if (ctx->pc != 0x2EB5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5F8u; }
        if (ctx->pc != 0x2EB5F8u) { return; }
    }
    ctx->pc = 0x2EB5F8u;
label_2eb5f8:
    // 0x2eb5f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb5fc: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2EB5FCu;
    SET_GPR_U32(ctx, 31, 0x2EB604u);
    ctx->pc = 0x2EB600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5FCu;
            // 0x2eb600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB604u; }
        if (ctx->pc != 0x2EB604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB604u; }
        if (ctx->pc != 0x2EB604u) { return; }
    }
    ctx->pc = 0x2EB604u;
label_2eb604:
    // 0x2eb604: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb608: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2EB608u;
    SET_GPR_U32(ctx, 31, 0x2EB610u);
    ctx->pc = 0x2EB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB608u;
            // 0x2eb60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB610u; }
        if (ctx->pc != 0x2EB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB610u; }
        if (ctx->pc != 0x2EB610u) { return; }
    }
    ctx->pc = 0x2EB610u;
label_2eb610:
    // 0x2eb610: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb614: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2EB614u;
    SET_GPR_U32(ctx, 31, 0x2EB61Cu);
    ctx->pc = 0x2EB618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB614u;
            // 0x2eb618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB61Cu; }
        if (ctx->pc != 0x2EB61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB61Cu; }
        if (ctx->pc != 0x2EB61Cu) { return; }
    }
    ctx->pc = 0x2EB61Cu;
label_2eb61c:
    // 0x2eb61c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb620: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2EB620u;
    SET_GPR_U32(ctx, 31, 0x2EB628u);
    ctx->pc = 0x2EB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB620u;
            // 0x2eb624: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB628u; }
        if (ctx->pc != 0x2EB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB628u; }
        if (ctx->pc != 0x2EB628u) { return; }
    }
    ctx->pc = 0x2EB628u;
label_2eb628:
    // 0x2eb628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eb628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb62c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2EB62Cu;
    SET_GPR_U32(ctx, 31, 0x2EB634u);
    ctx->pc = 0x2EB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB62Cu;
            // 0x2eb630: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB634u; }
        if (ctx->pc != 0x2EB634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB634u; }
        if (ctx->pc != 0x2EB634u) { return; }
    }
    ctx->pc = 0x2EB634u;
label_2eb634:
    // 0x2eb634: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2eb634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb638: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb63c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2eb63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb640: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2eb640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb644: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2EB644u;
    SET_GPR_U32(ctx, 31, 0x2EB64Cu);
    ctx->pc = 0x2EB648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB644u;
            // 0x2eb648: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB64Cu; }
        if (ctx->pc != 0x2EB64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB64Cu; }
        if (ctx->pc != 0x2EB64Cu) { return; }
    }
    ctx->pc = 0x2EB64Cu;
label_2eb64c:
    // 0x2eb64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2eb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2eb650: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2eb650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2eb654: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x2eb654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    // 0x2eb658: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2EB658u;
    SET_GPR_U32(ctx, 31, 0x2EB660u);
    ctx->pc = 0x2EB65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB658u;
            // 0x2eb65c: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB660u; }
        if (ctx->pc != 0x2EB660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB660u; }
        if (ctx->pc != 0x2EB660u) { return; }
    }
    ctx->pc = 0x2EB660u;
label_2eb660:
    // 0x2eb660: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2eb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb664: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2eb664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2eb668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb66c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2eb66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb670: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2eb670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eb678: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2eb678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_2eb67c:
    // 0x2eb67c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2eb680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eb684: 0x8c730050  lw          $s3, 0x50($v1)
    ctx->pc = 0x2eb684u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2eb688: 0x12620034  beq         $s3, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EB688u;
    {
        const bool branch_taken_0x2eb688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB688u;
            // 0x2eb68c: 0x3c034066  lui         $v1, 0x4066 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb688) {
            ctx->pc = 0x2EB75Cu;
            goto label_2eb75c;
        }
    }
    ctx->pc = 0x2EB690u;
    // 0x2eb690: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2eb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2eb694: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2eb694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2eb698: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2eb698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2eb69c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb6a0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2eb6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2eb6a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb6a8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2eb6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2eb6ac: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x2EB6ACu;
    SET_GPR_U32(ctx, 31, 0x2EB6B4u);
    ctx->pc = 0x2EB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB6ACu;
            // 0x2eb6b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6B4u; }
        if (ctx->pc != 0x2EB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6B4u; }
        if (ctx->pc != 0x2EB6B4u) { return; }
    }
    ctx->pc = 0x2EB6B4u;
label_2eb6b4:
    // 0x2eb6b4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EB6B4u;
    {
        const bool branch_taken_0x2eb6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6b4) {
            ctx->pc = 0x2EB75Cu;
            goto label_2eb75c;
        }
    }
    ctx->pc = 0x2EB6BCu;
    // 0x2eb6bc: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2eb6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eb6c0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eb6c4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x2eb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2eb6c8: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x2eb6c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2eb6cc: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x2eb6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2eb6d0: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x2eb6d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2eb6d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2eb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2eb6d8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb6dc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eb6e0: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x2eb6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x2eb6e4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB6E4u;
    {
        const bool branch_taken_0x2eb6e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2EB6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB6E4u;
            // 0x2eb6e8: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6e4) {
            ctx->pc = 0x2EB6F4u;
            goto label_2eb6f4;
        }
    }
    ctx->pc = 0x2EB6ECu;
    // 0x2eb6ec: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2eb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2eb6f0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2eb6f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2eb6f4:
    // 0x2eb6f4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x2eb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2eb6f8: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x2eb6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eb6fc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2eb6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2eb700: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb704: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2eb708: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2eb708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eb70c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2eb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2eb710: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2eb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eb714: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x2eb714u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eb718: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2eb718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2eb71c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2eb71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2eb720: 0x2665014c  addiu       $a1, $s3, 0x14C
    ctx->pc = 0x2eb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 332));
    // 0x2eb724: 0xafa70190  sw          $a3, 0x190($sp)
    ctx->pc = 0x2eb724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 7));
    // 0x2eb728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eb728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb72c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2EB72Cu;
    SET_GPR_U32(ctx, 31, 0x2EB734u);
    ctx->pc = 0x2EB730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB72Cu;
            // 0x2eb730: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB734u; }
        if (ctx->pc != 0x2EB734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB734u; }
        if (ctx->pc != 0x2EB734u) { return; }
    }
    ctx->pc = 0x2EB734u;
label_2eb734:
    // 0x2eb734: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb738: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2EB738u;
    SET_GPR_U32(ctx, 31, 0x2EB740u);
    ctx->pc = 0x2EB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB738u;
            // 0x2eb73c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB740u; }
        if (ctx->pc != 0x2EB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB740u; }
        if (ctx->pc != 0x2EB740u) { return; }
    }
    ctx->pc = 0x2EB740u;
label_2eb740:
    // 0x2eb740: 0x2665015e  addiu       $a1, $s3, 0x15E
    ctx->pc = 0x2eb740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x2eb744: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb748: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2EB748u;
    SET_GPR_U32(ctx, 31, 0x2EB750u);
    ctx->pc = 0x2EB74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB748u;
            // 0x2eb74c: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB750u; }
        if (ctx->pc != 0x2EB750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB750u; }
        if (ctx->pc != 0x2EB750u) { return; }
    }
    ctx->pc = 0x2EB750u;
label_2eb750:
    // 0x2eb750: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2eb750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eb754: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2EB754u;
    SET_GPR_U32(ctx, 31, 0x2EB75Cu);
    ctx->pc = 0x2EB758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB754u;
            // 0x2eb758: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB75Cu; }
        if (ctx->pc != 0x2EB75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB75Cu; }
        if (ctx->pc != 0x2EB75Cu) { return; }
    }
    ctx->pc = 0x2EB75Cu;
label_2eb75c:
    // 0x2eb75c: 0x0  nop
    ctx->pc = 0x2eb75cu;
    // NOP
    // 0x2eb760: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2eb760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2eb764: 0x601ffc5  bgez        $s0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2EB764u;
    {
        const bool branch_taken_0x2eb764 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB764u;
            // 0x2eb768: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb764) {
            ctx->pc = 0x2EB67Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb67c;
        }
    }
    ctx->pc = 0x2EB76Cu;
    // 0x2eb76c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2EB76Cu;
    SET_GPR_U32(ctx, 31, 0x2EB774u);
    ctx->pc = 0x2EB770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB76Cu;
            // 0x2eb770: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB774u; }
        if (ctx->pc != 0x2EB774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB774u; }
        if (ctx->pc != 0x2EB774u) { return; }
    }
    ctx->pc = 0x2EB774u;
label_2eb774:
    // 0x2eb774: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2eb774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eb778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb77c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eb77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eb784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb788: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB788u;
            // 0x2eb78c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EB790u;
}
