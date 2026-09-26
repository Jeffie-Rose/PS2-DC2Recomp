#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeNPCList__12CRemovalMenuFv
// Address: 0x1fc910 - 0x1fc9f8
void MakeNPCList__12CRemovalMenuFv_0x1fc910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeNPCList__12CRemovalMenuFv_0x1fc910");
#endif

    switch (ctx->pc) {
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc93cu: goto label_1fc93c;
        case 0x1fc960u: goto label_1fc960;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc9c0u: goto label_1fc9c0;
        default: break;
    }

    ctx->pc = 0x1fc910u;

    // 0x1fc910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fc914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fc918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc928: 0xac800414  sw          $zero, 0x414($a0)
    ctx->pc = 0x1fc928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1044), GPR_U32(ctx, 0));
    // 0x1fc92c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc930:
    // 0x1fc930: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x1fc934: 0xc06723c  jal         func_19C8F0
    ctx->pc = 0x1FC934u;
    SET_GPR_U32(ctx, 31, 0x1FC93Cu);
    ctx->pc = 0x1FC938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC934u;
            // 0x1fc938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F0u;
    if (runtime->hasFunction(0x19C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC93Cu; }
        if (ctx->pc != 0x1FC93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC93Cu; }
        if (ctx->pc != 0x1FC93Cu) { return; }
    }
    ctx->pc = 0x1FC93Cu;
label_1fc93c:
    // 0x1fc93c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc940: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC940u;
    {
        const bool branch_taken_0x1fc940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC940u;
            // 0x1fc944: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc940) {
            ctx->pc = 0x1FC9A0u;
            goto label_1fc9a0;
        }
    }
    ctx->pc = 0x1FC948u;
    // 0x1fc948: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC948u;
    {
        const bool branch_taken_0x1fc948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FC94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC948u;
            // 0x1fc94c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc948) {
            ctx->pc = 0x1FC958u;
            goto label_1fc958;
        }
    }
    ctx->pc = 0x1FC950u;
    // 0x1fc950: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC950u;
    {
        const bool branch_taken_0x1fc950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fc950) {
            ctx->pc = 0x1FC974u;
            goto label_1fc974;
        }
    }
    ctx->pc = 0x1FC958u;
label_1fc958:
    // 0x1fc958: 0xc064220  jal         func_190880
    ctx->pc = 0x1FC958u;
    SET_GPR_U32(ctx, 31, 0x1FC960u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC960u; }
        if (ctx->pc != 0x1FC960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC960u; }
        if (ctx->pc != 0x1FC960u) { return; }
    }
    ctx->pc = 0x1FC960u;
label_1fc960:
    // 0x1fc960: 0xc094414  jal         func_251050
    ctx->pc = 0x1FC960u;
    SET_GPR_U32(ctx, 31, 0x1FC968u);
    ctx->pc = 0x1FC964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC960u;
            // 0x1fc964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251050u;
    if (runtime->hasFunction(0x251050u)) {
        auto targetFn = runtime->lookupFunction(0x251050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC968u; }
        if (ctx->pc != 0x1FC968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowChapter__FP9CSaveData_0x251050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC968u; }
        if (ctx->pc != 0x1FC968u) { return; }
    }
    ctx->pc = 0x1FC968u;
label_1fc968:
    // 0x1fc968: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x1fc968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fc96c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC96Cu;
    {
        const bool branch_taken_0x1fc96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc96c) {
            ctx->pc = 0x1FC9A0u;
            goto label_1fc9a0;
        }
    }
    ctx->pc = 0x1FC974u;
label_1fc974:
    // 0x1fc974: 0x0  nop
    ctx->pc = 0x1fc974u;
    // NOP
    // 0x1fc978: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC978u;
    {
        const bool branch_taken_0x1fc978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC978u;
            // 0x1fc97c: 0x32430004  andi        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc978) {
            ctx->pc = 0x1FC9A0u;
            goto label_1fc9a0;
        }
    }
    ctx->pc = 0x1FC980u;
    // 0x1fc980: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC980u;
    {
        const bool branch_taken_0x1fc980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc980) {
            ctx->pc = 0x1FC9A0u;
            goto label_1fc9a0;
        }
    }
    ctx->pc = 0x1FC988u;
    // 0x1fc988: 0x8e230414  lw          $v1, 0x414($s1)
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x1fc98c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc994: 0xae240414  sw          $a0, 0x414($s1)
    ctx->pc = 0x1fc994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 4));
    // 0x1fc998: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fc998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fc99c: 0xac700144  sw          $s0, 0x144($v1)
    ctx->pc = 0x1fc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 16));
label_1fc9a0:
    // 0x1fc9a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc9a4: 0x2a01001a  slti        $at, $s0, 0x1A
    ctx->pc = 0x1fc9a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1fc9a8: 0x1420ffe1  bnez        $at, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FC930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x8e240414  lw          $a0, 0x414($s1)
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x1fc9b4: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x1fc9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc9b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC9B8u;
    {
        const bool branch_taken_0x1fc9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9B8u;
            // 0x1fc9bc: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9b8) {
            ctx->pc = 0x1FC9E0u;
            goto label_1fc9e0;
        }
    }
    ctx->pc = 0x1FC9C0u;
label_1fc9c0:
    // 0x1fc9c0: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1fc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1fc9c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fc9c8: 0xac600144  sw          $zero, 0x144($v1)
    ctx->pc = 0x1fc9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
    // 0x1fc9cc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fc9d0: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x1fc9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc9d4: 0x0  nop
    ctx->pc = 0x1fc9d4u;
    // NOP
    // 0x1fc9d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC9D8u;
    {
        const bool branch_taken_0x1fc9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc9d8) {
            ctx->pc = 0x1FC9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fc9c0;
        }
    }
    ctx->pc = 0x1FC9E0u;
label_1fc9e0:
    // 0x1fc9e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fc9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9F0u;
            // 0x1fc9f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC9F8u;
}
