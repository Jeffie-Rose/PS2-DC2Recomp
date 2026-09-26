#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__15mgCVisualFixMDTFP14mgCDrawManager
// Address: 0x13f920 - 0x13fb48
void CreatePacket__15mgCVisualFixMDTFP14mgCDrawManager_0x13f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__15mgCVisualFixMDTFP14mgCDrawManager_0x13f920");
#endif

    switch (ctx->pc) {
        case 0x13f958u: goto label_13f958;
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9acu: goto label_13f9ac;
        case 0x13f9e0u: goto label_13f9e0;
        case 0x13fa14u: goto label_13fa14;
        case 0x13fa30u: goto label_13fa30;
        case 0x13fa80u: goto label_13fa80;
        default: break;
    }

    ctx->pc = 0x13f920u;

    // 0x13f920: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13f924: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13f928: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13f928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13f92c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13f930: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13f934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13f938: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13f93c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13f940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f94c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f950: 0xc04fa08  jal         func_13E820
    ctx->pc = 0x13F950u;
    SET_GPR_U32(ctx, 31, 0x13F958u);
    ctx->pc = 0x13F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F950u;
            // 0x13f954: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F958u; }
        if (ctx->pc != 0x13F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F958u; }
        if (ctx->pc != 0x13F958u) { return; }
    }
    ctx->pc = 0x13F958u;
label_13f958:
    // 0x13f958: 0x8e170060  lw          $s7, 0x60($s0)
    ctx->pc = 0x13f958u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13f95c: 0x8e1e005c  lw          $fp, 0x5C($s0)
    ctx->pc = 0x13f95cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x13f960: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x13f960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13f964: 0x8e160064  lw          $s6, 0x64($s0)
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13f968: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x13f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x13f96c: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x13f970: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x13f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x13f974: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x13f978: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13f978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13f97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f980: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13f980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f984: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13f984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x13f988: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13f98c: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13f990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f994: 0xc04f94c  jal         func_13E530
    ctx->pc = 0x13F994u;
    SET_GPR_U32(ctx, 31, 0x13F99Cu);
    ctx->pc = 0x13F998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F994u;
            // 0x13f998: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F99Cu; }
        if (ctx->pc != 0x13F99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F99Cu; }
        if (ctx->pc != 0x13F99Cu) { return; }
    }
    ctx->pc = 0x13F99Cu;
label_13f99c:
    // 0x13f99c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13f9a0: 0xaf808758  sw          $zero, -0x78A8($gp)
    ctx->pc = 0x13f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
    // 0x13f9a4: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x13F9A4u;
    {
        const bool branch_taken_0x13f9a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F9A4u;
            // 0x13f9a8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9a4) {
            ctx->pc = 0x13FACCu;
            goto label_13facc;
        }
    }
    ctx->pc = 0x13F9ACu;
label_13f9ac:
    // 0x13f9ac: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x13f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x13f9b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13f9b4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x13f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f9b8: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x13f9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x13f9bc: 0x8ec20fcc  lw          $v0, 0xFCC($s6)
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4044)));
    // 0x13f9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9c4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x13f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13f9c8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13f9cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13f9d0: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x13f9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x13f9d4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13f9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13f9d8: 0xc04f97c  jal         func_13E5F0
    ctx->pc = 0x13F9D8u;
    SET_GPR_U32(ctx, 31, 0x13F9E0u);
    ctx->pc = 0x13F9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F9D8u;
            // 0x13f9dc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5F0u;
    if (runtime->hasFunction(0x13E5F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F9E0u; }
        if (ctx->pc != 0x13F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMaterialRef__12mgCVisualMDTFP1P10mgMateriali_0x13e5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F9E0u; }
        if (ctx->pc != 0x13F9E0u) { return; }
    }
    ctx->pc = 0x13F9E0u;
label_13f9e0:
    // 0x13f9e0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13f9e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13f9ec: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x13f9f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13f9f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13f9f8: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x13f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
    // 0x13f9fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13fa00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13fa04: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13fa08: 0x8e550004  lw          $s5, 0x4($s2)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fa0c: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x13FA0Cu;
    {
        const bool branch_taken_0x13fa0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA0Cu;
            // 0x13fa10: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa0c) {
            ctx->pc = 0x13FA74u;
            goto label_13fa74;
        }
    }
    ctx->pc = 0x13FA14u;
