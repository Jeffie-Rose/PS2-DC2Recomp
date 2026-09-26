#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTourBoot__9CSaveDataFi
// Address: 0x2f68b0 - 0x2f6ad0
void CheckTourBoot__9CSaveDataFi_0x2f68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTourBoot__9CSaveDataFi_0x2f68b0");
#endif

    switch (ctx->pc) {
        case 0x2f68e0u: goto label_2f68e0;
        case 0x2f6a1cu: goto label_2f6a1c;
        case 0x2f6a48u: goto label_2f6a48;
        case 0x2f6a9cu: goto label_2f6a9c;
        case 0x2f6abcu: goto label_2f6abc;
        default: break;
    }

    ctx->pc = 0x2f68b0u;

    // 0x2f68b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f68b4: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2f68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2f68b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f68b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f68bc: 0x346343dc  ori         $v1, $v1, 0x43DC
    ctx->pc = 0x2f68bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17372);
    // 0x2f68c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f68c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f68c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f68c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f68c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f68cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f68d0: 0x460007a  bltz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2F68D0u;
    {
        const bool branch_taken_0x2f68d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F68D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68D0u;
            // 0x2f68d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68d0) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F68D8u;
    // 0x2f68d8: 0xc0bda20  jal         func_2F6880
    ctx->pc = 0x2F68D8u;
    SET_GPR_U32(ctx, 31, 0x2F68E0u);
    ctx->pc = 0x2F6880u;
    if (runtime->hasFunction(0x2F6880u)) {
        auto targetFn = runtime->lookupFunction(0x2F6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F68E0u; }
        if (ctx->pc != 0x2F68E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventDay__9CSaveDataFi_0x2f6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F68E0u; }
        if (ctx->pc != 0x2F68E0u) { return; }
    }
    ctx->pc = 0x2F68E0u;
label_2f68e0:
    // 0x2f68e0: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x2f68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x2f68e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f68e8: 0x348443d8  ori         $a0, $a0, 0x43D8
    ctx->pc = 0x2f68e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17368);
    // 0x2f68ec: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f68f0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x2f68f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f68f4: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F68F4u;
    {
        const bool branch_taken_0x2f68f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F68F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68F4u;
            // 0x2f68f8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68f4) {
            ctx->pc = 0x2F6940u;
            goto label_2f6940;
        }
    }
    ctx->pc = 0x2F68FCu;
    // 0x2f68fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6900: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2f6900u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6904: 0x0  nop
    ctx->pc = 0x2f6904u;
    // NOP
    // 0x2f6908: 0x0  nop
    ctx->pc = 0x2f6908u;
    // NOP
    // 0x2f690c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f690cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f6910: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2f6910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f6914: 0x14200069  bnez        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x2F6914u;
    {
        const bool branch_taken_0x2f6914 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6914) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F691Cu;
    // 0x2f691c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6920: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6924: 0xa42043d8  sh          $zero, 0x43D8($at)
    ctx->pc = 0x2f6924u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f6928: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f692c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f692cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6930: 0xac2243d4  sw          $v0, 0x43D4($at)
    ctx->pc = 0x2f6930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17364), GPR_U32(ctx, 2));
    // 0x2f6934: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2F6934u;
    {
        const bool branch_taken_0x2f6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6934u;
            // 0x2f6938: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6934) {
            ctx->pc = 0x2F6AC0u;
            goto label_2f6ac0;
        }
    }
    ctx->pc = 0x2F693Cu;
    // 0x2f693c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f6940:
    // 0x2f6940: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2f6940u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6944: 0x0  nop
    ctx->pc = 0x2f6944u;
    // NOP
    // 0x2f6948: 0x0  nop
    ctx->pc = 0x2f6948u;
    // NOP
    // 0x2f694c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f694cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f6950: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2f6950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f6954: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6954u;
    {
        const bool branch_taken_0x2f6954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6954u;
            // 0x2f6958: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6954) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F695Cu;
    // 0x2f695c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6960: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6964: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F6964u;
    {
        const bool branch_taken_0x2f6964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6964u;
            // 0x2f6968: 0xa42043d8  sh          $zero, 0x43D8($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6964) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F696Cu;
    // 0x2f696c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f696cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f6970:
    // 0x2f6970: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6970u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6974: 0x8c2343dc  lw          $v1, 0x43DC($at)
    ctx->pc = 0x2f6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x2f6978: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x2f6978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f697c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F697Cu;
    {
        const bool branch_taken_0x2f697c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F697Cu;
            // 0x2f6980: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f697c) {
            ctx->pc = 0x2F69D8u;
            goto label_2f69d8;
        }
    }
    ctx->pc = 0x2F6984u;
    // 0x2f6984: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6988: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6988u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f698c: 0x8c2343d0  lw          $v1, 0x43D0($at)
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17360)));
    // 0x2f6990: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6994: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6994u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6998: 0x8c2443d4  lw          $a0, 0x43D4($at)
    ctx->pc = 0x2f6998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17364)));
    // 0x2f699c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f699cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f69a0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F69A0u;
    {
        const bool branch_taken_0x2f69a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f69a0) {
            ctx->pc = 0x2F69D4u;
            goto label_2f69d4;
        }
    }
    ctx->pc = 0x2F69A8u;
    // 0x2f69a8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2f69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2f69ac: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f69acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f69b0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F69B0u;
    {
        const bool branch_taken_0x2f69b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f69b0) {
            ctx->pc = 0x2F69D4u;
            goto label_2f69d4;
        }
    }
    ctx->pc = 0x2F69B8u;
    // 0x2f69b8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2f69b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f69bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F69BCu;
    {
        const bool branch_taken_0x2f69bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f69bc) {
            ctx->pc = 0x2F69D4u;
            goto label_2f69d4;
        }
    }
    ctx->pc = 0x2F69C4u;
    // 0x2f69c4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f69c8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f69c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f69cc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F69CCu;
    {
        const bool branch_taken_0x2f69cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69CCu;
            // 0x2f69d0: 0xa42043d8  sh          $zero, 0x43D8($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69cc) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F69D4u;
label_2f69d4:
    // 0x2f69d4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f69d8:
    // 0x2f69d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69dc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f69dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f69e0: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2f69e4: 0xac2243d0  sw          $v0, 0x43D0($at)
    ctx->pc = 0x2f69e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17360), GPR_U32(ctx, 2));
    // 0x2f69e8: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f69e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f69ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f69f0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f69f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f69f4: 0xa42243d8  sh          $v0, 0x43D8($at)
    ctx->pc = 0x2f69f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f69f8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f69fc: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6a00: 0x344243da  ori         $v0, $v0, 0x43DA
    ctx->pc = 0x2f6a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17370);
    // 0x2f6a04: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6a04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6a08: 0xa02043db  sb          $zero, 0x43DB($at)
    ctx->pc = 0x2f6a08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17371), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6a0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f6a10: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6a14: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F6A14u;
    SET_GPR_U32(ctx, 31, 0x2F6A1Cu);
    ctx->pc = 0x2F6A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A14u;
            // 0x2f6a18: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A1Cu; }
        if (ctx->pc != 0x2F6A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A1Cu; }
        if (ctx->pc != 0x2F6A1Cu) { return; }
    }
    ctx->pc = 0x2F6A1Cu;
