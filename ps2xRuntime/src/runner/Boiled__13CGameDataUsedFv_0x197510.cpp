#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Boiled__13CGameDataUsedFv
// Address: 0x197510 - 0x1975f8
void Boiled__13CGameDataUsedFv_0x197510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Boiled__13CGameDataUsedFv_0x197510");
#endif

    switch (ctx->pc) {
        case 0x19752cu: goto label_19752c;
        case 0x197550u: goto label_197550;
        case 0x1975b8u: goto label_1975b8;
        default: break;
    }

    ctx->pc = 0x197510u;

    // 0x197510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19751c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197524: 0xc065dc0  jal         func_197700
    ctx->pc = 0x197524u;
    SET_GPR_U32(ctx, 31, 0x19752Cu);
    ctx->pc = 0x197528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197524u;
            // 0x197528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19752Cu; }
        if (ctx->pc != 0x19752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19752Cu; }
        if (ctx->pc != 0x19752Cu) { return; }
    }
    ctx->pc = 0x19752Cu;
label_19752c:
    // 0x19752c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x197530: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x197530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197534: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197538: 0x244261d0  addiu       $v0, $v0, 0x61D0
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
    // 0x19753c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197544: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197548: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x197548u;
    SET_GPR_U32(ctx, 31, 0x197550u);
    ctx->pc = 0x19754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197548u;
            // 0x19754c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197550u; }
        if (ctx->pc != 0x197550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197550u; }
        if (ctx->pc != 0x197550u) { return; }
    }
    ctx->pc = 0x197550u;
label_197550:
    // 0x197550: 0x96090036  lhu         $t1, 0x36($s0)
    ctx->pc = 0x197550u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x197554: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x197558: 0x96080038  lhu         $t0, 0x38($s0)
    ctx->pc = 0x197558u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19755c: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x19755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x197560: 0x9607003a  lhu         $a3, 0x3A($s0)
    ctx->pc = 0x197560u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x197564: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x197568: 0x96060028  lhu         $a2, 0x28($s0)
    ctx->pc = 0x197568u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19756c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x197570: 0x26040012  addiu       $a0, $s0, 0x12
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x197574: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x197574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x197578: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x197578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x19757c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19757cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x197580: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x197580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197584: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x197584u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x197588: 0x0  nop
    ctx->pc = 0x197588u;
    // NOP
    // 0x19758c: 0x3810  mfhi        $a3
    ctx->pc = 0x19758cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x197590: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x197594: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x197594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197598: 0x0  nop
    ctx->pc = 0x197598u;
    // NOP
    // 0x19759c: 0x0  nop
    ctx->pc = 0x19759cu;
    // NOP
    // 0x1975a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1975a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1975a4: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1975a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1975ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1975b0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1975B0u;
    SET_GPR_U32(ctx, 31, 0x1975B8u);
    ctx->pc = 0x1975B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1975B0u;
            // 0x1975b4: 0x468821  addu        $s1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975B8u; }
        if (ctx->pc != 0x1975B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975B8u; }
        if (ctx->pc != 0x1975B8u) { return; }
    }
    ctx->pc = 0x1975B8u;
label_1975b8:
    // 0x1975b8: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x1975b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1975bc: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1975c0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1975c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1975c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1975c8: 0x240301aa  addiu       $v1, $zero, 0x1AA
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x1975cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1975d0: 0xa6070010  sh          $a3, 0x10($s0)
    ctx->pc = 0x1975d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 7));
    // 0x1975d4: 0xa6060028  sh          $a2, 0x28($s0)
    ctx->pc = 0x1975d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x1975d8: 0xa2050004  sb          $a1, 0x4($s0)
    ctx->pc = 0x1975d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1975dc: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1975dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1975e0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1975e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1975e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1975e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1975e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1975e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1975ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1975ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1975f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1975F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1975F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975F0u;
            // 0x1975f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1975F8u;
}