label_13fa14:
    // 0x13fa14: 0x0  nop
    ctx->pc = 0x13fa14u;
    // NOP
    // 0x13fa18: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x13fa18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13fa1c: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x13FA1Cu;
    {
        const bool branch_taken_0x13fa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x13FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA1Cu;
            // 0x13fa20: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa1c) {
            ctx->pc = 0x13FA5Cu;
            goto label_13fa5c;
        }
    }
    ctx->pc = 0x13FA24u;
    // 0x13fa24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa28: 0xc04f9d0  jal         func_13E740
    ctx->pc = 0x13FA28u;
    SET_GPR_U32(ctx, 31, 0x13FA30u);
    ctx->pc = 0x13FA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA28u;
            // 0x13fa2c: 0x2622825  or          $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E740u;
    if (runtime->hasFunction(0x13E740u)) {
        auto targetFn = runtime->lookupFunction(0x13E740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FA30u; }
        if (ctx->pc != 0x13FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPModeRef__12mgCVisualMDTFP1i_0x13e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FA30u; }
        if (ctx->pc != 0x13FA30u) { return; }
    }
    ctx->pc = 0x13FA30u;
label_13fa30:
    // 0x13fa30: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13fa34: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x13fa34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa38: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13fa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13fa3c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x13fa40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13fa44: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x13fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x13fa48: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13fa4c: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13fa50: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13fa54: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x13fa54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13fa58: 0x0  nop
    ctx->pc = 0x13fa58u;
    // NOP
label_13fa5c:
    // 0x13fa5c: 0x0  nop
    ctx->pc = 0x13fa5cu;
    // NOP
    // 0x13fa60: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x13fa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x13fa64: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x13fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x13fa68: 0x8eb50010  lw          $s5, 0x10($s5)
    ctx->pc = 0x13fa68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x13fa6c: 0x16a0ffe9  bnez        $s5, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13FA6Cu;
    {
        const bool branch_taken_0x13fa6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA6Cu;
            // 0x13fa70: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa6c) {
            ctx->pc = 0x13FA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fa14;
        }
    }
    ctx->pc = 0x13FA74u;
label_13fa74:
    // 0x13fa74: 0x0  nop
    ctx->pc = 0x13fa74u;
    // NOP
    // 0x13fa78: 0xc04f94c  jal         func_13E530
    ctx->pc = 0x13FA78u;
    SET_GPR_U32(ctx, 31, 0x13FA80u);
    ctx->pc = 0x13FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA78u;
            // 0x13fa7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FA80u; }
        if (ctx->pc != 0x13FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FA80u; }
        if (ctx->pc != 0x13FA80u) { return; }
    }
    ctx->pc = 0x13FA80u;
label_13fa80:
    // 0x13fa80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13fa84: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13fa88: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x13fa8c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x13fa8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13fa94: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x13fa98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13fa9c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13faa0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13faa4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13faa8: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13faac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FAACu;
    {
        const bool branch_taken_0x13faac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAACu;
            // 0x13fab0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13faac) {
            ctx->pc = 0x13FABCu;
            goto label_13fabc;
        }
    }
    ctx->pc = 0x13FAB4u;
    // 0x13fab4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13fab8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13fab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13fabc:
    // 0x13fabc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x13fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x13fac0: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x13fac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fac4: 0x1640ffb9  bnez        $s2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x13FAC4u;
    {
        const bool branch_taken_0x13fac4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fac4) {
            ctx->pc = 0x13F9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f9ac;
        }
    }
    ctx->pc = 0x13FACCu;
label_13facc:
    // 0x13facc: 0x0  nop
    ctx->pc = 0x13faccu;
    // NOP
    // 0x13fad0: 0x2901023  subu        $v0, $s4, $s0
    ctx->pc = 0x13fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x13fad4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FAD4u;
    {
        const bool branch_taken_0x13fad4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAD4u;
            // 0x13fad8: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fad4) {
            ctx->pc = 0x13FAE4u;
            goto label_13fae4;
        }
    }
    ctx->pc = 0x13FADCu;
    // 0x13fadc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13fae0: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13fae4:
    // 0x13fae4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13fae8: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x13faec: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x13faecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13faf0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13faf4: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x13faf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13faf8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FAF8u;
    {
        const bool branch_taken_0x13faf8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAF8u;
            // 0x13fafc: 0xafc30024  sw          $v1, 0x24($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13faf8) {
            ctx->pc = 0x13FB08u;
            goto label_13fb08;
        }
    }
    ctx->pc = 0x13FB00u;
    // 0x13fb00: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13fb04: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x13fb04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_13fb08:
    // 0x13fb08: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x13fb0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13fb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13fb14: 0xaee30024  sw          $v1, 0x24($s7)
    ctx->pc = 0x13fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 3));
    // 0x13fb18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13fb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13fb1c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13fb1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13fb20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13fb20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fb24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13fb24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13fb28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13fb28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fb2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13fb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fb30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13fb30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fb34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fb34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fb38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fb3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB40u;
            // 0x13fb44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FB48u;
}