label_2f6a1c:
    // 0x2f6a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6A1Cu;
    {
        const bool branch_taken_0x2f6a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A1Cu;
            // 0x2f6a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a1c) {
            ctx->pc = 0x2F6A3Cu;
            goto label_2f6a3c;
        }
    }
    ctx->pc = 0x2F6A24u;
    // 0x2f6a24: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x2f6a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f6a28: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F6A28u;
    {
        const bool branch_taken_0x2f6a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A28u;
            // 0x2f6a2c: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a28) {
            ctx->pc = 0x2F6A58u;
            goto label_2f6a58;
        }
    }
    ctx->pc = 0x2F6A30u;
    // 0x2f6a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6A30u;
    {
        const bool branch_taken_0x2f6a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A30u;
            // 0x2f6a34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a30) {
            ctx->pc = 0x2F6A54u;
            goto label_2f6a54;
        }
    }
    ctx->pc = 0x2F6A38u;
    // 0x2f6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6a3c:
    // 0x2f6a3c: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x2f6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x2f6a40: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F6A40u;
    SET_GPR_U32(ctx, 31, 0x2F6A48u);
    ctx->pc = 0x2F6A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A40u;
            // 0x2f6a44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A48u; }
        if (ctx->pc != 0x2F6A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A48u; }
        if (ctx->pc != 0x2F6A48u) { return; }
    }
    ctx->pc = 0x2F6A48u;
label_2f6a48:
    // 0x2f6a48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6A48u;
    {
        const bool branch_taken_0x2f6a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a48) {
            ctx->pc = 0x2F6A54u;
            goto label_2f6a54;
        }
    }
    ctx->pc = 0x2F6A50u;
    // 0x2f6a50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f6a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6a54:
    // 0x2f6a54: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f6a58:
    // 0x2f6a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a5c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6a60: 0xa03143da  sb          $s1, 0x43DA($at)
    ctx->pc = 0x2f6a60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17370), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f6a64: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6a68: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6a68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6a6c: 0x802443da  lb          $a0, 0x43DA($at)
    ctx->pc = 0x2f6a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x2f6a70: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F6A70u;
    {
        const bool branch_taken_0x2f6a70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A70u;
            // 0x2f6a74: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a70) {
            ctx->pc = 0x2F6AA0u;
            goto label_2f6aa0;
        }
    }
    ctx->pc = 0x2F6A78u;
    // 0x2f6a78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f6a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f6a7c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2f6a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2f6a80: 0x2011821  addu        $v1, $s0, $at
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6a84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6A84u;
    {
        const bool branch_taken_0x2f6a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a84) {
            ctx->pc = 0x2F6A9Cu;
            goto label_2f6a9c;
        }
    }
    ctx->pc = 0x2F6A8Cu;
    // 0x2f6a8c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2f6a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2f6a90: 0x342151e8  ori         $at, $at, 0x51E8
    ctx->pc = 0x2f6a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20968);
    // 0x2f6a94: 0xc066bd0  jal         func_19AF40
    ctx->pc = 0x2F6A94u;
    SET_GPR_U32(ctx, 31, 0x2F6A9Cu);
    ctx->pc = 0x2F6A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A94u;
            // 0x2f6a98: 0x612021  addu        $a0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AF40u;
    if (runtime->hasFunction(0x19AF40u)) {
        auto targetFn = runtime->lookupFunction(0x19AF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A9Cu; }
        if (ctx->pc != 0x2F6A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetRecord__18CFishingTournamentFv_0x19af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A9Cu; }
        if (ctx->pc != 0x2F6A9Cu) { return; }
    }
    ctx->pc = 0x2F6A9Cu;
label_2f6a9c:
    // 0x2f6a9c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f6aa0:
    // 0x2f6aa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6aa4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6aa8: 0x802443da  lb          $a0, 0x43DA($at)
    ctx->pc = 0x2f6aa8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x2f6aac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6AACu;
    {
        const bool branch_taken_0x2f6aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6aac) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F6AB4u;
    // 0x2f6ab4: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x2F6AB4u;
    SET_GPR_U32(ctx, 31, 0x2F6ABCu);
    ctx->pc = 0x1A1A80u;
    if (runtime->hasFunction(0x1A1A80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6ABCu; }
        if (ctx->pc != 0x2F6ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AquaFishFatigueClear__Fv_0x1a1a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6ABCu; }
        if (ctx->pc != 0x2F6ABCu) { return; }
    }
    ctx->pc = 0x2F6ABCu;
label_2f6abc:
    // 0x2f6abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f6ac0:
    // 0x2f6ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6AC8u;
            // 0x2f6acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6AD0u;
}
